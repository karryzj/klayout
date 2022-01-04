
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
*  @file gsiDeclQMimeDatabase.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMimeDatabase>
#include <QFileInfo>
#include <QIODevice>
#include <QMimeType>
#include <QUrl>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMimeDatabase

//  Constructor QMimeDatabase::QMimeDatabase()


static void _init_ctor_QMimeDatabase_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMimeDatabase> ();
}

static void _call_ctor_QMimeDatabase_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMimeDatabase *> (new QMimeDatabase ());
}


// QList<QMimeType> QMimeDatabase::allMimeTypes()


static void _init_f_allMimeTypes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QMimeType> > ();
}

static void _call_f_allMimeTypes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QMimeType> > ((QList<QMimeType>)((QMimeDatabase *)cls)->allMimeTypes ());
}


// QMimeType QMimeDatabase::mimeTypeForData(const QByteArray &data)


static void _init_f_mimeTypeForData_c2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QMimeType > ();
}

static void _call_f_mimeTypeForData_c2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QMimeType > ((QMimeType)((QMimeDatabase *)cls)->mimeTypeForData (arg1));
}


// QMimeType QMimeDatabase::mimeTypeForData(QIODevice *device)


static void _init_f_mimeTypeForData_c1447 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return<QMimeType > ();
}

static void _call_f_mimeTypeForData_c1447 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  ret.write<QMimeType > ((QMimeType)((QMimeDatabase *)cls)->mimeTypeForData (arg1));
}


// QMimeType QMimeDatabase::mimeTypeForFile(const QString &fileName, QMimeDatabase::MatchMode mode)


static void _init_f_mimeTypeForFile_c4613 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QMimeDatabase::MatchDefault");
  decl->add_arg<const qt_gsi::Converter<QMimeDatabase::MatchMode>::target_type & > (argspec_1);
  decl->set_return<QMimeType > ();
}

static void _call_f_mimeTypeForFile_c4613 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const qt_gsi::Converter<QMimeDatabase::MatchMode>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QMimeDatabase::MatchMode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QMimeDatabase::MatchMode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QMimeDatabase::MatchMode>(heap, QMimeDatabase::MatchDefault), heap);
  ret.write<QMimeType > ((QMimeType)((QMimeDatabase *)cls)->mimeTypeForFile (arg1, qt_gsi::QtToCppAdaptor<QMimeDatabase::MatchMode>(arg2).cref()));
}


// QMimeType QMimeDatabase::mimeTypeForFile(const QFileInfo &fileInfo, QMimeDatabase::MatchMode mode)


static void _init_f_mimeTypeForFile_c4762 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileInfo");
  decl->add_arg<const QFileInfo & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QMimeDatabase::MatchDefault");
  decl->add_arg<const qt_gsi::Converter<QMimeDatabase::MatchMode>::target_type & > (argspec_1);
  decl->set_return<QMimeType > ();
}

static void _call_f_mimeTypeForFile_c4762 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFileInfo &arg1 = gsi::arg_reader<const QFileInfo & >() (args, heap);
  const qt_gsi::Converter<QMimeDatabase::MatchMode>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QMimeDatabase::MatchMode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QMimeDatabase::MatchMode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QMimeDatabase::MatchMode>(heap, QMimeDatabase::MatchDefault), heap);
  ret.write<QMimeType > ((QMimeType)((QMimeDatabase *)cls)->mimeTypeForFile (arg1, qt_gsi::QtToCppAdaptor<QMimeDatabase::MatchMode>(arg2).cref()));
}


// QMimeType QMimeDatabase::mimeTypeForFileNameAndData(const QString &fileName, QIODevice *device)


static void _init_f_mimeTypeForFileNameAndData_c3364 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("device");
  decl->add_arg<QIODevice * > (argspec_1);
  decl->set_return<QMimeType > ();
}

