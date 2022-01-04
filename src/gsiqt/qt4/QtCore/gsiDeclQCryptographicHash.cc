
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
*  @file gsiDeclQCryptographicHash.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCryptographicHash>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCryptographicHash

//  Constructor QCryptographicHash::QCryptographicHash(QCryptographicHash::Algorithm method)


static void _init_ctor_QCryptographicHash_3331 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("method");
  decl->add_arg<const qt_gsi::Converter<QCryptographicHash::Algorithm>::target_type & > (argspec_0);
  decl->set_return_new<QCryptographicHash> ();
}

static void _call_ctor_QCryptographicHash_3331 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCryptographicHash::Algorithm>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QCryptographicHash::Algorithm>::target_type & >() (args, heap);
  ret.write<QCryptographicHash *> (new QCryptographicHash (qt_gsi::QtToCppAdaptor<QCryptographicHash::Algorithm>(arg1).cref()));
}


// void QCryptographicHash::addData(const char *data, int length)


static void _init_f_addData_2390 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("length");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_addData_2390 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCryptographicHash *)cls)->addData (arg1, arg2);
}


// void QCryptographicHash::addData(const QByteArray &data)


static void _init_f_addData_2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_addData_2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCryptographicHash *)cls)->addData (arg1);
}


// void QCryptographicHash::reset()


static void _init_f_reset_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_reset_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCryptographicHash *)cls)->reset ();
}


// QByteArray QCryptographicHash::result()


static void _init_f_result_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_result_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QCryptographicHash *)cls)->result ());
}


// static QByteArray QCryptographicHash::hash(const QByteArray &data, QCryptographicHash::Algorithm method)


static void _init_f_hash_5532 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("method");
  decl->add_arg<const qt_gsi::Converter<QCryptographicHash::Algorithm>::target_type & > (argspec_1);
  decl->set_return<QByteArray > ();
}

static void _call_f_hash_5532 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  const qt_gsi::Converter<QCryptographicHash::Algorithm>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<QCryptographicHash::Algorithm>::target_type & >() (args, heap);
  ret.write<QByteArray > ((QByteArray)QCryptographicHash::hash (arg1, qt_gsi::QtToCppAdaptor<QCryptographicHash::Algorithm>(arg2).cref()));
}



namespace gsi
{

static gsi::Methods methods_QCryptographicHash () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCryptographicHash::QCryptographicHash(QCryptographicHash::Algorithm method)\nThis method creates an object of class QCryptographicHash.", &_init_ctor_QCryptographicHash_3331, &_call_ctor_QCryptographicHash_3331);
  methods += new qt_gsi::GenericMethod ("addData", "@brief Method void QCryptographicHash::addData(const char *data, int length)\n", false, &_init_f_addData_2390, &_call_f_addData_2390);
  methods += new qt_gsi::GenericMethod ("addData", "@brief Method void QCryptographicHash::addData(const QByteArray &data)\n", false, &_init_f_addData_2309, &_call_f_addData_2309);
  methods += new qt_gsi::GenericMethod ("reset", "@brief Method void QCryptographicHash::reset()\n", false, &_init_f_reset_0, &_call_f_reset_0);
  methods += new qt_gsi::GenericMethod ("result", "@brief Method QByteArray QCryptographicHash::result()\n", true, &_init_f_result_c0, &_call_f_result_c0);
  methods += new qt_gsi::GenericStaticMethod ("hash", "@brief Static method QByteArray QCryptographicHash::hash(const QByteArray &data, QCryptographicHash::Algorithm method)\nThis method is static and can be called without an instance.", &_init_f_hash_5532, &_call_f_hash_5532);
  return methods;
}

gsi::Class<QCryptographicHash> decl_QCryptographicHash ("QtCore", "QCryptographicHash",
  methods_QCryptographicHash (),
  "@qt\n@brief Binding of QCryptographicHash");


GSI_QTCORE_PUBLIC gsi::Class<QCryptographicHash> &qtdecl_QCryptographicHash () { return decl_QCryptographicHash; }

}


//  Implementation of the enum wrapper class for QCryptographicHash::Algorithm
namespace qt_gsi
{

static gsi::Enum<QCryptographicHash::Algorithm> decl_QCryptographicHash_Algorithm_Enum ("QtCore", "QCryptographicHash_Algorithm",
    gsi::enum_const ("Md4", QCryptographicHash::Md4, "@brief Enum constant QCryptographicHash::Md4") +
    gsi::enum_const ("Md5", QCryptographicHash::Md5, "@brief Enum constant QCryptographicHash::Md5") +
    gsi::enum_const ("Sha1", QCryptographicHash::Sha1, "@brief Enum constant QCryptographicHash::Sha1"),
  "@qt\n@brief This class represents the QCryptographicHash::Algorithm enum");

static gsi::QFlagsClass<QCryptographicHash::Algorithm > decl_QCryptographicHash_Algorithm_Enums ("QtCore", "QCryptographicHash_QFlags_Algorithm",
  "@qt\n@brief This class represents the QFlags<QCryptographicHash::Algorithm> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QCryptographicHash> inject_QCryptographicHash_Algorithm_Enum_in_parent (decl_QCryptographicHash_Algorithm_Enum.defs ());
static gsi::ClassExt<QCryptographicHash> decl_QCryptographicHash_Algorithm_Enum_as_child (decl_QCryptographicHash_Algorithm_Enum, "Algorithm");
static gsi::ClassExt<QCryptographicHash> decl_QCryptographicHash_Algorithm_Enums_as_child (decl_QCryptographicHash_Algorithm_Enums, "QFlags_Algorithm");

}

