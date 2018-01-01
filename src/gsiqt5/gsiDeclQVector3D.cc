
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
*  @file gsiDeclQVector3D.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QVector3D>
#include <QVector2D>
#include <QMatrix4x4>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QVector3D

//  Constructor QVector3D::QVector3D()


static void _init_ctor_QVector3D_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QVector3D> ();
}

static void _call_ctor_QVector3D_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector3D *> (new QVector3D ());
}


//  Constructor QVector3D::QVector3D(float xpos, float ypos, float zpos)


static void _init_ctor_QVector3D_2694 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("xpos");
  decl->add_arg<float > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("ypos");
  decl->add_arg<float > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("zpos");
  decl->add_arg<float > (argspec_2);
  decl->set_return_new<QVector3D> ();
}

static void _call_ctor_QVector3D_2694 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = args.read<float > (heap);
  float arg2 = args.read<float > (heap);
  float arg3 = args.read<float > (heap);
  ret.write<QVector3D *> (new QVector3D (arg1, arg2, arg3));
}


//  Constructor QVector3D::QVector3D(const QPoint &point)


static void _init_ctor_QVector3D_1916 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return_new<QVector3D> ();
}

static void _call_ctor_QVector3D_1916 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = args.read<const QPoint & > (heap);
  ret.write<QVector3D *> (new QVector3D (arg1));
}


//  Constructor QVector3D::QVector3D(const QPointF &point)


static void _init_ctor_QVector3D_1986 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return_new<QVector3D> ();
}

static void _call_ctor_QVector3D_1986 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = args.read<const QPointF & > (heap);
  ret.write<QVector3D *> (new QVector3D (arg1));
}


//  Constructor QVector3D::QVector3D(const QVector2D &vector)


static void _init_ctor_QVector3D_2139 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<const QVector2D & > (argspec_0);
  decl->set_return_new<QVector3D> ();
}

static void _call_ctor_QVector3D_2139 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector2D &arg1 = args.read<const QVector2D & > (heap);
  ret.write<QVector3D *> (new QVector3D (arg1));
}


//  Constructor QVector3D::QVector3D(const QVector2D &vector, float zpos)


static void _init_ctor_QVector3D_3001 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<const QVector2D & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("zpos");
  decl->add_arg<float > (argspec_1);
  decl->set_return_new<QVector3D> ();
}

static void _call_ctor_QVector3D_3001 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector2D &arg1 = args.read<const QVector2D & > (heap);
  float arg2 = args.read<float > (heap);
  ret.write<QVector3D *> (new QVector3D (arg1, arg2));
}


//  Constructor QVector3D::QVector3D(const QVector4D &vector)


static void _init_ctor_QVector3D_2141 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<const QVector4D & > (argspec_0);
  decl->set_return_new<QVector3D> ();
}

static void _call_ctor_QVector3D_2141 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector4D &arg1 = args.read<const QVector4D & > (heap);
  ret.write<QVector3D *> (new QVector3D (arg1));
}


// float QVector3D::distanceToLine(const QVector3D &point, const QVector3D &direction)


static void _init_f_distanceToLine_c4172 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<const QVector3D & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("direction");
  decl->add_arg<const QVector3D & > (argspec_1);
  decl->set_return<float > ();
}

static void _call_f_distanceToLine_c4172 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = args.read<const QVector3D & > (heap);
  const QVector3D &arg2 = args.read<const QVector3D & > (heap);
  ret.write<float > ((float)((QVector3D *)cls)->distanceToLine (arg1, arg2));
}


// float QVector3D::distanceToPlane(const QVector3D &plane, const QVector3D &normal)


static void _init_f_distanceToPlane_c4172 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("plane");
  decl->add_arg<const QVector3D & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("normal");
  decl->add_arg<const QVector3D & > (argspec_1);
  decl->set_return<float > ();
}

static void _call_f_distanceToPlane_c4172 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = args.read<const QVector3D & > (heap);
  const QVector3D &arg2 = args.read<const QVector3D & > (heap);
  ret.write<float > ((float)((QVector3D *)cls)->distanceToPlane (arg1, arg2));
}


// float QVector3D::distanceToPlane(const QVector3D &plane1, const QVector3D &plane2, const QVector3D &plane3)


static void _init_f_distanceToPlane_c6204 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("plane1");
  decl->add_arg<const QVector3D & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("plane2");
  decl->add_arg<const QVector3D & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("plane3");
  decl->add_arg<const QVector3D & > (argspec_2);
  decl->set_return<float > ();
}