static void _call_f_mimeTypeForFileNameAndData_c3364 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QIODevice *arg2 = gsi::arg_reader<QIODevice * >() (args, heap);
  ret.write<QMimeType > ((QMimeType)((QMimeDatabase *)cls)->mimeTypeForFileNameAndData (arg1, arg2));
}


// QMimeType QMimeDatabase::mimeTypeForFileNameAndData(const QString &fileName, const QByteArray &data)


static void _init_f_mimeTypeForFileNameAndData_c4226 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("data");
  decl->add_arg<const QByteArray & > (argspec_1);
  decl->set_return<QMimeType > ();
}

static void _call_f_mimeTypeForFileNameAndData_c4226 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QByteArray &arg2 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QMimeType > ((QMimeType)((QMimeDatabase *)cls)->mimeTypeForFileNameAndData (arg1, arg2));
}


// QMimeType QMimeDatabase::mimeTypeForName(const QString &nameOrAlias)


static void _init_f_mimeTypeForName_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nameOrAlias");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QMimeType > ();
}

static void _call_f_mimeTypeForName_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QMimeType > ((QMimeType)((QMimeDatabase *)cls)->mimeTypeForName (arg1));
}


// QMimeType QMimeDatabase::mimeTypeForUrl(const QUrl &url)


static void _init_f_mimeTypeForUrl_c1701 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("url");
  decl->add_arg<const QUrl & > (argspec_0);
  decl->set_return<QMimeType > ();
}

static void _call_f_mimeTypeForUrl_c1701 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrl &arg1 = gsi::arg_reader<const QUrl & >() (args, heap);
  ret.write<QMimeType > ((QMimeType)((QMimeDatabase *)cls)->mimeTypeForUrl (arg1));
}


// QList<QMimeType> QMimeDatabase::mimeTypesForFileName(const QString &fileName)


static void _init_f_mimeTypesForFileName_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QList<QMimeType> > ();
}

static void _call_f_mimeTypesForFileName_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QList<QMimeType> > ((QList<QMimeType>)((QMimeDatabase *)cls)->mimeTypesForFileName (arg1));
}


// QString QMimeDatabase::suffixForFileName(const QString &fileName)


static void _init_f_suffixForFileName_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_suffixForFileName_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QMimeDatabase *)cls)->suffixForFileName (arg1));
}



