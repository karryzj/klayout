
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

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

/**
*  @file gsiDeclQPolygonF.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPolygonF>
#include <QPointF>
#include <QPolygon>
#include <QRectF>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPolygonF

#include "dbPolygon.h"

  static QPolygonF *ctor_QPolygonF_from_polygon (const db::DPolygon &pts)
  {
    QPolygonF *p = new QPolygonF ();
    p->reserve (int (pts.hull ().size ()));
    for (db::DPolygon::polygon_contour_iterator q = pts.begin_hull (); q != pts.end_hull (); ++q) {
      p->push_back (QPointF ((*q).x (), (*q).y ()));
    }
    return p;
  }

  static QPolygonF *ctor_QPolygonF_from_simple_polygon (const db::DSimplePolygon &pts)
  {
    QPolygonF *p = new QPolygonF ();
    p->reserve (int (pts.hull ().size ()));
    for (db::DSimplePolygon::polygon_contour_iterator q = pts.begin_hull (); q != pts.end_hull (); ++q) {
      p->push_back (QPointF ((*q).x (), (*q).y ()));
    }
    return p;
  }

  static QPolygonF::const_iterator f_QPolygonF_each_begin (const QPolygonF *m)
  {
    return m->begin ();
  }

  static QPolygonF::const_iterator f_QPolygonF_each_end (const QPolygonF *m)
  {
    return m->end ();
  }

  static QPointF f_QPolygonF_at (const QPolygonF *m, int i)
  {
    return m->at(i);
  }

  static QPointF f_QPolygonF_front (const QPolygonF *m)
  {
    return m->front();
  }

  static QPointF f_QPolygonF_back (const QPolygonF *m)
  {
    return m->back();
  }

  static int f_QPolygonF_size (const QPolygonF *m)
  {
    return m->size();
  }

  static void f_QPolygonF_clear (QPolygonF *m)
  {
    return m->clear();
  }

  static void f_QPolygonF_remove (QPolygonF *m, int i)
  {
    return m->remove (i);
  }

  static void f_QPolygonF_insert (QPolygonF *m, int i, const QPointF &p)
  {
    return m->insert (i, p);
  }

  static void f_QPolygonF_replace (QPolygonF *m, int i, const QPointF &p)
  {
    return m->replace (i, p);
  }

  static void f_QPolygonF_pop_front (QPolygonF *m)
  {
    return m->pop_front ();
  }

  static void f_QPolygonF_pop_back (QPolygonF *m)
  {
    return m->pop_back ();
  }

  static void f_QPolygonF_push_front (QPolygonF *m, const QPointF &p)
  {
    return m->push_front (p);
  }

  static void f_QPolygonF_push_back (QPolygonF *m, const QPointF &p)
  {
    return m->push_back (p);
  }

  static void f_QPolygonF_reserve (QPolygonF *m, int n)
  {
    return m->reserve (n);
  }

  static void f_QPolygonF_resize (QPolygonF *m, int n)
  {
    return m->resize (n);
  }

  static void f_QPolygonF_fill (QPolygonF *m, const QPointF &p, int n)
  {
    m->fill (p, n);
  }

//  Constructor QPolygonF::QPolygonF()


static void _init_ctor_QPolygonF_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPolygonF> ();
}

static void _call_ctor_QPolygonF_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPolygonF *> (new QPolygonF ());
}


//  Constructor QPolygonF::QPolygonF(int size)


static void _init_ctor_QPolygonF_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<int > (argspec_0);
  decl->set_return_new<QPolygonF> ();
}

static void _call_ctor_QPolygonF_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QPolygonF *> (new QPolygonF (arg1));
}


//  Constructor QPolygonF::QPolygonF(const QPolygonF &a)


static void _init_ctor_QPolygonF_2208 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<const QPolygonF & > (argspec_0);
  decl->set_return_new<QPolygonF> ();
}

static void _call_ctor_QPolygonF_2208 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPolygonF &arg1 = args.read<const QPolygonF & > (heap);
  ret.write<QPolygonF *> (new QPolygonF (arg1));
}


//  Constructor QPolygonF::QPolygonF(const QVector<QPointF> &v)


static void _init_ctor_QPolygonF_2816 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("v");
  decl->add_arg<const QVector<QPointF> & > (argspec_0);
  decl->set_return_new<QPolygonF> ();
}

static void _call_ctor_QPolygonF_2816 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector<QPointF> &arg1 = args.read<const QVector<QPointF> & > (heap);
  ret.write<QPolygonF *> (new QPolygonF (arg1));
}


//  Constructor QPolygonF::QPolygonF(const QRectF &r)


static void _init_ctor_QPolygonF_1862 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRectF & > (argspec_0);
  decl->set_return_new<QPolygonF> ();
}

static void _call_ctor_QPolygonF_1862 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRectF &arg1 = args.read<const QRectF & > (heap);
  ret.write<QPolygonF *> (new QPolygonF (arg1));
}


//  Constructor QPolygonF::QPolygonF(const QPolygon &a)


static void _init_ctor_QPolygonF_2138 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<const QPolygon & > (argspec_0);
  decl->set_return_new<QPolygonF> ();
}

static void _call_ctor_QPolygonF_2138 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPolygon &arg1 = args.read<const QPolygon & > (heap);
  ret.write<QPolygonF *> (new QPolygonF (arg1));
}


// QRectF QPolygonF::boundingRect()


static void _init_f_boundingRect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRectF > ();
}

static void _call_f_boundingRect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRectF > ((QRectF)((QPolygonF *)cls)->boundingRect ());
}


// bool QPolygonF::containsPoint(const QPointF &pt, Qt::FillRule fillRule)


static void _init_f_containsPoint_c3426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pt");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("fillRule");
  decl->add_arg<const qt_gsi::Converter<Qt::FillRule>::target_type & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_containsPoint_c3426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = args.read<const QPointF & > (heap);
  const qt_gsi::Converter<Qt::FillRule>::target_type & arg2 = args.read<const qt_gsi::Converter<Qt::FillRule>::target_type & > (heap);
  ret.write<bool > ((bool)((QPolygonF *)cls)->containsPoint (arg1, qt_gsi::QtToCppAdaptor<Qt::FillRule>(arg2).cref()));
}


// QPolygonF QPolygonF::intersected(const QPolygonF &r)


static void _init_f_intersected_c2208 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QPolygonF & > (argspec_0);
  decl->set_return<QPolygonF > ();
}

static void _call_f_intersected_c2208 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPolygonF &arg1 = args.read<const QPolygonF & > (heap);
  ret.write<QPolygonF > ((QPolygonF)((QPolygonF *)cls)->intersected (arg1));
}


// bool QPolygonF::isClosed()


static void _init_f_isClosed_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isClosed_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPolygonF *)cls)->isClosed ());
}


// QPolygonF QPolygonF::subtracted(const QPolygonF &r)


static void _init_f_subtracted_c2208 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QPolygonF & > (argspec_0);
  decl->set_return<QPolygonF > ();
}

static void _call_f_subtracted_c2208 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPolygonF &arg1 = args.read<const QPolygonF & > (heap);
  ret.write<QPolygonF > ((QPolygonF)((QPolygonF *)cls)->subtracted (arg1));
}


// QPolygon QPolygonF::toPolygon()


static void _init_f_toPolygon_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPolygon > ();
}

static void _call_f_toPolygon_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPolygon > ((QPolygon)((QPolygonF *)cls)->toPolygon ());
}


// void QPolygonF::translate(double dx, double dy)


static void _init_f_translate_2034 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dx");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("dy");
  decl->add_arg<double > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_translate_2034 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  double arg2 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPolygonF *)cls)->translate (arg1, arg2);
}


// void QPolygonF::translate(const QPointF &offset)


static void _init_f_translate_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("offset");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_translate_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = args.read<const QPointF & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPolygonF *)cls)->translate (arg1);
}


// QPolygonF QPolygonF::translated(double dx, double dy)


static void _init_f_translated_c2034 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dx");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("dy");
  decl->add_arg<double > (argspec_1);
  decl->set_return<QPolygonF > ();
}

static void _call_f_translated_c2034 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  double arg2 = args.read<double > (heap);
  ret.write<QPolygonF > ((QPolygonF)((QPolygonF *)cls)->translated (arg1, arg2));
}


// QPolygonF QPolygonF::translated(const QPointF &offset)


static void _init_f_translated_c1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("offset");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<QPolygonF > ();
}

static void _call_f_translated_c1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = args.read<const QPointF & > (heap);
  ret.write<QPolygonF > ((QPolygonF)((QPolygonF *)cls)->translated (arg1));
}


// QPolygonF QPolygonF::united(const QPolygonF &r)


static void _init_f_united_c2208 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QPolygonF & > (argspec_0);
  decl->set_return<QPolygonF > ();
}

static void _call_f_united_c2208 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPolygonF &arg1 = args.read<const QPolygonF & > (heap);
  ret.write<QPolygonF > ((QPolygonF)((QPolygonF *)cls)->united (arg1));
}


//  QPolygonF ::operator *(const QPolygonF &a, const QMatrix &m)
static QPolygonF op_QPolygonF_operator_star__4123(const QPolygonF *_self, const QMatrix &m) {
  return ::operator *(*_self, m);
}

//  QPolygonF ::operator *(const QPolygonF &a, const QTransform &m)
static QPolygonF op_QPolygonF_operator_star__4450(const QPolygonF *_self, const QTransform &m) {
  return ::operator *(*_self, m);
}


namespace gsi
{

static gsi::Methods methods_QPolygonF () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPolygonF::QPolygonF()\nThis method creates an object of class QPolygonF.", &_init_ctor_QPolygonF_0, &_call_ctor_QPolygonF_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPolygonF::QPolygonF(int size)\nThis method creates an object of class QPolygonF.", &_init_ctor_QPolygonF_767, &_call_ctor_QPolygonF_767);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPolygonF::QPolygonF(const QPolygonF &a)\nThis method creates an object of class QPolygonF.", &_init_ctor_QPolygonF_2208, &_call_ctor_QPolygonF_2208);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPolygonF::QPolygonF(const QVector<QPointF> &v)\nThis method creates an object of class QPolygonF.", &_init_ctor_QPolygonF_2816, &_call_ctor_QPolygonF_2816);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPolygonF::QPolygonF(const QRectF &r)\nThis method creates an object of class QPolygonF.", &_init_ctor_QPolygonF_1862, &_call_ctor_QPolygonF_1862);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPolygonF::QPolygonF(const QPolygon &a)\nThis method creates an object of class QPolygonF.", &_init_ctor_QPolygonF_2138, &_call_ctor_QPolygonF_2138);
  methods += new qt_gsi::GenericMethod ("boundingRect", "@brief Method QRectF QPolygonF::boundingRect()\n", true, &_init_f_boundingRect_c0, &_call_f_boundingRect_c0);
  methods += new qt_gsi::GenericMethod ("containsPoint", "@brief Method bool QPolygonF::containsPoint(const QPointF &pt, Qt::FillRule fillRule)\n", true, &_init_f_containsPoint_c3426, &_call_f_containsPoint_c3426);
  methods += new qt_gsi::GenericMethod ("intersected", "@brief Method QPolygonF QPolygonF::intersected(const QPolygonF &r)\n", true, &_init_f_intersected_c2208, &_call_f_intersected_c2208);
  methods += new qt_gsi::GenericMethod ("isClosed?", "@brief Method bool QPolygonF::isClosed()\n", true, &_init_f_isClosed_c0, &_call_f_isClosed_c0);
  methods += new qt_gsi::GenericMethod ("subtracted", "@brief Method QPolygonF QPolygonF::subtracted(const QPolygonF &r)\n", true, &_init_f_subtracted_c2208, &_call_f_subtracted_c2208);
  methods += new qt_gsi::GenericMethod ("toPolygon", "@brief Method QPolygon QPolygonF::toPolygon()\n", true, &_init_f_toPolygon_c0, &_call_f_toPolygon_c0);
  methods += new qt_gsi::GenericMethod ("translate", "@brief Method void QPolygonF::translate(double dx, double dy)\n", false, &_init_f_translate_2034, &_call_f_translate_2034);
  methods += new qt_gsi::GenericMethod ("translate", "@brief Method void QPolygonF::translate(const QPointF &offset)\n", false, &_init_f_translate_1986, &_call_f_translate_1986);
  methods += new qt_gsi::GenericMethod ("translated", "@brief Method QPolygonF QPolygonF::translated(double dx, double dy)\n", true, &_init_f_translated_c2034, &_call_f_translated_c2034);
  methods += new qt_gsi::GenericMethod ("translated", "@brief Method QPolygonF QPolygonF::translated(const QPointF &offset)\n", true, &_init_f_translated_c1986, &_call_f_translated_c1986);
  methods += new qt_gsi::GenericMethod ("united", "@brief Method QPolygonF QPolygonF::united(const QPolygonF &r)\n", true, &_init_f_united_c2208, &_call_f_united_c2208);
  methods += gsi::method_ext("*", &::op_QPolygonF_operator_star__4123, gsi::arg ("m"), "@brief Operator QPolygonF ::operator *(const QPolygonF &a, const QMatrix &m)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QPolygonF_operator_star__4450, gsi::arg ("m"), "@brief Operator QPolygonF ::operator *(const QPolygonF &a, const QTransform &m)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QPolygonF> decl_QPolygonF ("QPolygonF",
  gsi::constructor("new", &ctor_QPolygonF_from_polygon, "@brief Creates a polygon from the given KLayout DPolygon\n@args p\nRemark: holes are not transferred into the QPolygonF.") +
  gsi::constructor("new", &ctor_QPolygonF_from_simple_polygon, "@brief Creates a polygon from the given KLayout DSimplePolygon\n@args p") +
  gsi::iterator_ext ("each", &f_QPolygonF_each_begin, &f_QPolygonF_each_end, "@brief Iterates over all points of the polygon.") +
  gsi::method_ext("[]", &f_QPolygonF_at, "@brief Gets the point at the given position\n@args index") +
  gsi::method_ext("front", &f_QPolygonF_front, "@brief Gets the first point") +
  gsi::method_ext("back", &f_QPolygonF_back, "@brief Gets the last point") +
  gsi::method_ext("size", &f_QPolygonF_size, "@brief Gets the number of points in the polygon") +
  gsi::method_ext("clear", &f_QPolygonF_clear, "@brief Empties the polygon") +
  gsi::method_ext("remove", &f_QPolygonF_remove, "@brief Removes the point at the given position\n@args index") +
  gsi::method_ext("insert", &f_QPolygonF_insert, "@brief Inserts the point after the given position\n@args index, p") +
  gsi::method_ext("replace", &f_QPolygonF_replace, "@brief Replaces the point at the given position\n@args index, p") +
  gsi::method_ext("pop_front", &f_QPolygonF_pop_front, "@brief Removes the point at the beginning of the list") +
  gsi::method_ext("pop_back", &f_QPolygonF_pop_back, "@brief Removes the point at the end of the list") +
  gsi::method_ext("push_front", &f_QPolygonF_push_front, "@brief Inserts the point at the beginning of the list\n@args p") +
  gsi::method_ext("push_back", &f_QPolygonF_push_back, "@brief Inserts the point at the end of the list\n@args p") +
  gsi::method_ext("reserve", &f_QPolygonF_reserve, "@brief Reserve memory for the given number of points\n@args n") +
  gsi::method_ext("resize", &f_QPolygonF_resize, "@brief Sets the number of points to the given length\n@args l") +
  gsi::method_ext("fill", &f_QPolygonF_fill, "@brief Resizes the polygon to l points and ets all elements to the given point\n@args p,l") 
+
  methods_QPolygonF (),
  "@qt\n@brief Binding of QPolygonF");


GSIQT_PUBLIC gsi::Class<QPolygonF> &qtdecl_QPolygonF () { return decl_QPolygonF; }

}