static void _call_f_distanceToPlane_c6204 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = args.read<const QVector3D & > (heap);
  const QVector3D &arg2 = args.read<const QVector3D & > (heap);
  const QVector3D &arg3 = args.read<const QVector3D & > (heap);
  ret.write<float > ((float)((QVector3D *)cls)->distanceToPlane (arg1, arg2, arg3));
}


// float QVector3D::distanceToPoint(const QVector3D &point)


static void _init_f_distanceToPoint_c2140 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<const QVector3D & > (argspec_0);
  decl->set_return<float > ();
}

static void _call_f_distanceToPoint_c2140 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = args.read<const QVector3D & > (heap);
  ret.write<float > ((float)((QVector3D *)cls)->distanceToPoint (arg1));
}


// bool QVector3D::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QVector3D *)cls)->isNull ());
}


// float QVector3D::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QVector3D *)cls)->length ());
}


// float QVector3D::lengthSquared()


static void _init_f_lengthSquared_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_lengthSquared_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QVector3D *)cls)->lengthSquared ());
}


// void QVector3D::normalize()


static void _init_f_normalize_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_normalize_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVector3D *)cls)->normalize ();
}


// QVector3D QVector3D::normalized()


static void _init_f_normalized_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector3D > ();
}

static void _call_f_normalized_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector3D > ((QVector3D)((QVector3D *)cls)->normalized ());
}


// QVector3D &QVector3D::operator*=(float factor)


static void _init_f_operator_star__eq__970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("factor");
  decl->add_arg<float > (argspec_0);
  decl->set_return<QVector3D & > ();
}

static void _call_f_operator_star__eq__970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = args.read<float > (heap);
  ret.write<QVector3D & > ((QVector3D &)((QVector3D *)cls)->operator*= (arg1));
}


// QVector3D &QVector3D::operator*=(const QVector3D &vector)


static void _init_f_operator_star__eq__2140 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<const QVector3D & > (argspec_0);
  decl->set_return<QVector3D & > ();
}

static void _call_f_operator_star__eq__2140 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = args.read<const QVector3D & > (heap);
  ret.write<QVector3D & > ((QVector3D &)((QVector3D *)cls)->operator*= (arg1));
}


// QVector3D &QVector3D::operator+=(const QVector3D &vector)


static void _init_f_operator_plus__eq__2140 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<const QVector3D & > (argspec_0);
  decl->set_return<QVector3D & > ();
}

static void _call_f_operator_plus__eq__2140 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = args.read<const QVector3D & > (heap);
  ret.write<QVector3D & > ((QVector3D &)((QVector3D *)cls)->operator+= (arg1));
}


// QVector3D &QVector3D::operator-=(const QVector3D &vector)


static void _init_f_operator_minus__eq__2140 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<const QVector3D & > (argspec_0);
  decl->set_return<QVector3D & > ();
}

static void _call_f_operator_minus__eq__2140 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = args.read<const QVector3D & > (heap);
  ret.write<QVector3D & > ((QVector3D &)((QVector3D *)cls)->operator-= (arg1));
}


// QVector3D &QVector3D::operator/=(float divisor)


static void _init_f_operator_slash__eq__970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("divisor");
  decl->add_arg<float > (argspec_0);
  decl->set_return<QVector3D & > ();
}

static void _call_f_operator_slash__eq__970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = args.read<float > (heap);
  ret.write<QVector3D & > ((QVector3D &)((QVector3D *)cls)->operator/= (arg1));
}


// QVector3D &QVector3D::operator/=(const QVector3D &vector)


static void _init_f_operator_slash__eq__2140 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<const QVector3D & > (argspec_0);
  decl->set_return<QVector3D & > ();
}

static void _call_f_operator_slash__eq__2140 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = args.read<const QVector3D & > (heap);
  ret.write<QVector3D & > ((QVector3D &)((QVector3D *)cls)->operator/= (arg1));
}


// float &QVector3D::operator[](int i)


static void _init_f_operator_index__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<float & > ();
}

static void _call_f_operator_index__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<float & > ((float &)((QVector3D *)cls)->operator[] (arg1));
}


// float QVector3D::operator[](int i)


static void _init_f_operator_index__c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<float > ();
}

static void _call_f_operator_index__c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<float > ((float)((QVector3D *)cls)->operator[] (arg1));
}


// QVector3D QVector3D::project(const QMatrix4x4 &modelView, const QMatrix4x4 &projection, const QRect &viewport)