namespace gsi
{

static gsi::Methods methods_QMimeDatabase () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMimeDatabase::QMimeDatabase()\nThis method creates an object of class QMimeDatabase.", &_init_ctor_QMimeDatabase_0, &_call_ctor_QMimeDatabase_0);
  methods += new qt_gsi::GenericMethod ("allMimeTypes", "@brief Method QList<QMimeType> QMimeDatabase::allMimeTypes()\n", true, &_init_f_allMimeTypes_c0, &_call_f_allMimeTypes_c0);
  methods += new qt_gsi::GenericMethod ("mimeTypeForData", "@brief Method QMimeType QMimeDatabase::mimeTypeForData(const QByteArray &data)\n", true, &_init_f_mimeTypeForData_c2309, &_call_f_mimeTypeForData_c2309);
  methods += new qt_gsi::GenericMethod ("mimeTypeForData", "@brief Method QMimeType QMimeDatabase::mimeTypeForData(QIODevice *device)\n", true, &_init_f_mimeTypeForData_c1447, &_call_f_mimeTypeForData_c1447);
  methods += new qt_gsi::GenericMethod ("mimeTypeForFile", "@brief Method QMimeType QMimeDatabase::mimeTypeForFile(const QString &fileName, QMimeDatabase::MatchMode mode)\n", true, &_init_f_mimeTypeForFile_c4613, &_call_f_mimeTypeForFile_c4613);
  methods += new qt_gsi::GenericMethod ("mimeTypeForFile", "@brief Method QMimeType QMimeDatabase::mimeTypeForFile(const QFileInfo &fileInfo, QMimeDatabase::MatchMode mode)\n", true, &_init_f_mimeTypeForFile_c4762, &_call_f_mimeTypeForFile_c4762);
  methods += new qt_gsi::GenericMethod ("mimeTypeForFileNameAndData", "@brief Method QMimeType QMimeDatabase::mimeTypeForFileNameAndData(const QString &fileName, QIODevice *device)\n", true, &_init_f_mimeTypeForFileNameAndData_c3364, &_call_f_mimeTypeForFileNameAndData_c3364);
  methods += new qt_gsi::GenericMethod ("mimeTypeForFileNameAndData", "@brief Method QMimeType QMimeDatabase::mimeTypeForFileNameAndData(const QString &fileName, const QByteArray &data)\n", true, &_init_f_mimeTypeForFileNameAndData_c4226, &_call_f_mimeTypeForFileNameAndData_c4226);
  methods += new qt_gsi::GenericMethod ("mimeTypeForName", "@brief Method QMimeType QMimeDatabase::mimeTypeForName(const QString &nameOrAlias)\n", true, &_init_f_mimeTypeForName_c2025, &_call_f_mimeTypeForName_c2025);
  methods += new qt_gsi::GenericMethod ("mimeTypeForUrl", "@brief Method QMimeType QMimeDatabase::mimeTypeForUrl(const QUrl &url)\n", true, &_init_f_mimeTypeForUrl_c1701, &_call_f_mimeTypeForUrl_c1701);
  methods += new qt_gsi::GenericMethod ("mimeTypesForFileName", "@brief Method QList<QMimeType> QMimeDatabase::mimeTypesForFileName(const QString &fileName)\n", true, &_init_f_mimeTypesForFileName_c2025, &_call_f_mimeTypesForFileName_c2025);
  methods += new qt_gsi::GenericMethod ("suffixForFileName", "@brief Method QString QMimeDatabase::suffixForFileName(const QString &fileName)\n", true, &_init_f_suffixForFileName_c2025, &_call_f_suffixForFileName_c2025);
  return methods;
}

gsi::Class<QMimeDatabase> decl_QMimeDatabase ("QtCore", "QMimeDatabase",
  methods_QMimeDatabase (),
  "@qt\n@brief Binding of QMimeDatabase");


GSI_QTCORE_PUBLIC gsi::Class<QMimeDatabase> &qtdecl_QMimeDatabase () { return decl_QMimeDatabase; }

}


//  Implementation of the enum wrapper class for QMimeDatabase::MatchMode
namespace qt_gsi
{

static gsi::Enum<QMimeDatabase::MatchMode> decl_QMimeDatabase_MatchMode_Enum ("QtCore", "QMimeDatabase_MatchMode",
    gsi::enum_const ("MatchDefault", QMimeDatabase::MatchDefault, "@brief Enum constant QMimeDatabase::MatchDefault") +
    gsi::enum_const ("MatchExtension", QMimeDatabase::MatchExtension, "@brief Enum constant QMimeDatabase::MatchExtension") +
    gsi::enum_const ("MatchContent", QMimeDatabase::MatchContent, "@brief Enum constant QMimeDatabase::MatchContent"),
  "@qt\n@brief This class represents the QMimeDatabase::MatchMode enum");

static gsi::QFlagsClass<QMimeDatabase::MatchMode > decl_QMimeDatabase_MatchMode_Enums ("QtCore", "QMimeDatabase_QFlags_MatchMode",
  "@qt\n@brief This class represents the QFlags<QMimeDatabase::MatchMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QMimeDatabase> inject_QMimeDatabase_MatchMode_Enum_in_parent (decl_QMimeDatabase_MatchMode_Enum.defs ());
static gsi::ClassExt<QMimeDatabase> decl_QMimeDatabase_MatchMode_Enum_as_child (decl_QMimeDatabase_MatchMode_Enum, "MatchMode");
static gsi::ClassExt<QMimeDatabase> decl_QMimeDatabase_MatchMode_Enums_as_child (decl_QMimeDatabase_MatchMode_Enums, "QFlags_MatchMode");

}

