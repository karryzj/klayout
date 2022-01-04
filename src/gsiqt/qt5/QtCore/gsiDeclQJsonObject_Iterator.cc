
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
*  @file gsiDeclQJsonObject_Iterator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QJsonObject>
#include <QJsonObject>
#include <QJsonValueRef>
#include <QJsonValueRefPtr>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QJsonObject::iterator

//  Constructor QJsonObject::iterator::iterator()


static void _init_ctor_QJsonObject_Iterator_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QJsonObject::iterator> ();
}

static void _call_ctor_QJsonObject_Iterator_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonObject::iterator *> (new QJsonObject::iterator ());
}


//  Constructor QJsonObject::iterator::iterator(QJsonObject *obj, int index)


static void _init_ctor_QJsonObject_Iterator_2371 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("obj");
  decl->add_arg<QJsonObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("index");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QJsonObject::iterator> ();
}

static void _call_ctor_QJsonObject_Iterator_2371 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QJsonObject *arg1 = gsi::arg_reader<QJsonObject * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<QJsonObject::iterator *> (new QJsonObject::iterator (arg1, arg2));
}


// QString QJsonObject::iterator::key()


static void _init_f_key_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_key_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QJsonObject::iterator *)cls)->key ());
}


// bool QJsonObject::iterator::operator!=(const QJsonObject::iterator &other)


static void _init_f_operator_excl__eq__c3393 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonObject::iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3393 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonObject::iterator &arg1 = gsi::arg_reader<const QJsonObject::iterator & >() (args, heap);
  ret.write<bool > ((bool)((QJsonObject::iterator *)cls)->operator!= (arg1));
}


// bool QJsonObject::iterator::operator!=(const QJsonObject::const_iterator &other)


static void _init_f_operator_excl__eq__c4039 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonObject::const_iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c4039 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonObject::const_iterator &arg1 = gsi::arg_reader<const QJsonObject::const_iterator & >() (args, heap);
  ret.write<bool > ((bool)((QJsonObject::iterator *)cls)->operator!= (arg1));
}


// QJsonValueRef QJsonObject::iterator::operator*()


static void _init_f_operator_star__c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonValueRef > ();
}

static void _call_f_operator_star__c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonValueRef > ((QJsonValueRef)((QJsonObject::iterator *)cls)->operator* ());
}


// QJsonObject::iterator QJsonObject::iterator::operator+(int j)


static void _init_f_operator_plus__c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonObject::iterator > ();
}

static void _call_f_operator_plus__c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QJsonObject::iterator > ((QJsonObject::iterator)((QJsonObject::iterator *)cls)->operator+ (arg1));
}


// QJsonObject::iterator &QJsonObject::iterator::operator++()


static void _init_f_operator_plus__plus__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonObject::iterator & > ();
}

static void _call_f_operator_plus__plus__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonObject::iterator & > ((QJsonObject::iterator &)((QJsonObject::iterator *)cls)->operator++ ());
}


// QJsonObject::iterator QJsonObject::iterator::operator++(int)


static void _init_f_operator_plus__plus__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonObject::iterator > ();
}

static void _call_f_operator_plus__plus__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QJsonObject::iterator > ((QJsonObject::iterator)((QJsonObject::iterator *)cls)->operator++ (arg1));
}


// QJsonObject::iterator &QJsonObject::iterator::operator+=(int j)


static void _init_f_operator_plus__eq__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonObject::iterator & > ();
}

static void _call_f_operator_plus__eq__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QJsonObject::iterator & > ((QJsonObject::iterator &)((QJsonObject::iterator *)cls)->operator+= (arg1));
}


// QJsonObject::iterator QJsonObject::iterator::operator-(int j)


static void _init_f_operator_minus__c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonObject::iterator > ();
}

static void _call_f_operator_minus__c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QJsonObject::iterator > ((QJsonObject::iterator)((QJsonObject::iterator *)cls)->operator- (arg1));
}


// QJsonObject::iterator &QJsonObject::iterator::operator--()


static void _init_f_operator_minus__minus__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonObject::iterator & > ();
}

static void _call_f_operator_minus__minus__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonObject::iterator & > ((QJsonObject::iterator &)((QJsonObject::iterator *)cls)->operator-- ());
}


// QJsonObject::iterator QJsonObject::iterator::operator--(int)


static void _init_f_operator_minus__minus__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonObject::iterator > ();
}

static void _call_f_operator_minus__minus__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QJsonObject::iterator > ((QJsonObject::iterator)((QJsonObject::iterator *)cls)->operator-- (arg1));
}


// QJsonObject::iterator &QJsonObject::iterator::operator-=(int j)


static void _init_f_operator_minus__eq__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonObject::iterator & > ();
}

static void _call_f_operator_minus__eq__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QJsonObject::iterator & > ((QJsonObject::iterator &)((QJsonObject::iterator *)cls)->operator-= (arg1));
}


// QJsonValueRefPtr QJsonObject::iterator::operator->()


static void _init_f_operator_minus__gt__c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonValueRefPtr > ();
}

static void _call_f_operator_minus__gt__c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonValueRefPtr > ((QJsonValueRefPtr)((QJsonObject::iterator *)cls)->operator-> ());
}


// bool QJsonObject::iterator::operator==(const QJsonObject::iterator &other)


