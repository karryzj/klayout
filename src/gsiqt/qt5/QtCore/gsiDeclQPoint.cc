
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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
*  @file gsiDeclQPoint.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPoint>
#include <QMatrix>
#include <QMatrix4x4>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPoint

//  Constructor QPoint::QPoint()


static void _init_ctor_QPoint_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPoint> ();
}

static void _call_ctor_QPoint_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint *> (new QPoint ());
}


//  Constructor QPoint::QPoint(int xpos, int ypos)


static void _init_ctor_QPoint_1426 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("xpos");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("ypos");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QPoint> ();
}

static void _call_ctor_QPoint_1426 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<QPoint *> (new QPoint (arg1, arg2));
}


// bool QPoint::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPoint *)cls)->isNull ());
}


// int QPoint::manhattanLength()


static void _init_f_manhattanLength_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_manhattanLength_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPoint *)cls)->manhattanLength ());
}


// QPoint &QPoint::operator*=(float factor)


static void _init_f_operator_star__eq__970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("factor");
  decl->add_arg<float > (argspec_0);
  decl->set_return<QPoint & > ();
}

static void _call_f_operator_star__eq__970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = gsi::arg_reader<float >() (args, heap);
  ret.write<QPoint & > ((QPoint &)((QPoint *)cls)->operator*= (arg1));
}


// QPoint &QPoint::operator*=(double factor)


static void _init_f_operator_star__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("factor");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QPoint & > ();
}

static void _call_f_operator_star__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  ret.write<QPoint & > ((QPoint &)((QPoint *)cls)->operator*= (arg1));
}


// QPoint &QPoint::operator*=(int factor)


static void _init_f_operator_star__eq__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("factor");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QPoint & > ();
}

static void _call_f_operator_star__eq__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QPoint & > ((QPoint &)((QPoint *)cls)->operator*= (arg1));
}


// QPoint &QPoint::operator+=(const QPoint &p)


static void _init_f_operator_plus__eq__1916 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return<QPoint & > ();
}

static void _call_f_operator_plus__eq__1916 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  ret.write<QPoint & > ((QPoint &)((QPoint *)cls)->operator+= (arg1));
}


// QPoint &QPoint::operator-=(const QPoint &p)


static void _init_f_operator_minus__eq__1916 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return<QPoint & > ();
}

static void _call_f_operator_minus__eq__1916 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  ret.write<QPoint & > ((QPoint &)((QPoint *)cls)->operator-= (arg1));
}


// QPoint &QPoint::operator/=(double divisor)


static void _init_f_operator_slash__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("divisor");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QPoint & > ();
}

static void _call_f_operator_slash__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  ret.write<QPoint & > ((QPoint &)((QPoint *)cls)->operator/= (arg1));
}


// int &QPoint::rx()


static void _init_f_rx_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int & > ();
}

static void _call_f_rx_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int & > ((int &)((QPoint *)cls)->rx ());
}


// int &QPoint::ry()


static void _init_f_ry_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int & > ();
}

static void _call_f_ry_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int & > ((int &)((QPoint *)cls)->ry ());
}


// void QPoint::setX(int x)


static void _init_f_setX_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setX_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPoint *)cls)->setX (arg1);
}


// void QPoint::setY(int y)


static void _init_f_setY_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("y");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setY_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPoint *)cls)->setY (arg1);
}


// int QPoint::x()


static void _init_f_x_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_x_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPoint *)cls)->x ());
}


// int QPoint::y()


static void _init_f_y_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_y_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPoint *)cls)->y ());
}


// static int QPoint::dotProduct(const QPoint &p1, const QPoint &p2)


static void _init_f_dotProduct_3724 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p1");
  decl->add_arg<const QPoint & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("p2");
  decl->add_arg<const QPoint & > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_dotProduct_3724 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  const QPoint &arg2 = gsi::arg_reader<const QPoint & >() (args, heap);
  ret.write<int > ((int)QPoint::dotProduct (arg1, arg2));
}


//  bool ::operator==(const QPoint &p1, const QPoint &p2)
static bool op_QPoint_operator_eq__eq__3724(const QPoint *_self, const QPoint &p2) {
  return ::operator==(*_self, p2);
}

//  bool ::operator!=(const QPoint &p1, const QPoint &p2)
static bool op_QPoint_operator_excl__eq__3724(const QPoint *_self, const QPoint &p2) {
  return ::operator!=(*_self, p2);
}

//  const QPoint ::operator+(const QPoint &p1, const QPoint &p2)
static const QPoint op_QPoint_operator_plus__3724(const QPoint *_self, const QPoint &p2) {
  return ::operator+(*_self, p2);
}

//  const QPoint ::operator-(const QPoint &p1, const QPoint &p2)
static const QPoint op_QPoint_operator_minus__3724(const QPoint *_self, const QPoint &p2) {
  return ::operator-(*_self, p2);
}

//  const QPoint ::operator*(const QPoint &p, float factor)
static const QPoint op_QPoint_operator_star__2778(const QPoint *_self, float factor) {
  return ::operator*(*_self, factor);
}

//  const QPoint ::operator*(const QPoint &p, double factor)
static const QPoint op_QPoint_operator_star__2879(const QPoint *_self, double factor) {
  return ::operator*(*_self, factor);
}

