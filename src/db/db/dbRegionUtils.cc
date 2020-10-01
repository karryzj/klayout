
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2020 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/


#include "dbRegionUtils.h"
#include "dbEdgeBoolean.h"
#include "tlSelect.h"

namespace db
{

// -------------------------------------------------------------------------------------
//  Edge2EdgeCheckBase implementation

Edge2EdgeCheckBase::Edge2EdgeCheckBase (const EdgeRelationFilter &check, bool different_polygons, bool requires_different_layers, bool with_shielding)
  : mp_check (&check), m_requires_different_layers (requires_different_layers), m_different_polygons (different_polygons),
    m_with_shielding (with_shielding), m_has_edge_pair_output (true), m_has_negative_edge_output (false), m_pass (0)
{
  m_distance = check.distance ();
}

bool
Edge2EdgeCheckBase::prepare_next_pass ()
{
  ++m_pass;

  if (m_pass == 1) {

    if ((m_with_shielding || m_has_negative_edge_output) && ! m_ep.empty ()) {

      m_ep_discarded.resize (m_ep.size (), false);

      //  second pass:
      return true;

    }

  }

  if (! m_ep.empty () && m_has_edge_pair_output) {

    std::vector<bool>::const_iterator d = m_ep_discarded.begin ();
    std::vector<db::EdgePair>::const_iterator ep = m_ep.begin ();
    while (ep != m_ep.end ()) {
      bool use_result = true;
      if (d != m_ep_discarded.end ()) {
        use_result = ! *d;
        ++d;
      }
      if (use_result) {
        put (*ep);
      }
      ++ep;
    }

  }

  return false;
}

static inline bool shields (const db::EdgePair &ep, const db::Edge &q)
{
  db::Edge pe1 (ep.first ().p1 (), ep.second ().p2 ());
  db::Edge pe2 (ep.second ().p1 (), ep.first ().p2 ());

  std::pair<bool, db::Point> ip1 = pe1.intersect_point (q);
  std::pair<bool, db::Point> ip2 = pe2.intersect_point (q);

  if (ip1.first && ip2.first) {
    return ip1.second != ip2.second || (pe1.side_of (q.p1 ()) != 0 && pe2.side_of (q.p2 ()) != 0);
  } else {
    return false;
  }
}

void
Edge2EdgeCheckBase::finish (const Edge *o, const size_t &p)
{
  if (m_has_negative_edge_output && m_pass == 1) {

    //  no interaction at all: create a single-edged edge pair
    int l = int (p & size_t (1));
    put_negative (*o, l);

  }
}

void
Edge2EdgeCheckBase::add (const db::Edge *o1, size_t p1, const db::Edge *o2, size_t p2)
{
  if (m_pass == 0) {

    //  Overlap or inside checks require input from different layers
    if ((! m_different_polygons || p1 != p2) && (! m_requires_different_layers || ((p1 ^ p2) & 1) != 0)) {

      //  ensure that the first check argument is of layer 1 and the second of
      //  layer 2 (unless both are of the same layer)
      int l1 = int (p1 & size_t (1));
      int l2 = int (p2 & size_t (1));

      db::EdgePair ep;
      if (mp_check->check (l1 <= l2 ? *o1 : *o2, l1 <= l2 ? *o2 : *o1, &ep)) {

        //  found a violation: store inside the local buffer for now. In the second
        //  pass we will eliminate those which are shielded completely (with shielding)
        //  and/or compute the negative edges.
        size_t n = m_ep.size ();
        m_ep.push_back (ep);
        m_e2ep.insert (std::make_pair (std::make_pair (*o1, p1), n));
        m_e2ep.insert (std::make_pair (std::make_pair (*o2, p2), n));

      }

    }

  } else {

    //  set the discarded flags for shielded output
    if (m_with_shielding) {

      //  a simple (complete) shielding implementation which is based on the
      //  assumption that shielding is relevant as soon as a foreign edge cuts through
      //  both of the edge pair's connecting edges.

      //  TODO: this implementation does not take into account the nature of the
      //  EdgePair - because of "whole_edge" it may not reflect the part actually
      //  violating the distance.

      std::vector<size_t> n1, n2;

      for (unsigned int p = 0; p < 2; ++p) {

        std::pair<db::Edge, size_t> k (*o1, p1);
        for (std::multimap<std::pair<db::Edge, size_t>, size_t>::const_iterator i = m_e2ep.find (k); i != m_e2ep.end () && i->first == k; ++i) {
          n1.push_back (i->second);
        }

        std::sort (n1.begin (), n1.end ());

        std::swap (o1, o2);
        std::swap (p1, p2);
        n1.swap (n2);

      }

      for (unsigned int p = 0; p < 2; ++p) {

        std::vector<size_t> nn;
        std::set_difference (n1.begin (), n1.end (), n2.begin (), n2.end (), std::back_inserter (nn));

        for (std::vector<size_t>::const_iterator i = nn.begin (); i != nn.end (); ++i) {
          if (! m_ep_discarded [*i]) {
            db::EdgePair ep = m_ep [*i].normalized ();
            if (shields (ep, *o2)) {
              m_ep_discarded [*i] = true;
            }
          }
        }

        std::swap (o1, o2);
        std::swap (p1, p2);
        n1.swap (n2);

      }

    }

    //  prepare the negative edge output
    if (m_has_negative_edge_output) {

      //  Overlap or inside checks require input from different layers
      if ((! m_different_polygons || p1 != p2) && (! m_requires_different_layers || ((p1 ^ p2) & 1) != 0)) {

        for (int p = 0; p < 2; ++p) {

          std::pair<db::Edge, size_t> k (*o1, p1);
          std::multimap<std::pair<db::Edge, size_t>, size_t>::const_iterator i0 = m_e2ep.find (k);

          bool fully_removed = false;
          for (std::multimap<std::pair<db::Edge, size_t>, size_t>::const_iterator i = i0; ! fully_removed && i != m_e2ep.end () && i->first == k; ++i) {
            fully_removed = (m_ep [i->second].first () == *o1);
          }

          if (! fully_removed) {

            std::set<db::Edge> partial_edges;

            db::EdgeBooleanCluster<std::set<db::Edge> > ec (&partial_edges, db::EdgeNot);
            ec.add (o1, 0);

            for (std::multimap<std::pair<db::Edge, size_t>, size_t>::const_iterator i = i0; i != m_e2ep.end () && i->first == k; ++i) {
              if (i->second >= m_ep_discarded.size () || !m_ep_discarded [i->second]) {
                ec.add (&m_ep [i->second].first (), 1);
              }
            }

            ec.finish ();

            for (std::set<db::Edge>::const_iterator e = partial_edges.begin (); e != partial_edges.end (); ++e) {
              put_negative (*e, p);
            }

            std::swap (o1, o2);
            std::swap (p1, p2);

          }

        }

      }

    }

  }

}

/**
 *  @brief Gets a value indicating whether the check requires different layers
 */
bool
Edge2EdgeCheckBase::requires_different_layers () const
{
  return m_requires_different_layers;
}

/**
 *  @brief Sets a value indicating whether the check requires different layers
 */
void
Edge2EdgeCheckBase::set_requires_different_layers (bool f)
{
  m_requires_different_layers = f;
}

/**
 *  @brief Gets a value indicating whether the check requires different layers
 */
bool
Edge2EdgeCheckBase::different_polygons () const
{
  return m_different_polygons;
}

/**
 *  @brief Sets a value indicating whether the check requires different layers
 */
void
Edge2EdgeCheckBase::set_different_polygons (bool f)
{
  m_different_polygons = f;
}

/**
 *  @brief Gets the distance value
 */
EdgeRelationFilter::distance_type
Edge2EdgeCheckBase::distance () const
{
  return m_distance;
}

// -------------------------------------------------------------------------------------
//  Poly2PolyCheckBase implementation

template <class PolygonType>
poly2poly_check_base<PolygonType>::poly2poly_check_base (Edge2EdgeCheckBase &output)
  : mp_output (& output)
{
  //  .. nothing yet ..
}

template <class PolygonType>
void
poly2poly_check_base<PolygonType>::finish (const PolygonType *o, size_t p)
{
  enter (*o, p);
}

static size_t vertices (const db::Polygon &p)
{
  return p.vertices ();
}

static size_t vertices (const db::PolygonRef &p)
{
  return p.obj ().vertices ();
}

template <class PolygonType>
void
poly2poly_check_base<PolygonType>::enter (const PolygonType &o, size_t p)
{
  if (! mp_output->requires_different_layers () && ! mp_output->different_polygons ()) {

    //  finally we check the polygons vs. itself for checks involving intra-polygon interactions

    m_scanner.clear ();
    m_scanner.reserve (vertices (o));

    m_edges.clear ();
    m_edges.reserve (vertices (o));

    for (typename PolygonType::polygon_edge_iterator e = o.begin_edge (); ! e.at_end (); ++e) {
      m_edges.push_back (*e);
      m_scanner.insert (& m_edges.back (), p);
    }

    tl_assert (m_edges.size () == vertices (o));

    m_scanner.process (*mp_output, mp_output->distance (), db::box_convert<db::Edge> ());

  }
}

template <class PolygonType>
void
poly2poly_check_base<PolygonType>::add (const PolygonType *o1, size_t p1, const PolygonType *o2, size_t p2)
{
  enter (*o1, p1, *o2, p2);
}

template <class PolygonType>
void
poly2poly_check_base<PolygonType>::enter (const PolygonType &o1, size_t p1, const PolygonType &o2, size_t p2)
{
  if ((! mp_output->different_polygons () || p1 != p2) && (! mp_output->requires_different_layers () || ((p1 ^ p2) & 1) != 0)) {

    m_scanner.clear ();
    m_scanner.reserve (vertices (o1) + vertices (o2));

    m_edges.clear ();
    m_edges.reserve (vertices (o1) + vertices (o2));

    for (typename PolygonType::polygon_edge_iterator e = o1.begin_edge (); ! e.at_end (); ++e) {
      m_edges.push_back (*e);
      m_scanner.insert (& m_edges.back (), p1);
    }

    for (typename PolygonType::polygon_edge_iterator e = o2.begin_edge (); ! e.at_end (); ++e) {
      m_edges.push_back (*e);
      m_scanner.insert (& m_edges.back (), p2);
    }

    tl_assert (m_edges.size () == vertices (o1) + vertices (o2));

    //  temporarily disable intra-polygon check in that step .. we do that later in finish()
    //  if required (#650).
    bool no_intra = mp_output->different_polygons ();
    mp_output->set_different_polygons (true);

    m_scanner.process (*mp_output, mp_output->distance (), db::box_convert<db::Edge> ());

    mp_output->set_different_polygons (no_intra);

  }
}

//  explicit instantiations
template class poly2poly_check_base<db::Polygon>;
template class poly2poly_check_base<db::PolygonRef>;

// -------------------------------------------------------------------------------------
//  RegionToEdgeInteractionFilterBase implementation

template <class PolygonType, class EdgeType, class OutputType>
region_to_edge_interaction_filter_base<PolygonType, EdgeType, OutputType>::region_to_edge_interaction_filter_base (bool inverse, bool get_all)
  : m_inverse (inverse), m_get_all (get_all)
{
  //  .. nothing yet ..
}

template <class PolygonType, class EdgeType, class OutputType>
void
region_to_edge_interaction_filter_base<PolygonType, EdgeType, OutputType>::preset (const OutputType *s)
{
  m_seen.insert (s);
}

template <class PolygonType, class EdgeType, class OutputType>
void
region_to_edge_interaction_filter_base<PolygonType, EdgeType, OutputType>::add (const PolygonType *p, size_t, const EdgeType *e, size_t)
{
  const OutputType *o = 0;
  tl::select (o, p, e);

  if (m_get_all || (m_seen.find (o) == m_seen.end ()) != m_inverse) {

    //  A polygon and an edge interact if the edge is either inside completely
    //  of at least one edge of the polygon intersects with the edge
    bool interacts = false;
    if (p->box ().contains (e->p1 ()) && db::inside_poly (p->begin_edge (), e->p1 ()) >= 0) {
      interacts = true;
    } else {
      for (typename PolygonType::polygon_edge_iterator pe = p->begin_edge (); ! pe.at_end () && ! interacts; ++pe) {
        if ((*pe).intersect (*e)) {
          interacts = true;
        }
      }
    }

    if (interacts) {
      if (m_inverse) {
        m_seen.erase (o);
      } else {
        if (! m_get_all) {
          m_seen.insert (o);
        }
        put (*o);
      }
    }

  }
}

template <class PolygonType, class EdgeType, class OutputType>
void
region_to_edge_interaction_filter_base<PolygonType, EdgeType, OutputType>::fill_output ()
{
  for (typename std::set<const OutputType *>::const_iterator s = m_seen.begin (); s != m_seen.end (); ++s) {
    put (**s);
  }
}

//  explicit instantiations
template class region_to_edge_interaction_filter_base<db::Polygon, db::Edge, db::Polygon>;
template class region_to_edge_interaction_filter_base<db::PolygonRef, db::Edge, db::PolygonRef>;
template class region_to_edge_interaction_filter_base<db::Polygon, db::Edge, db::Edge>;
template class region_to_edge_interaction_filter_base<db::PolygonRef, db::Edge, db::Edge>;

// -------------------------------------------------------------------------------------
//  RegionToTextInteractionFilterBase implementation

template <class PolygonType, class TextType, class OutputType>
region_to_text_interaction_filter_base<PolygonType, TextType, OutputType>::region_to_text_interaction_filter_base (bool inverse, bool get_all)
  : m_inverse (inverse), m_get_all (get_all)
{
  //  .. nothing yet ..
}

template <class PolygonType, class TextType, class OutputType>
void
region_to_text_interaction_filter_base<PolygonType, TextType, OutputType>::preset (const OutputType *s)
{
  m_seen.insert (s);
}

template <class PolygonType, class TextType, class OutputType>
void
region_to_text_interaction_filter_base<PolygonType, TextType, OutputType>::add (const PolygonType *p, size_t, const TextType *t, size_t)
{
  const OutputType *o = 0;
  tl::select (o, p, t);

  if (m_get_all || (m_seen.find (o) == m_seen.end ()) != m_inverse) {

    //  A polygon and an text interact if the text is either inside completely
    //  of at least one text of the polygon intersects with the text
    db::Point pt = db::box_convert<TextType> () (*t).p1 ();
    if (p->box ().contains (pt) && db::inside_poly (p->begin_edge (), pt) >= 0) {
      if (m_inverse) {
        m_seen.erase (o);
      } else {
        if (! m_get_all) {
          m_seen.insert (o);
        }
        put (*o);
      }
    }

  }
}

template <class PolygonType, class TextType, class OutputType>
void
region_to_text_interaction_filter_base<PolygonType, TextType, OutputType>::fill_output ()
{
  for (typename std::set<const OutputType *>::const_iterator s = m_seen.begin (); s != m_seen.end (); ++s) {
    put (**s);
  }
}

//  explicit instantiations
template class region_to_text_interaction_filter_base<db::PolygonRef, db::TextRef, db::PolygonRef>;
template class region_to_text_interaction_filter_base<db::Polygon, db::Text, db::Polygon>;
template class region_to_text_interaction_filter_base<db::Polygon, db::Text, db::Text>;
template class region_to_text_interaction_filter_base<db::Polygon, db::TextRef, db::TextRef>;
template class region_to_text_interaction_filter_base<db::PolygonRef, db::TextRef, db::TextRef>;

// -------------------------------------------------------------------------------------
//  Polygon snapping

db::Polygon
snapped_polygon (const db::Polygon &poly, db::Coord gx, db::Coord gy, std::vector<db::Point> &heap)
{
  db::Polygon pnew;

  for (size_t i = 0; i < poly.holes () + 1; ++i) {

    heap.clear ();

    db::Polygon::polygon_contour_iterator b, e;

    if (i == 0) {
      b = poly.begin_hull ();
      e = poly.end_hull ();
    } else {
      b = poly.begin_hole ((unsigned int)  (i - 1));
      e = poly.end_hole ((unsigned int)  (i - 1));
    }

    for (db::Polygon::polygon_contour_iterator pt = b; pt != e; ++pt) {
      heap.push_back (db::Point (snap_to_grid ((*pt).x (), gx), snap_to_grid ((*pt).y (), gy)));
    }

    if (i == 0) {
      pnew.assign_hull (heap.begin (), heap.end ());
    } else {
      pnew.insert_hole (heap.begin (), heap.end ());
    }

  }

  return pnew;
}

db::Polygon
scaled_and_snapped_polygon (const db::Polygon &poly, db::Coord gx, db::Coord mx, db::Coord dx, db::Coord ox, db::Coord gy, db::Coord my, db::Coord dy, db::Coord oy, std::vector<db::Point> &heap)
{
  db::Polygon pnew;

  int64_t dgx = int64_t (gx) * int64_t (dx);
  int64_t dgy = int64_t (gy) * int64_t (dy);

  for (size_t i = 0; i < poly.holes () + 1; ++i) {

    heap.clear ();

    db::Polygon::polygon_contour_iterator b, e;

    if (i == 0) {
      b = poly.begin_hull ();
      e = poly.end_hull ();
    } else {
      b = poly.begin_hole ((unsigned int)  (i - 1));
      e = poly.end_hole ((unsigned int)  (i - 1));
    }

    for (db::Polygon::polygon_contour_iterator pt = b; pt != e; ++pt) {
      int64_t x = snap_to_grid (int64_t ((*pt).x ()) * mx + int64_t (ox), dgx) / int64_t (dx);
      int64_t y = snap_to_grid (int64_t ((*pt).y ()) * my + int64_t (oy), dgy) / int64_t (dy);
      heap.push_back (db::Point (db::Coord (x), db::Coord (y)));
    }

    if (i == 0) {
      pnew.assign_hull (heap.begin (), heap.end ());
    } else {
      pnew.insert_hole (heap.begin (), heap.end ());
    }

  }

  return pnew;
}

db::Vector
scaled_and_snapped_vector (const db::Vector &v, db::Coord gx, db::Coord mx, db::Coord dx, db::Coord ox, db::Coord gy, db::Coord my, db::Coord dy, db::Coord oy)
{
  int64_t dgx = int64_t (gx) * int64_t (dx);
  int64_t dgy = int64_t (gy) * int64_t (dy);

  int64_t x = snap_to_grid (int64_t (v.x ()) * mx + int64_t (ox), dgx) / int64_t (dx);
  int64_t y = snap_to_grid (int64_t (v.y ()) * my + int64_t (oy), dgy) / int64_t (dy);

  return db::Vector (db::Coord (x), db::Coord (y));
}

}