static void _init_f_project_c6070 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("modelView");
  decl->add_arg<const QMatrix4x4 & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("projection");
  decl->add_arg<const QMatrix4x4 & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("viewport");
  decl->add_arg<const QRect & > (argspec_2);
  decl->set_return<QVector3D > ();
}

static void _call_f_project_c6070 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMatrix4x4 &arg1 = args.read<const QMatrix4x4 & > (heap);
  const QMatrix4x4 &arg2 = args.read<const QMatrix4x4 & > (heap);
  const QRect &arg3 = args.read<const QRect & > (heap);
  ret.write<QVector3D > ((QVector3D)((QVector3D *)cls)->project (arg1, arg2, arg3));
}


// void QVector3D::setX(float x)


static void _init_f_setX_970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<float > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setX_970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = args.read<float > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVector3D *)cls)->setX (arg1);
}


// void QVector3D::setY(float y)


static void _init_f_setY_970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("y");
  decl->add_arg<float > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setY_970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = args.read<float > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVector3D *)cls)->setY (arg1);
}


// void QVector3D::setZ(float z)


static void _init_f_setZ_970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("z");
  decl->add_arg<float > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setZ_970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = args.read<float > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVector3D *)cls)->setZ (arg1);
}


// QPoint QVector3D::toPoint()


static void _init_f_toPoint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_toPoint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QVector3D *)cls)->toPoint ());
}


// QPointF QVector3D::toPointF()


static void _init_f_toPointF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_toPointF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QVector3D *)cls)->toPointF ());
}


// QVector2D QVector3D::toVector2D()


static void _init_f_toVector2D_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector2D > ();
}

static void _call_f_toVector2D_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector2D > ((QVector2D)((QVector3D *)cls)->toVector2D ());
}


// QVector4D QVector3D::toVector4D()


static void _init_f_toVector4D_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector4D > ();
}

static void _call_f_toVector4D_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector4D > ((QVector4D)((QVector3D *)cls)->toVector4D ());
}


// QVector3D QVector3D::unproject(const QMatrix4x4 &modelView, const QMatrix4x4 &projection, const QRect &viewport)


static void _init_f_unproject_c6070 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("modelView");
  decl->add_arg<const QMatrix4x4 & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("projection");
  decl->add_arg<const QMatrix4x4 & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("viewport");
  decl->add_arg<const QRect & > (argspec_2);
  decl->set_return<QVector3D > ();
}

static void _call_f_unproject_c6070 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMatrix4x4 &arg1 = args.read<const QMatrix4x4 & > (heap);
  const QMatrix4x4 &arg2 = args.read<const QMatrix4x4 & > (heap);
  const QRect &arg3 = args.read<const QRect & > (heap);
  ret.write<QVector3D > ((QVector3D)((QVector3D *)cls)->unproject (arg1, arg2, arg3));
}


// float QVector3D::x()


static void _init_f_x_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_x_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QVector3D *)cls)->x ());
}


// float QVector3D::y()


static void _init_f_y_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_y_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QVector3D *)cls)->y ());
}


// float QVector3D::z()


static void _init_f_z_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_z_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QVector3D *)cls)->z ());
}


// static QVector3D QVector3D::crossProduct(const QVector3D &v1, const QVector3D &v2)


static void _init_f_crossProduct_4172 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("v1");
  decl->add_arg<const QVector3D & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("v2");
  decl->add_arg<const QVector3D & > (argspec_1);
  decl->set_return<QVector3D > ();
}

static void _call_f_crossProduct_4172 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = args.read<const QVector3D & > (heap);
  const QVector3D &arg2 = args.read<const QVector3D & > (heap);
  ret.write<QVector3D > ((QVector3D)QVector3D::crossProduct (arg1, arg2));
}


// static float QVector3D::dotProduct(const QVector3D &v1, const QVector3D &v2)


static void _init_f_dotProduct_4172 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("v1");
  decl->add_arg<const QVector3D & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("v2");
  decl->add_arg<const QVector3D & > (argspec_1);
  decl->set_return<float > ();
}

static void _call_f_dotProduct_4172 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = args.read<const QVector3D & > (heap);
  const QVector3D &arg2 = args.read<const QVector3D & > (heap);
  ret.write<float > ((float)QVector3D::dotProduct (arg1, arg2));
}


// static QVector3D QVector3D::normal(const QVector3D &v1, const QVector3D &v2)


static void _init_f_normal_4172 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("v1");
  decl->add_arg<const QVector3D & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("v2");
  decl->add_arg<const QVector3D & > (argspec_1);
  decl->set_return<QVector3D > ();
}