//  const QPoint ::operator*(const QPoint &p, int factor)
static const QPoint op_QPoint_operator_star__2575(const QPoint *_self, int factor) {
  return ::operator*(*_self, factor);
}

//  const QPoint ::operator+(const QPoint &p)
static const QPoint op_QPoint_operator_plus__1916(const QPoint *_self) {
  return ::operator+(*_self);
}

//  const QPoint ::operator-(const QPoint &p)
static const QPoint op_QPoint_operator_minus__1916(const QPoint *_self) {
  return ::operator-(*_self);
}

//  const QPoint ::operator/(const QPoint &p, qreal c)
static const QPoint op_QPoint_operator_slash__2777(const QPoint *_self, qreal c) {
  return ::operator/(*_self, c);
}


namespace gsi
{

static gsi::Methods methods_QPoint () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPoint::QPoint()\nThis method creates an object of class QPoint.", &_init_ctor_QPoint_0, &_call_ctor_QPoint_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPoint::QPoint(int xpos, int ypos)\nThis method creates an object of class QPoint.", &_init_ctor_QPoint_1426, &_call_ctor_QPoint_1426);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QPoint::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("manhattanLength", "@brief Method int QPoint::manhattanLength()\n", true, &_init_f_manhattanLength_c0, &_call_f_manhattanLength_c0);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QPoint &QPoint::operator*=(float factor)\n", false, &_init_f_operator_star__eq__970, &_call_f_operator_star__eq__970);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QPoint &QPoint::operator*=(double factor)\n", false, &_init_f_operator_star__eq__1071, &_call_f_operator_star__eq__1071);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QPoint &QPoint::operator*=(int factor)\n", false, &_init_f_operator_star__eq__767, &_call_f_operator_star__eq__767);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QPoint &QPoint::operator+=(const QPoint &p)\n", false, &_init_f_operator_plus__eq__1916, &_call_f_operator_plus__eq__1916);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QPoint &QPoint::operator-=(const QPoint &p)\n", false, &_init_f_operator_minus__eq__1916, &_call_f_operator_minus__eq__1916);
  methods += new qt_gsi::GenericMethod ("/=", "@brief Method QPoint &QPoint::operator/=(double divisor)\n", false, &_init_f_operator_slash__eq__1071, &_call_f_operator_slash__eq__1071);
  methods += new qt_gsi::GenericMethod ("rx", "@brief Method int &QPoint::rx()\n", false, &_init_f_rx_0, &_call_f_rx_0);
  methods += new qt_gsi::GenericMethod ("ry", "@brief Method int &QPoint::ry()\n", false, &_init_f_ry_0, &_call_f_ry_0);
  methods += new qt_gsi::GenericMethod ("setX|x=", "@brief Method void QPoint::setX(int x)\n", false, &_init_f_setX_767, &_call_f_setX_767);
  methods += new qt_gsi::GenericMethod ("setY|y=", "@brief Method void QPoint::setY(int y)\n", false, &_init_f_setY_767, &_call_f_setY_767);
  methods += new qt_gsi::GenericMethod (":x", "@brief Method int QPoint::x()\n", true, &_init_f_x_c0, &_call_f_x_c0);
  methods += new qt_gsi::GenericMethod (":y", "@brief Method int QPoint::y()\n", true, &_init_f_y_c0, &_call_f_y_c0);
  methods += new qt_gsi::GenericStaticMethod ("dotProduct", "@brief Static method int QPoint::dotProduct(const QPoint &p1, const QPoint &p2)\nThis method is static and can be called without an instance.", &_init_f_dotProduct_3724, &_call_f_dotProduct_3724);
  methods += gsi::method_ext("==", &::op_QPoint_operator_eq__eq__3724, gsi::arg ("p2"), "@brief Operator bool ::operator==(const QPoint &p1, const QPoint &p2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("!=", &::op_QPoint_operator_excl__eq__3724, gsi::arg ("p2"), "@brief Operator bool ::operator!=(const QPoint &p1, const QPoint &p2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("+", &::op_QPoint_operator_plus__3724, gsi::arg ("p2"), "@brief Operator const QPoint ::operator+(const QPoint &p1, const QPoint &p2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QPoint_operator_minus__3724, gsi::arg ("p2"), "@brief Operator const QPoint ::operator-(const QPoint &p1, const QPoint &p2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QPoint_operator_star__2778, gsi::arg ("factor"), "@brief Operator const QPoint ::operator*(const QPoint &p, float factor)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QPoint_operator_star__2879, gsi::arg ("factor"), "@brief Operator const QPoint ::operator*(const QPoint &p, double factor)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QPoint_operator_star__2575, gsi::arg ("factor"), "@brief Operator const QPoint ::operator*(const QPoint &p, int factor)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("+", &::op_QPoint_operator_plus__1916, "@brief Operator const QPoint ::operator+(const QPoint &p)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QPoint_operator_minus__1916, "@brief Operator const QPoint ::operator-(const QPoint &p)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("/", &::op_QPoint_operator_slash__2777, gsi::arg ("c"), "@brief Operator const QPoint ::operator/(const QPoint &p, qreal c)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QPoint> decl_QPoint ("QtCore", "QPoint",
  methods_QPoint (),
  "@qt\n@brief Binding of QPoint");


GSI_QTCORE_PUBLIC gsi::Class<QPoint> &qtdecl_QPoint () { return decl_QPoint; }

}

