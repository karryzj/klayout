
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
*  @file gsiDeclQNetworkCacheMetaData.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QNetworkCacheMetaData>
#include <QDateTime>
#include <QUrl>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include "gsiDeclQtNetworkTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QNetworkCacheMetaData

//  Constructor QNetworkCacheMetaData::QNetworkCacheMetaData()


static void _init_ctor_QNetworkCacheMetaData_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QNetworkCacheMetaData> ();
}

static void _call_ctor_QNetworkCacheMetaData_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkCacheMetaData *> (new QNetworkCacheMetaData ());
}


//  Constructor QNetworkCacheMetaData::QNetworkCacheMetaData(const QNetworkCacheMetaData &other)


static void _init_ctor_QNetworkCacheMetaData_3377 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkCacheMetaData & > (argspec_0);
  decl->set_return_new<QNetworkCacheMetaData> ();
}

static void _call_ctor_QNetworkCacheMetaData_3377 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkCacheMetaData &arg1 = gsi::arg_reader<const QNetworkCacheMetaData & >() (args, heap);
  ret.write<QNetworkCacheMetaData *> (new QNetworkCacheMetaData (arg1));
}


// QDateTime QNetworkCacheMetaData::expirationDate()


static void _init_f_expirationDate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDateTime > ();
}

static void _call_f_expirationDate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDateTime > ((QDateTime)((QNetworkCacheMetaData *)cls)->expirationDate ());
}


// bool QNetworkCacheMetaData::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNetworkCacheMetaData *)cls)->isValid ());
}


// QDateTime QNetworkCacheMetaData::lastModified()


static void _init_f_lastModified_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDateTime > ();
}

static void _call_f_lastModified_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDateTime > ((QDateTime)((QNetworkCacheMetaData *)cls)->lastModified ());
}


// bool QNetworkCacheMetaData::operator!=(const QNetworkCacheMetaData &other)


static void _init_f_operator_excl__eq__c3377 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkCacheMetaData & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3377 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkCacheMetaData &arg1 = gsi::arg_reader<const QNetworkCacheMetaData & >() (args, heap);
  ret.write<bool > ((bool)((QNetworkCacheMetaData *)cls)->operator!= (arg1));
}


// QNetworkCacheMetaData &QNetworkCacheMetaData::operator=(const QNetworkCacheMetaData &other)


static void _init_f_operator_eq__3377 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkCacheMetaData & > (argspec_0);
  decl->set_return<QNetworkCacheMetaData & > ();
}

static void _call_f_operator_eq__3377 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkCacheMetaData &arg1 = gsi::arg_reader<const QNetworkCacheMetaData & >() (args, heap);
  ret.write<QNetworkCacheMetaData & > ((QNetworkCacheMetaData &)((QNetworkCacheMetaData *)cls)->operator= (arg1));
}


// bool QNetworkCacheMetaData::operator==(const QNetworkCacheMetaData &other)


static void _init_f_operator_eq__eq__c3377 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkCacheMetaData & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3377 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkCacheMetaData &arg1 = gsi::arg_reader<const QNetworkCacheMetaData & >() (args, heap);
  ret.write<bool > ((bool)((QNetworkCacheMetaData *)cls)->operator== (arg1));
}


// QList<QNetworkCacheMetaData::RawHeader> QNetworkCacheMetaData::rawHeaders()


static void _init_f_rawHeaders_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QNetworkCacheMetaData::RawHeader> > ();
}

static void _call_f_rawHeaders_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QNetworkCacheMetaData::RawHeader> > ((QList<QNetworkCacheMetaData::RawHeader>)((QNetworkCacheMetaData *)cls)->rawHeaders ());
}


// bool QNetworkCacheMetaData::saveToDisk()


static void _init_f_saveToDisk_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_saveToDisk_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNetworkCacheMetaData *)cls)->saveToDisk ());
}


// void QNetworkCacheMetaData::setExpirationDate(const QDateTime &dateTime)


static void _init_f_setExpirationDate_2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dateTime");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setExpirationDate_2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = gsi::arg_reader<const QDateTime & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkCacheMetaData *)cls)->setExpirationDate (arg1);
}


// void QNetworkCacheMetaData::setLastModified(const QDateTime &dateTime)


static void _init_f_setLastModified_2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dateTime");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLastModified_2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = gsi::arg_reader<const QDateTime & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkCacheMetaData *)cls)->setLastModified (arg1);
}


// void QNetworkCacheMetaData::setRawHeaders(const QList<QNetworkCacheMetaData::RawHeader> &headers)


static void _init_f_setRawHeaders_4991 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("headers");
  decl->add_arg<const QList<QNetworkCacheMetaData::RawHeader> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRawHeaders_4991 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QNetworkCacheMetaData::RawHeader> &arg1 = gsi::arg_reader<const QList<QNetworkCacheMetaData::RawHeader> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkCacheMetaData *)cls)->setRawHeaders (arg1);
}