static void _call_f_normal_4172 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = args.read<const QVector3D & > (heap);
  const QVector3D &arg2 = args.read<const QVector3D & > (heap);
  ret.write<QVector3D > ((QVector3D)QVector3D::normal (arg1, arg2));
}


// static QVector3D QVector3D::normal(const QVector3D &v1, const QVector3D &v2, const QVector3D &v3)


static void _init_f_normal_6204 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("v1");
  decl->add_arg<const QVector3D & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("v2");
  decl->add_arg<const QVector3D & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("v3");
  decl->add_arg<const QVector3D & > (argspec_2);
  decl->set_return<QVector3D > ();
}

static void _call_f_normal_6204 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = args.read<const QVector3D & > (heap);
  const QVector3D &arg2 = args.read<const QVector3D & > (heap);
  const QVector3D &arg3 = args.read<const QVector3D & > (heap);
  ret.write<QVector3D > ((QVector3D)QVector3D::normal (arg1, arg2, arg3));
}


//  bool ::operator==(const QVector3D &v1, const QVector3D &v2)
static bool op_QVector3D_operator_eq__eq__4172(const QVector3D *_self, const QVector3D &v2) {
  return ::operator==(*_self, v2);
}

//  bool ::operator!=(const QVector3D &v1, const QVector3D &v2)
static bool op_QVector3D_operator_excl__eq__4172(const QVector3D *_self, const QVector3D &v2) {
  return ::operator!=(*_self, v2);
}

//  const QVector3D ::operator+(const QVector3D &v1, const QVector3D &v2)
static const QVector3D op_QVector3D_operator_plus__4172(const QVector3D *_self, const QVector3D &v2) {
  return ::operator+(*_self, v2);
}

//  const QVector3D ::operator-(const QVector3D &v1, const QVector3D &v2)
static const QVector3D op_QVector3D_operator_minus__4172(const QVector3D *_self, const QVector3D &v2) {
  return ::operator-(*_self, v2);
}

//  const QVector3D ::operator*(const QVector3D &vector, float factor)
static const QVector3D op_QVector3D_operator_star__3002(const QVector3D *_self, float factor) {
  return ::operator*(*_self, factor);
}

//  const QVector3D ::operator*(const QVector3D &v1, const QVector3D &v2)
static const QVector3D op_QVector3D_operator_star__4172(const QVector3D *_self, const QVector3D &v2) {
  return ::operator*(*_self, v2);
}

//  const QVector3D ::operator-(const QVector3D &vector)
static const QVector3D op_QVector3D_operator_minus__2140(const QVector3D *_self) {
  return ::operator-(*_self);
}

//  const QVector3D ::operator/(const QVector3D &vector, float divisor)
static const QVector3D op_QVector3D_operator_slash__3002(const QVector3D *_self, float divisor) {
  return ::operator/(*_self, divisor);
}

//  const QVector3D ::operator/(const QVector3D &vector, const QVector3D &divisor)
static const QVector3D op_QVector3D_operator_slash__4172(const QVector3D *_self, const QVector3D &divisor) {
  return ::operator/(*_self, divisor);
}

//  QVector3D ::operator*(const QVector3D &vector, const QMatrix4x4 &matrix)
static QVector3D op_QVector3D_operator_star__4279u1(const QVector3D *_self, const QMatrix4x4 &matrix) {
  return ::operator*(*_self, matrix);
}


