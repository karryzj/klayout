
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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


#include "rdbUtils.h"

#include "dbLayout.h"
#include "dbLayoutUtils.h"
#include "dbRecursiveShapeIterator.h"
#include "dbRegion.h"
#include "dbEdges.h"
#include "dbEdgePairs.h"

namespace rdb
{

void
scan_layer (rdb::Category *cat, const db::Layout &layout, unsigned int layer, const db::Cell *from, int levels)
{
  rdb::Database *rdb = cat->database ();
  if (! rdb) {
    return;
  }

  rdb::Cell *rdb_top_cell = 0;
  if (from) {
    rdb_top_cell = rdb->create_cell (layout.cell_name (from->cell_index ()));
  }

  std::set<db::cell_index_type> cells;
  if (from) {
    from->collect_called_cells (cells, levels);
    cells.insert (from->cell_index ());
  }

  for (db::Layout::const_iterator c = layout.begin (); c != layout.end (); ++c) { 

    if (from && cells.find (c->cell_index ()) == cells.end ()) {
      continue;
    }

    const db::Cell &cell = *c;
    if (cell.shapes (layer).size () > 0) {

      std::string cn = layout.cell_name (cell.cell_index ());
      const rdb::Cell *rdb_cell = rdb->cell_by_qname (cn);
      if (! rdb_cell) {

        rdb::Cell *rdb_cell_nc = rdb->create_cell (cn);
        rdb_cell = rdb_cell_nc;

        if (from) {
          std::pair<bool, db::ICplxTrans> ctx = db::find_layout_context (layout, cell.cell_index (), from->cell_index ());
          if (ctx.first) {
            db::DCplxTrans t = db::DCplxTrans (layout.dbu ()) * db::DCplxTrans (ctx.second) * db::DCplxTrans (1.0 / layout.dbu ());
            rdb_cell_nc->references ().insert (Reference (t, rdb_top_cell->id ()));
          }
        }
      
      }

      create_items_from_shapes (rdb, rdb_cell->id (), cat->id (), db::CplxTrans (layout.dbu ()), cell.shapes (layer));

    }

  }
}

namespace
{

class CreateItemsRecursiveReceiver
  : public db::RecursiveShapeReceiver
{
public:
  CreateItemsRecursiveReceiver (rdb::Category *cat, const db::CplxTrans &trans, rdb::Cell *cell)
    : mp_cat (cat), mp_rdb (cat->database ()), m_trans (trans), mp_rdb_cell (cell)
  {
    //  just in case the iterator is non-hierarchical
    if (cell) {
      m_cell_stack.push_back (cell);
    }
  }

  virtual void begin (const db::RecursiveShapeIterator *iter)
  {
    if (! iter->top_cell () || ! iter->layout ()) {
      return;
    }

    db::cell_index_type ci = iter->top_cell ()->cell_index ();
    const rdb::Cell *rdb_cell = cell_for_id (iter->layout (), ci);

    if (! m_cell_stack.empty () && rdb_cell != m_cell_stack.front () && (rdb_cell->references ().begin () == rdb_cell->references ().end ())) {
      //  If the actual top cell is not the one specified, add a dummy reference so we find the real top cell under
      //  the given one.
      //  TODO: get rid of the const_cast
      (const_cast<rdb::Cell *> (rdb_cell))->references ().insert (rdb::Reference (db::DCplxTrans (), m_cell_stack.front ()->id ()));
    }

    m_cell_stack.clear ();
    m_cell_stack.push_back (rdb_cell);
    m_id_to_cell.insert (std::make_pair (ci, rdb_cell));
  }

  virtual void end (const db::RecursiveShapeIterator *)
  {
    m_cell_stack.pop_back ();
  }

  virtual void enter_cell (const db::RecursiveShapeIterator *iter, const db::Cell *cell, const db::Box & /*region*/, const box_tree_type * /*complex_region*/)
  {
    db::cell_index_type ci = cell->cell_index ();
    const rdb::Cell *rdb_cell = cell_for_id (iter->layout (), ci);
    m_cell_stack.push_back (rdb_cell);
    m_id_to_cell.insert (std::make_pair (ci, rdb_cell));

    if (rdb_cell->references ().begin () == rdb_cell->references ().end ()) {
      db::DCplxTrans t = m_trans * iter->trans () * m_trans.inverted ();
      //  TODO: get rid of the const_cast
      (const_cast<rdb::Cell *> (rdb_cell))->references ().insert (rdb::Reference (t, m_cell_stack.front ()->id ()));
    }
  }

  virtual void leave_cell (const db::RecursiveShapeIterator * /*iter*/, const db::Cell * /*cell*/)
  {
    m_cell_stack.pop_back ();
  }

  virtual new_inst_mode new_inst (const db::RecursiveShapeIterator * /*iter*/, const db::CellInstArray &inst, const db::ICplxTrans & /*always_apply*/, const db::Box & /*region*/, const box_tree_type * /*complex_region*/, bool /*all*/)
  {
    db::cell_index_type ci = inst.object ().cell_index ();
    if (m_id_to_cell.find (ci) != m_id_to_cell.end ()) {
      return NI_skip;
    } else {
      return NI_single;
    }
  }

  virtual void shape (const db::RecursiveShapeIterator * /*iter*/, const db::Shape &shape, const db::ICplxTrans & /*always_apply*/, const db::ICplxTrans & /*trans*/, const db::Box & /*region*/, const box_tree_type * /*complex_region*/)
  {
    tl_assert (! m_cell_stack.empty ());
    create_item_from_shape (mp_rdb, m_cell_stack.back ()->id (), mp_cat->id (), m_trans, shape);
  }

public:
  rdb::Category *mp_cat;
  rdb::Database *mp_rdb;
  std::vector<const rdb::Cell *> m_cell_stack;
  std::map<db::cell_index_type, const rdb::Cell *> m_id_to_cell;
  db::CplxTrans m_trans;
  rdb::Cell *mp_rdb_cell;

  const rdb::Cell *cell_for_id (const db::Layout *layout, db::cell_index_type ci)
  {
    tl_assert (layout != 0);
    std::string cn = layout->cell_name (ci);
    const rdb::Cell *rdb_cell = mp_rdb->cell_by_qname (cn);
    if (! rdb_cell) {
      return mp_rdb->create_cell (cn);
    } else {
      return rdb_cell;
    }
  }
};

class CreateItemsFlatReceiver
  : public db::RecursiveShapeReceiver
{
public:
  CreateItemsFlatReceiver (rdb::Category *cat, const db::CplxTrans &trans, rdb::Cell *cell)
    : mp_cat (cat), mp_rdb (cat->database ()), m_trans (trans), mp_rdb_cell (cell)
  {
    //  .. nothing yet ..
  }

  virtual void begin (const db::RecursiveShapeIterator *iter)
  {
    if (! mp_rdb_cell) {

      db::cell_index_type ci = iter->top_cell ()->cell_index ();

      tl_assert (iter->layout () != 0);
      std::string cn = iter->layout ()->cell_name (ci);
      mp_rdb_cell = mp_rdb->cell_by_qname (cn);
      if (! mp_rdb_cell) {
        mp_rdb_cell = mp_rdb->create_cell (cn);
      }

    }
  }

  virtual void shape (const db::RecursiveShapeIterator * /*iter*/, const db::Shape &shape, const db::ICplxTrans & /*always_apply*/, const db::ICplxTrans &trans, const db::Box & /*region*/, const box_tree_type * /*complex_region*/)
  {
    create_item_from_shape (mp_rdb, mp_rdb_cell->id (), mp_cat->id (), m_trans * trans, shape);
  }

public:
  rdb::Category *mp_cat;
  rdb::Database *mp_rdb;
  db::CplxTrans m_trans;
  const rdb::Cell *mp_rdb_cell;
};

}

void
scan_layer (rdb::Category *cat, const db::RecursiveShapeIterator &iter, bool flat)
{
  if (! iter.top_cell () || ! iter.layout ()) {
    return;
  }

  db::CplxTrans trans (iter.layout ()->dbu ());
  scan_layer (cat, 0, trans, iter, flat);
}

void
scan_layer (rdb::Category *cat, rdb::Cell *cell, const db::CplxTrans &trans, const db::RecursiveShapeIterator &iter, bool flat)
{
  if (! cat->database ()) {
    return;
  }

  std::unique_ptr<db::RecursiveShapeReceiver> rec;
  if (flat) {
    rec.reset (new CreateItemsFlatReceiver (cat, trans, cell));
  } else {
    rec.reset (new CreateItemsRecursiveReceiver (cat, trans, cell));
  }

  db::RecursiveShapeIterator (iter).push (rec.get ());
}

// ------------------------------------------------------------------------------------------------------------

void create_items_from_iterator (rdb::Database *db, rdb::id_type cell_id, rdb::id_type cat_id, const db::RecursiveShapeIterator &iter)
{
  tl_assert (iter.layout ());
  double dbu = iter.layout ()->dbu ();

  for (db::RecursiveShapeIterator i = iter; !i.at_end (); ++i) {
    std::unique_ptr<rdb::ValueBase> value (rdb::ValueBase::create_from_shape (*i, db::CplxTrans (dbu) * i.trans ()));
    if (value.get ()) {
      rdb::Item *item = db->create_item (cell_id, cat_id);
      item->values ().add (value.release ());
    }
  }
}

void create_items_from_shapes (rdb::Database *db, rdb::id_type cell_id, rdb::id_type cat_id, const db::CplxTrans &trans, const db::Shapes &shapes)
{
  for (db::Shapes::shape_iterator s = shapes.begin (db::ShapeIterator::All); !s.at_end (); ++s) {
    std::unique_ptr<rdb::ValueBase> value (rdb::ValueBase::create_from_shape (*s, trans));
    if (value.get ()) {
      rdb::Item *item = db->create_item (cell_id, cat_id);
      item->values ().add (value.release ());
    }
  }
}

void create_item_from_shape (rdb::Database *db, rdb::id_type cell_id, rdb::id_type cat_id, const db::CplxTrans &trans, const db::Shape &shape)
{
  std::unique_ptr<rdb::ValueBase> value (rdb::ValueBase::create_from_shape (shape, trans));
  if (value.get ()) {
    rdb::Item *item = db->create_item (cell_id, cat_id);
    item->values ().add (value.release ());
  }
}

void create_items_from_region (rdb::Database *db, rdb::id_type cell_id, rdb::id_type cat_id, const db::CplxTrans &trans, const db::Region &collection)
{
  typedef db::Region::const_iterator iter;

  for (iter o = collection.begin (); ! o.at_end (); ++o) {
    rdb::Item *item = db->create_item (cell_id, cat_id);
    item->values ().add (new rdb::Value <db::DPolygon> (o->transformed (trans)));
  }
}

void create_items_from_edges (rdb::Database *db, rdb::id_type cell_id, rdb::id_type cat_id, const db::CplxTrans &trans, const db::Edges &collection)
{
  typedef db::Edges::const_iterator iter;

  for (iter o = collection.begin (); ! o.at_end (); ++o) {
    rdb::Item *item = db->create_item (cell_id, cat_id);
    item->values ().add (new rdb::Value <db::DEdge> (o->transformed (trans)));
  }
}

void create_items_from_edge_pairs (rdb::Database *db, rdb::id_type cell_id, rdb::id_type cat_id, const db::CplxTrans &trans, const db::EdgePairs &collection)
{
  typedef db::EdgePairs::const_iterator iter;

  for (iter o = collection.begin (); ! o.at_end (); ++o) {
    rdb::Item *item = db->create_item (cell_id, cat_id);
    item->values ().add (new rdb::Value <db::DEdgePair> (o->transformed (trans)));
  }
}

void add_item_value (rdb::Item *item, const tl::Variant &v, double dbu)
{
  if (dbu > 0 && v.is_user<db::Box> ()) {
    item->add_value (db::CplxTrans (dbu) * v.to_user<db::Box> ());
  } else if (dbu > 0 && v.is_user<db::Point> ()) {
    db::DPoint p = db::CplxTrans (dbu) * v.to_user<db::Point> ();
    item->add_value (db::DEdge (p, p));
  } else if (dbu > 0 && v.is_user<db::Polygon> ()) {
    item->add_value (db::CplxTrans (dbu) * v.to_user<db::Polygon> ());
  } else if (dbu > 0 && v.is_user<db::SimplePolygon> ()) {
    db::DPolygon p;
    db::DSimplePolygon sp = db::CplxTrans (dbu) * v.to_user<db::SimplePolygon> ();
    p.assign_hull (sp.begin_hull (), sp.end_hull ());
    item->add_value (p);
  } else if (dbu > 0 && v.is_user<db::Edge> ()) {
    item->add_value (db::CplxTrans (dbu) * v.to_user<db::Edge> ());
  } else if (dbu > 0 && v.is_user<db::EdgePair> ()) {
    item->add_value (db::CplxTrans (dbu) * v.to_user<db::EdgePair> ());
  } else if (dbu > 0 && v.is_user<db::Path> ()) {
    item->add_value (db::CplxTrans (dbu) * v.to_user<db::Path> ());
  } else if (dbu > 0 && v.is_user<db::Text> ()) {
    item->add_value (db::CplxTrans (dbu) * v.to_user<db::Text> ());
  } else if (v.is_user<db::DBox> ()) {
    item->add_value (v.to_user<db::DBox> ());
  } else if (v.is_user<db::DPoint> ()) {
    db::DPoint p = v.to_user<db::DPoint> ();
    item->add_value (db::DEdge (p, p));
  } else if (v.is_user<db::DPolygon> ()) {
    item->add_value (v.to_user<db::DPolygon> ());
  } else if (v.is_user<db::DSimplePolygon> ()) {
    db::DPolygon p;
    db::DSimplePolygon sp = v.to_user<db::DSimplePolygon> ();
    p.assign_hull (sp.begin_hull (), sp.end_hull ());
    item->add_value (p);
  } else if (v.is_user<db::DEdge> ()) {
    item->add_value (v.to_user<db::DEdge> ());
  } else if (v.is_user<db::DEdgePair> ()) {
    item->add_value (v.to_user<db::DEdgePair> ());
  } else if (v.is_user<db::DPath> ()) {
    item->add_value (v.to_user<db::DPath> ());
  } else if (v.is_user<db::DText> ()) {
    item->add_value (v.to_user<db::DText> ());
  } else {
    item->add_value (std::string (v.to_string ()));
  }
}

}