// void QNetworkCacheMetaData::setSaveToDisk(bool allow)


static void _init_f_setSaveToDisk_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("allow");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSaveToDisk_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkCacheMetaData *)cls)->setSaveToDisk (arg1);
}


// void QNetworkCacheMetaData::setUrl(const QUrl &url)


static void _init_f_setUrl_1701 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("url");
  decl->add_arg<const QUrl & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setUrl_1701 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrl &arg1 = gsi::arg_reader<const QUrl & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkCacheMetaData *)cls)->setUrl (arg1);
}


// QUrl QNetworkCacheMetaData::url()


static void _init_f_url_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QUrl > ();
}

static void _call_f_url_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QUrl > ((QUrl)((QNetworkCacheMetaData *)cls)->url ());
}



namespace gsi
{

static gsi::Methods methods_QNetworkCacheMetaData () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNetworkCacheMetaData::QNetworkCacheMetaData()\nThis method creates an object of class QNetworkCacheMetaData.", &_init_ctor_QNetworkCacheMetaData_0, &_call_ctor_QNetworkCacheMetaData_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNetworkCacheMetaData::QNetworkCacheMetaData(const QNetworkCacheMetaData &other)\nThis method creates an object of class QNetworkCacheMetaData.", &_init_ctor_QNetworkCacheMetaData_3377, &_call_ctor_QNetworkCacheMetaData_3377);
  methods += new qt_gsi::GenericMethod (":expirationDate", "@brief Method QDateTime QNetworkCacheMetaData::expirationDate()\n", true, &_init_f_expirationDate_c0, &_call_f_expirationDate_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QNetworkCacheMetaData::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod (":lastModified", "@brief Method QDateTime QNetworkCacheMetaData::lastModified()\n", true, &_init_f_lastModified_c0, &_call_f_lastModified_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QNetworkCacheMetaData::operator!=(const QNetworkCacheMetaData &other)\n", true, &_init_f_operator_excl__eq__c3377, &_call_f_operator_excl__eq__c3377);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QNetworkCacheMetaData &QNetworkCacheMetaData::operator=(const QNetworkCacheMetaData &other)\n", false, &_init_f_operator_eq__3377, &_call_f_operator_eq__3377);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QNetworkCacheMetaData::operator==(const QNetworkCacheMetaData &other)\n", true, &_init_f_operator_eq__eq__c3377, &_call_f_operator_eq__eq__c3377);
  methods += new qt_gsi::GenericMethod (":rawHeaders", "@brief Method QList<QNetworkCacheMetaData::RawHeader> QNetworkCacheMetaData::rawHeaders()\n", true, &_init_f_rawHeaders_c0, &_call_f_rawHeaders_c0);
  methods += new qt_gsi::GenericMethod (":saveToDisk", "@brief Method bool QNetworkCacheMetaData::saveToDisk()\n", true, &_init_f_saveToDisk_c0, &_call_f_saveToDisk_c0);
  methods += new qt_gsi::GenericMethod ("setExpirationDate|expirationDate=", "@brief Method void QNetworkCacheMetaData::setExpirationDate(const QDateTime &dateTime)\n", false, &_init_f_setExpirationDate_2175, &_call_f_setExpirationDate_2175);
  methods += new qt_gsi::GenericMethod ("setLastModified|lastModified=", "@brief Method void QNetworkCacheMetaData::setLastModified(const QDateTime &dateTime)\n", false, &_init_f_setLastModified_2175, &_call_f_setLastModified_2175);
  methods += new qt_gsi::GenericMethod ("setRawHeaders|rawHeaders=", "@brief Method void QNetworkCacheMetaData::setRawHeaders(const QList<QNetworkCacheMetaData::RawHeader> &headers)\n", false, &_init_f_setRawHeaders_4991, &_call_f_setRawHeaders_4991);
  methods += new qt_gsi::GenericMethod ("setSaveToDisk|saveToDisk=", "@brief Method void QNetworkCacheMetaData::setSaveToDisk(bool allow)\n", false, &_init_f_setSaveToDisk_864, &_call_f_setSaveToDisk_864);
  methods += new qt_gsi::GenericMethod ("setUrl|url=", "@brief Method void QNetworkCacheMetaData::setUrl(const QUrl &url)\n", false, &_init_f_setUrl_1701, &_call_f_setUrl_1701);
  methods += new qt_gsi::GenericMethod (":url", "@brief Method QUrl QNetworkCacheMetaData::url()\n", true, &_init_f_url_c0, &_call_f_url_c0);
  return methods;
}

gsi::Class<QNetworkCacheMetaData> decl_QNetworkCacheMetaData ("QtNetwork", "QNetworkCacheMetaData",
  methods_QNetworkCacheMetaData (),
  "@qt\n@brief Binding of QNetworkCacheMetaData");


GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkCacheMetaData> &qtdecl_QNetworkCacheMetaData () { return decl_QNetworkCacheMetaData; }

}