namespace gsi
{

static gsi::Methods methods_QVector3D () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector3D::QVector3D()\nThis method creates an object of class QVector3D.", &_init_ctor_QVector3D_0, &_call_ctor_QVector3D_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector3D::QVector3D(float xpos, float ypos, float zpos)\nThis method creates an object of class QVector3D.", &_init_ctor_QVector3D_2694, &_call_ctor_QVector3D_2694);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector3D::QVector3D(const QPoint &point)\nThis method creates an object of class QVector3D.", &_init_ctor_QVector3D_1916, &_call_ctor_QVector3D_1916);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector3D::QVector3D(const QPointF &point)\nThis method creates an object of class QVector3D.", &_init_ctor_QVector3D_1986, &_call_ctor_QVector3D_1986);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector3D::QVector3D(const QVector2D &vector)\nThis method creates an object of class QVector3D.", &_init_ctor_QVector3D_2139, &_call_ctor_QVector3D_2139);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector3D::QVector3D(const QVector2D &vector, float zpos)\nThis method creates an object of class QVector3D.", &_init_ctor_QVector3D_3001, &_call_ctor_QVector3D_3001);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector3D::QVector3D(const QVector4D &vector)\nThis method creates an object of class QVector3D.", &_init_ctor_QVector3D_2141, &_call_ctor_QVector3D_2141);
  methods += new qt_gsi::GenericMethod ("distanceToLine", "@brief Method float QVector3D::distanceToLine(const QVector3D &point, const QVector3D &direction)\n", true, &_init_f_distanceToLine_c4172, &_call_f_distanceToLine_c4172);
  methods += new qt_gsi::GenericMethod ("distanceToPlane", "@brief Method float QVector3D::distanceToPlane(const QVector3D &plane, const QVector3D &normal)\n", true, &_init_f_distanceToPlane_c4172, &_call_f_distanceToPlane_c4172);
  methods += new qt_gsi::GenericMethod ("distanceToPlane", "@brief Method float QVector3D::distanceToPlane(const QVector3D &plane1, const QVector3D &plane2, const QVector3D &plane3)\n", true, &_init_f_distanceToPlane_c6204, &_call_f_distanceToPlane_c6204);
  methods += new qt_gsi::GenericMethod ("distanceToPoint", "@brief Method float QVector3D::distanceToPoint(const QVector3D &point)\n", true, &_init_f_distanceToPoint_c2140, &_call_f_distanceToPoint_c2140);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QVector3D::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("length", "@brief Method float QVector3D::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod ("lengthSquared", "@brief Method float QVector3D::lengthSquared()\n", true, &_init_f_lengthSquared_c0, &_call_f_lengthSquared_c0);
  methods += new qt_gsi::GenericMethod ("normalize", "@brief Method void QVector3D::normalize()\n", false, &_init_f_normalize_0, &_call_f_normalize_0);
  methods += new qt_gsi::GenericMethod ("normalized", "@brief Method QVector3D QVector3D::normalized()\n", true, &_init_f_normalized_c0, &_call_f_normalized_c0);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QVector3D &QVector3D::operator*=(float factor)\n", false, &_init_f_operator_star__eq__970, &_call_f_operator_star__eq__970);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QVector3D &QVector3D::operator*=(const QVector3D &vector)\n", false, &_init_f_operator_star__eq__2140, &_call_f_operator_star__eq__2140);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QVector3D &QVector3D::operator+=(const QVector3D &vector)\n", false, &_init_f_operator_plus__eq__2140, &_call_f_operator_plus__eq__2140);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QVector3D &QVector3D::operator-=(const QVector3D &vector)\n", false, &_init_f_operator_minus__eq__2140, &_call_f_operator_minus__eq__2140);
  methods += new qt_gsi::GenericMethod ("/=", "@brief Method QVector3D &QVector3D::operator/=(float divisor)\n", false, &_init_f_operator_slash__eq__970, &_call_f_operator_slash__eq__970);
  methods += new qt_gsi::GenericMethod ("/=", "@brief Method QVector3D &QVector3D::operator/=(const QVector3D &vector)\n", false, &_init_f_operator_slash__eq__2140, &_call_f_operator_slash__eq__2140);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method float &QVector3D::operator[](int i)\n", false, &_init_f_operator_index__767, &_call_f_operator_index__767);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method float QVector3D::operator[](int i)\n", true, &_init_f_operator_index__c767, &_call_f_operator_index__c767);
  methods += new qt_gsi::GenericMethod ("project", "@brief Method QVector3D QVector3D::project(const QMatrix4x4 &modelView, const QMatrix4x4 &projection, const QRect &viewport)\n", true, &_init_f_project_c6070, &_call_f_project_c6070);
  methods += new qt_gsi::GenericMethod ("setX|x=", "@brief Method void QVector3D::setX(float x)\n", false, &_init_f_setX_970, &_call_f_setX_970);
  methods += new qt_gsi::GenericMethod ("setY|y=", "@brief Method void QVector3D::setY(float y)\n", false, &_init_f_setY_970, &_call_f_setY_970);
  methods += new qt_gsi::GenericMethod ("setZ|z=", "@brief Method void QVector3D::setZ(float z)\n", false, &_init_f_setZ_970, &_call_f_setZ_970);
  methods += new qt_gsi::GenericMethod ("toPoint", "@brief Method QPoint QVector3D::toPoint()\n", true, &_init_f_toPoint_c0, &_call_f_toPoint_c0);
  methods += new qt_gsi::GenericMethod ("toPointF", "@brief Method QPointF QVector3D::toPointF()\n", true, &_init_f_toPointF_c0, &_call_f_toPointF_c0);
  methods += new qt_gsi::GenericMethod ("toVector2D", "@brief Method QVector2D QVector3D::toVector2D()\n", true, &_init_f_toVector2D_c0, &_call_f_toVector2D_c0);
  methods += new qt_gsi::GenericMethod ("toVector4D", "@brief Method QVector4D QVector3D::toVector4D()\n", true, &_init_f_toVector4D_c0, &_call_f_toVector4D_c0);
  methods += new qt_gsi::GenericMethod ("unproject", "@brief Method QVector3D QVector3D::unproject(const QMatrix4x4 &modelView, const QMatrix4x4 &projection, const QRect &viewport)\n", true, &_init_f_unproject_c6070, &_call_f_unproject_c6070);
  methods += new qt_gsi::GenericMethod (":x", "@brief Method float QVector3D::x()\n", true, &_init_f_x_c0, &_call_f_x_c0);
  methods += new qt_gsi::GenericMethod (":y", "@brief Method float QVector3D::y()\n", true, &_init_f_y_c0, &_call_f_y_c0);
  methods += new qt_gsi::GenericMethod (":z", "@brief Method float QVector3D::z()\n", true, &_init_f_z_c0, &_call_f_z_c0);
  methods += new qt_gsi::GenericStaticMethod ("crossProduct", "@brief Static method QVector3D QVector3D::crossProduct(const QVector3D &v1, const QVector3D &v2)\nThis method is static and can be called without an instance.", &_init_f_crossProduct_4172, &_call_f_crossProduct_4172);
  methods += new qt_gsi::GenericStaticMethod ("dotProduct", "@brief Static method float QVector3D::dotProduct(const QVector3D &v1, const QVector3D &v2)\nThis method is static and can be called without an instance.", &_init_f_dotProduct_4172, &_call_f_dotProduct_4172);
  methods += new qt_gsi::GenericStaticMethod ("normal", "@brief Static method QVector3D QVector3D::normal(const QVector3D &v1, const QVector3D &v2)\nThis method is static and can be called without an instance.", &_init_f_normal_4172, &_call_f_normal_4172);
  methods += new qt_gsi::GenericStaticMethod ("normal", "@brief Static method QVector3D QVector3D::normal(const QVector3D &v1, const QVector3D &v2, const QVector3D &v3)\nThis method is static and can be called without an instance.", &_init_f_normal_6204, &_call_f_normal_6204);
  methods += gsi::method_ext("==", &::op_QVector3D_operator_eq__eq__4172, gsi::arg ("v2"), "@brief Operator bool ::operator==(const QVector3D &v1, const QVector3D &v2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("!=", &::op_QVector3D_operator_excl__eq__4172, gsi::arg ("v2"), "@brief Operator bool ::operator!=(const QVector3D &v1, const QVector3D &v2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("+", &::op_QVector3D_operator_plus__4172, gsi::arg ("v2"), "@brief Operator const QVector3D ::operator+(const QVector3D &v1, const QVector3D &v2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QVector3D_operator_minus__4172, gsi::arg ("v2"), "@brief Operator const QVector3D ::operator-(const QVector3D &v1, const QVector3D &v2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QVector3D_operator_star__3002, gsi::arg ("factor"), "@brief Operator const QVector3D ::operator*(const QVector3D &vector, float factor)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QVector3D_operator_star__4172, gsi::arg ("v2"), "@brief Operator const QVector3D ::operator*(const QVector3D &v1, const QVector3D &v2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QVector3D_operator_minus__2140, "@brief Operator const QVector3D ::operator-(const QVector3D &vector)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("/", &::op_QVector3D_operator_slash__3002, gsi::arg ("divisor"), "@brief Operator const QVector3D ::operator/(const QVector3D &vector, float divisor)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("/", &::op_QVector3D_operator_slash__4172, gsi::arg ("divisor"), "@brief Operator const QVector3D ::operator/(const QVector3D &vector, const QVector3D &divisor)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QVector3D_operator_star__4279u1, gsi::arg ("matrix"), "@brief Operator QVector3D ::operator*(const QVector3D &vector, const QMatrix4x4 &matrix)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QVector3D> decl_QVector3D ("QVector3D",
  methods_QVector3D (),
  "@qt\n@brief Binding of QVector3D");


GSIQT_PUBLIC gsi::Class<QVector3D> &qtdecl_QVector3D () { return decl_QVector3D; }

}