static void _init_f_operator_eq__eq__c3393 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonObject::iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3393 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonObject::iterator &arg1 = gsi::arg_reader<const QJsonObject::iterator & >() (args, heap);
  ret.write<bool > ((bool)((QJsonObject::iterator *)cls)->operator== (arg1));
}


// bool QJsonObject::iterator::operator==(const QJsonObject::const_iterator &other)


static void _init_f_operator_eq__eq__c4039 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonObject::const_iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c4039 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonObject::const_iterator &arg1 = gsi::arg_reader<const QJsonObject::const_iterator & >() (args, heap);
  ret.write<bool > ((bool)((QJsonObject::iterator *)cls)->operator== (arg1));
}


// QJsonValueRef QJsonObject::iterator::value()


static void _init_f_value_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonValueRef > ();
}

static void _call_f_value_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonValueRef > ((QJsonValueRef)((QJsonObject::iterator *)cls)->value ());
}



namespace gsi
{

static gsi::Methods methods_QJsonObject_Iterator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonObject::iterator::iterator()\nThis method creates an object of class QJsonObject::iterator.", &_init_ctor_QJsonObject_Iterator_0, &_call_ctor_QJsonObject_Iterator_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonObject::iterator::iterator(QJsonObject *obj, int index)\nThis method creates an object of class QJsonObject::iterator.", &_init_ctor_QJsonObject_Iterator_2371, &_call_ctor_QJsonObject_Iterator_2371);
  methods += new qt_gsi::GenericMethod ("key", "@brief Method QString QJsonObject::iterator::key()\n", true, &_init_f_key_c0, &_call_f_key_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QJsonObject::iterator::operator!=(const QJsonObject::iterator &other)\n", true, &_init_f_operator_excl__eq__c3393, &_call_f_operator_excl__eq__c3393);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QJsonObject::iterator::operator!=(const QJsonObject::const_iterator &other)\n", true, &_init_f_operator_excl__eq__c4039, &_call_f_operator_excl__eq__c4039);
  methods += new qt_gsi::GenericMethod ("*", "@brief Method QJsonValueRef QJsonObject::iterator::operator*()\n", true, &_init_f_operator_star__c0, &_call_f_operator_star__c0);
  methods += new qt_gsi::GenericMethod ("+", "@brief Method QJsonObject::iterator QJsonObject::iterator::operator+(int j)\n", true, &_init_f_operator_plus__c767, &_call_f_operator_plus__c767);
  methods += new qt_gsi::GenericMethod ("++", "@brief Method QJsonObject::iterator &QJsonObject::iterator::operator++()\n", false, &_init_f_operator_plus__plus__0, &_call_f_operator_plus__plus__0);
  methods += new qt_gsi::GenericMethod ("++", "@brief Method QJsonObject::iterator QJsonObject::iterator::operator++(int)\n", false, &_init_f_operator_plus__plus__767, &_call_f_operator_plus__plus__767);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QJsonObject::iterator &QJsonObject::iterator::operator+=(int j)\n", false, &_init_f_operator_plus__eq__767, &_call_f_operator_plus__eq__767);
  methods += new qt_gsi::GenericMethod ("-", "@brief Method QJsonObject::iterator QJsonObject::iterator::operator-(int j)\n", true, &_init_f_operator_minus__c767, &_call_f_operator_minus__c767);
  methods += new qt_gsi::GenericMethod ("--", "@brief Method QJsonObject::iterator &QJsonObject::iterator::operator--()\n", false, &_init_f_operator_minus__minus__0, &_call_f_operator_minus__minus__0);
  methods += new qt_gsi::GenericMethod ("--", "@brief Method QJsonObject::iterator QJsonObject::iterator::operator--(int)\n", false, &_init_f_operator_minus__minus__767, &_call_f_operator_minus__minus__767);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QJsonObject::iterator &QJsonObject::iterator::operator-=(int j)\n", false, &_init_f_operator_minus__eq__767, &_call_f_operator_minus__eq__767);
  methods += new qt_gsi::GenericMethod ("->", "@brief Method QJsonValueRefPtr QJsonObject::iterator::operator->()\n", true, &_init_f_operator_minus__gt__c0, &_call_f_operator_minus__gt__c0);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QJsonObject::iterator::operator==(const QJsonObject::iterator &other)\n", true, &_init_f_operator_eq__eq__c3393, &_call_f_operator_eq__eq__c3393);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QJsonObject::iterator::operator==(const QJsonObject::const_iterator &other)\n", true, &_init_f_operator_eq__eq__c4039, &_call_f_operator_eq__eq__c4039);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QJsonValueRef QJsonObject::iterator::value()\n", true, &_init_f_value_c0, &_call_f_value_c0);
  return methods;
}

gsi::Class<QJsonObject::iterator> decl_QJsonObject_Iterator ("QtCore", "QJsonObject_Iterator",
  methods_QJsonObject_Iterator (),
  "@qt\n@brief Binding of QJsonObject::iterator");

gsi::ClassExt<QJsonObject> decl_QJsonObject_Iterator_as_child (decl_QJsonObject_Iterator, "Iterator");

GSI_QTCORE_PUBLIC gsi::Class<QJsonObject::iterator> &qtdecl_QJsonObject_Iterator () { return decl_QJsonObject_Iterator; }

}

