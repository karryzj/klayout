
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
*  @file gsiDeclQIPv6Address.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QIPv6Address>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QIPv6Address

//  Constructor QIPv6Address::QIPv6Address()


static void _init_ctor_QIPv6Address_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QIPv6Address> ();
}

static void _call_ctor_QIPv6Address_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIPv6Address *> (new QIPv6Address ());
}


// quint8 &QIPv6Address::operator [](int index)


static void _init_f_operator_index__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<quint8 & > ();
}

static void _call_f_operator_index__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<quint8 & > ((quint8 &)((QIPv6Address *)cls)->operator [] (arg1));
}


// quint8 QIPv6Address::operator [](int index)


static void _init_f_operator_index__c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<quint8 > ();
}

static void _call_f_operator_index__c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<quint8 > ((quint8)((QIPv6Address *)cls)->operator [] (arg1));
}



namespace gsi
{

static gsi::Methods methods_QIPv6Address () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QIPv6Address::QIPv6Address()\nThis method creates an object of class QIPv6Address.", &_init_ctor_QIPv6Address_0, &_call_ctor_QIPv6Address_0);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method quint8 &QIPv6Address::operator [](int index)\n", false, &_init_f_operator_index__767, &_call_f_operator_index__767);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method quint8 QIPv6Address::operator [](int index)\n", true, &_init_f_operator_index__c767, &_call_f_operator_index__c767);
  return methods;
}

gsi::Class<QIPv6Address> decl_QIPv6Address ("QtMultimedia", "QIPv6Address",
  methods_QIPv6Address (),
  "@qt\n@brief Binding of QIPv6Address");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QIPv6Address> &qtdecl_QIPv6Address () { return decl_QIPv6Address; }

}

