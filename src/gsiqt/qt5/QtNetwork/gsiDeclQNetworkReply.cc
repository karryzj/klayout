
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
*  @file gsiDeclQNetworkReply.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QNetworkReply>
#include <QEvent>
#include <QMetaMethod>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QObject>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QThread>
#include <QUrl>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include "gsiDeclQtNetworkTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QNetworkReply

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QNetworkReply::staticMetaObject);
}


// void QNetworkReply::abort()


static void _init_f_abort_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_abort_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkReply *)cls)->abort ();
}


// QVariant QNetworkReply::attribute(QNetworkRequest::Attribute code)


static void _init_f_attribute_c3072 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("code");
  decl->add_arg<const qt_gsi::Converter<QNetworkRequest::Attribute>::target_type & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_attribute_c3072 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QNetworkRequest::Attribute>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QNetworkRequest::Attribute>::target_type & >() (args, heap);
  ret.write<QVariant > ((QVariant)((QNetworkReply *)cls)->attribute (qt_gsi::QtToCppAdaptor<QNetworkRequest::Attribute>(arg1).cref()));
}


// void QNetworkReply::close()


static void _init_f_close_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_close_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkReply *)cls)->close ();
}


// QNetworkReply::NetworkError QNetworkReply::error()


static void _init_f_error_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QNetworkReply::NetworkError>::target_type > ();
}

static void _call_f_error_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QNetworkReply::NetworkError>::target_type > ((qt_gsi::Converter<QNetworkReply::NetworkError>::target_type)qt_gsi::CppToQtAdaptor<QNetworkReply::NetworkError>(((QNetworkReply *)cls)->error ()));
}


// bool QNetworkReply::hasRawHeader(const QByteArray &headerName)


static void _init_f_hasRawHeader_c2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("headerName");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_hasRawHeader_c2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<bool > ((bool)((QNetworkReply *)cls)->hasRawHeader (arg1));
}


// QVariant QNetworkReply::header(QNetworkRequest::KnownHeaders header)


static void _init_f_header_c3349 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("header");
  decl->add_arg<const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_header_c3349 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & >() (args, heap);
  ret.write<QVariant > ((QVariant)((QNetworkReply *)cls)->header (qt_gsi::QtToCppAdaptor<QNetworkRequest::KnownHeaders>(arg1).cref()));
}


// void QNetworkReply::ignoreSslErrors(const QList<QSslError> &errors)


static void _init_f_ignoreSslErrors_2837 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("errors");
  decl->add_arg<const QList<QSslError> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_ignoreSslErrors_2837 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QSslError> &arg1 = gsi::arg_reader<const QList<QSslError> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkReply *)cls)->ignoreSslErrors (arg1);
}


// void QNetworkReply::ignoreSslErrors()


static void _init_f_ignoreSslErrors_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_ignoreSslErrors_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkReply *)cls)->ignoreSslErrors ();
}


// bool QNetworkReply::isFinished()


static void _init_f_isFinished_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isFinished_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNetworkReply *)cls)->isFinished ());
}


// bool QNetworkReply::isRunning()


static void _init_f_isRunning_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isRunning_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNetworkReply *)cls)->isRunning ());
}


// bool QNetworkReply::isSequential()


static void _init_f_isSequential_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isSequential_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNetworkReply *)cls)->isSequential ());
}


// QNetworkAccessManager *QNetworkReply::manager()


static void _init_f_manager_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNetworkAccessManager * > ();
}

static void _call_f_manager_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkAccessManager * > ((QNetworkAccessManager *)((QNetworkReply *)cls)->manager ());
}


// QNetworkAccessManager::Operation QNetworkReply::operation()


static void _init_f_operation_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QNetworkAccessManager::Operation>::target_type > ();
}

static void _call_f_operation_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QNetworkAccessManager::Operation>::target_type > ((qt_gsi::Converter<QNetworkAccessManager::Operation>::target_type)qt_gsi::CppToQtAdaptor<QNetworkAccessManager::Operation>(((QNetworkReply *)cls)->operation ()));
}


// QByteArray QNetworkReply::rawHeader(const QByteArray &headerName)


static void _init_f_rawHeader_c2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("headerName");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_rawHeader_c2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QByteArray > ((QByteArray)((QNetworkReply *)cls)->rawHeader (arg1));
}


// QList<QByteArray> QNetworkReply::rawHeaderList()


static void _init_f_rawHeaderList_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_rawHeaderList_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)((QNetworkReply *)cls)->rawHeaderList ());
}


// const QList<QNetworkReply::RawHeaderPair> &QNetworkReply::rawHeaderPairs()


static void _init_f_rawHeaderPairs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QList<QNetworkReply::RawHeaderPair> & > ();
}

static void _call_f_rawHeaderPairs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QList<QNetworkReply::RawHeaderPair> & > ((const QList<QNetworkReply::RawHeaderPair> &)((QNetworkReply *)cls)->rawHeaderPairs ());
}


// qint64 QNetworkReply::readBufferSize()


static void _init_f_readBufferSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_readBufferSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QNetworkReply *)cls)->readBufferSize ());
}


// QNetworkRequest QNetworkReply::request()


static void _init_f_request_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNetworkRequest > ();
}

static void _call_f_request_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkRequest > ((QNetworkRequest)((QNetworkReply *)cls)->request ());
}


// void QNetworkReply::setReadBufferSize(qint64 size)


static void _init_f_setReadBufferSize_986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setReadBufferSize_986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkReply *)cls)->setReadBufferSize (arg1);
}


// void QNetworkReply::setSslConfiguration(const QSslConfiguration &configuration)


static void _init_f_setSslConfiguration_3068 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("configuration");
  decl->add_arg<const QSslConfiguration & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSslConfiguration_3068 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslConfiguration &arg1 = gsi::arg_reader<const QSslConfiguration & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkReply *)cls)->setSslConfiguration (arg1);
}


// QSslConfiguration QNetworkReply::sslConfiguration()


static void _init_f_sslConfiguration_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSslConfiguration > ();
}

static void _call_f_sslConfiguration_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSslConfiguration > ((QSslConfiguration)((QNetworkReply *)cls)->sslConfiguration ());
}


// QUrl QNetworkReply::url()


static void _init_f_url_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QUrl > ();
}

static void _call_f_url_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QUrl > ((QUrl)((QNetworkReply *)cls)->url ());
}


// static QString QNetworkReply::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (__null, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QNetworkReply::tr (arg1, arg2, arg3));
}


// static QString QNetworkReply::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (__null, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QNetworkReply::trUtf8 (arg1, arg2, arg3));
}



namespace gsi
{

static gsi::Methods methods_QNetworkReply () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("abort", "@brief Method void QNetworkReply::abort()\n", false, &_init_f_abort_0, &_call_f_abort_0);
  methods += new qt_gsi::GenericMethod ("attribute", "@brief Method QVariant QNetworkReply::attribute(QNetworkRequest::Attribute code)\n", true, &_init_f_attribute_c3072, &_call_f_attribute_c3072);
  methods += new qt_gsi::GenericMethod ("close", "@brief Method void QNetworkReply::close()\nThis is a reimplementation of QIODevice::close", false, &_init_f_close_0, &_call_f_close_0);
  methods += new qt_gsi::GenericMethod ("error", "@brief Method QNetworkReply::NetworkError QNetworkReply::error()\n", true, &_init_f_error_c0, &_call_f_error_c0);
  methods += new qt_gsi::GenericMethod ("hasRawHeader", "@brief Method bool QNetworkReply::hasRawHeader(const QByteArray &headerName)\n", true, &_init_f_hasRawHeader_c2309, &_call_f_hasRawHeader_c2309);
  methods += new qt_gsi::GenericMethod ("header", "@brief Method QVariant QNetworkReply::header(QNetworkRequest::KnownHeaders header)\n", true, &_init_f_header_c3349, &_call_f_header_c3349);
  methods += new qt_gsi::GenericMethod ("ignoreSslErrors", "@brief Method void QNetworkReply::ignoreSslErrors(const QList<QSslError> &errors)\n", false, &_init_f_ignoreSslErrors_2837, &_call_f_ignoreSslErrors_2837);
  methods += new qt_gsi::GenericMethod ("ignoreSslErrors", "@brief Method void QNetworkReply::ignoreSslErrors()\n", false, &_init_f_ignoreSslErrors_0, &_call_f_ignoreSslErrors_0);
  methods += new qt_gsi::GenericMethod ("isFinished?", "@brief Method bool QNetworkReply::isFinished()\n", true, &_init_f_isFinished_c0, &_call_f_isFinished_c0);
  methods += new qt_gsi::GenericMethod ("isRunning?", "@brief Method bool QNetworkReply::isRunning()\n", true, &_init_f_isRunning_c0, &_call_f_isRunning_c0);
  methods += new qt_gsi::GenericMethod ("isSequential?", "@brief Method bool QNetworkReply::isSequential()\nThis is a reimplementation of QIODevice::isSequential", true, &_init_f_isSequential_c0, &_call_f_isSequential_c0);
  methods += new qt_gsi::GenericMethod ("manager", "@brief Method QNetworkAccessManager *QNetworkReply::manager()\n", true, &_init_f_manager_c0, &_call_f_manager_c0);
  methods += new qt_gsi::GenericMethod ("operation", "@brief Method QNetworkAccessManager::Operation QNetworkReply::operation()\n", true, &_init_f_operation_c0, &_call_f_operation_c0);
  methods += new qt_gsi::GenericMethod ("rawHeader", "@brief Method QByteArray QNetworkReply::rawHeader(const QByteArray &headerName)\n", true, &_init_f_rawHeader_c2309, &_call_f_rawHeader_c2309);
  methods += new qt_gsi::GenericMethod ("rawHeaderList", "@brief Method QList<QByteArray> QNetworkReply::rawHeaderList()\n", true, &_init_f_rawHeaderList_c0, &_call_f_rawHeaderList_c0);
  methods += new qt_gsi::GenericMethod ("rawHeaderPairs", "@brief Method const QList<QNetworkReply::RawHeaderPair> &QNetworkReply::rawHeaderPairs()\n", true, &_init_f_rawHeaderPairs_c0, &_call_f_rawHeaderPairs_c0);
  methods += new qt_gsi::GenericMethod (":readBufferSize", "@brief Method qint64 QNetworkReply::readBufferSize()\n", true, &_init_f_readBufferSize_c0, &_call_f_readBufferSize_c0);
  methods += new qt_gsi::GenericMethod ("request", "@brief Method QNetworkRequest QNetworkReply::request()\n", true, &_init_f_request_c0, &_call_f_request_c0);
  methods += new qt_gsi::GenericMethod ("setReadBufferSize|readBufferSize=", "@brief Method void QNetworkReply::setReadBufferSize(qint64 size)\n", false, &_init_f_setReadBufferSize_986, &_call_f_setReadBufferSize_986);
  methods += new qt_gsi::GenericMethod ("setSslConfiguration|sslConfiguration=", "@brief Method void QNetworkReply::setSslConfiguration(const QSslConfiguration &configuration)\n", false, &_init_f_setSslConfiguration_3068, &_call_f_setSslConfiguration_3068);
  methods += new qt_gsi::GenericMethod (":sslConfiguration", "@brief Method QSslConfiguration QNetworkReply::sslConfiguration()\n", true, &_init_f_sslConfiguration_c0, &_call_f_sslConfiguration_c0);
  methods += new qt_gsi::GenericMethod ("url", "@brief Method QUrl QNetworkReply::url()\n", true, &_init_f_url_c0, &_call_f_url_c0);
  methods += gsi::qt_signal ("aboutToClose()", "aboutToClose", "@brief Signal declaration for QNetworkReply::aboutToClose()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<qint64 > ("bytesWritten(qint64)", "bytesWritten", gsi::arg("bytes"), "@brief Signal declaration for QNetworkReply::bytesWritten(qint64 bytes)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QNetworkReply::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<qint64, qint64 > ("downloadProgress(qint64, qint64)", "downloadProgress", gsi::arg("bytesReceived"), gsi::arg("bytesTotal"), "@brief Signal declaration for QNetworkReply::downloadProgress(qint64 bytesReceived, qint64 bytesTotal)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("encrypted()", "encrypted", "@brief Signal declaration for QNetworkReply::encrypted()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const qt_gsi::Converter<QNetworkReply::NetworkError>::target_type & > ("error(QNetworkReply::NetworkError)", "error_sig", gsi::arg("arg1"), "@brief Signal declaration for QNetworkReply::error(QNetworkReply::NetworkError)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("finished()", "finished", "@brief Signal declaration for QNetworkReply::finished()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("metaDataChanged()", "metaDataChanged", "@brief Signal declaration for QNetworkReply::metaDataChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QNetworkReply::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QSslPreSharedKeyAuthenticator * > ("preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator *)", "preSharedKeyAuthenticationRequired", gsi::arg("authenticator"), "@brief Signal declaration for QNetworkReply::preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator *authenticator)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("readChannelFinished()", "readChannelFinished", "@brief Signal declaration for QNetworkReply::readChannelFinished()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("readyRead()", "readyRead", "@brief Signal declaration for QNetworkReply::readyRead()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QList<QSslError> & > ("sslErrors(const QList<QSslError> &)", "sslErrors", gsi::arg("errors"), "@brief Signal declaration for QNetworkReply::sslErrors(const QList<QSslError> &errors)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<qint64, qint64 > ("uploadProgress(qint64, qint64)", "uploadProgress", gsi::arg("bytesSent"), gsi::arg("bytesTotal"), "@brief Signal declaration for QNetworkReply::uploadProgress(qint64 bytesSent, qint64 bytesTotal)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QNetworkReply::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QNetworkReply::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QIODevice> &qtdecl_QIODevice ();

qt_gsi::QtNativeClass<QNetworkReply> decl_QNetworkReply (qtdecl_QIODevice (), "QtNetwork", "QNetworkReply",
  methods_QNetworkReply (),
  "@qt\n@brief Binding of QNetworkReply");


GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkReply> &qtdecl_QNetworkReply () { return decl_QNetworkReply; }

}


//  Implementation of the enum wrapper class for QNetworkReply::NetworkError
namespace qt_gsi
{

static gsi::Enum<QNetworkReply::NetworkError> decl_QNetworkReply_NetworkError_Enum ("QtNetwork", "QNetworkReply_NetworkError",
    gsi::enum_const ("NoError", QNetworkReply::NoError, "@brief Enum constant QNetworkReply::NoError") +
    gsi::enum_const ("ConnectionRefusedError", QNetworkReply::ConnectionRefusedError, "@brief Enum constant QNetworkReply::ConnectionRefusedError") +
    gsi::enum_const ("RemoteHostClosedError", QNetworkReply::RemoteHostClosedError, "@brief Enum constant QNetworkReply::RemoteHostClosedError") +
    gsi::enum_const ("HostNotFoundError", QNetworkReply::HostNotFoundError, "@brief Enum constant QNetworkReply::HostNotFoundError") +
    gsi::enum_const ("TimeoutError", QNetworkReply::TimeoutError, "@brief Enum constant QNetworkReply::TimeoutError") +
    gsi::enum_const ("OperationCanceledError", QNetworkReply::OperationCanceledError, "@brief Enum constant QNetworkReply::OperationCanceledError") +
    gsi::enum_const ("SslHandshakeFailedError", QNetworkReply::SslHandshakeFailedError, "@brief Enum constant QNetworkReply::SslHandshakeFailedError") +
    gsi::enum_const ("TemporaryNetworkFailureError", QNetworkReply::TemporaryNetworkFailureError, "@brief Enum constant QNetworkReply::TemporaryNetworkFailureError") +
    gsi::enum_const ("NetworkSessionFailedError", QNetworkReply::NetworkSessionFailedError, "@brief Enum constant QNetworkReply::NetworkSessionFailedError") +
    gsi::enum_const ("BackgroundRequestNotAllowedError", QNetworkReply::BackgroundRequestNotAllowedError, "@brief Enum constant QNetworkReply::BackgroundRequestNotAllowedError") +
    gsi::enum_const ("UnknownNetworkError", QNetworkReply::UnknownNetworkError, "@brief Enum constant QNetworkReply::UnknownNetworkError") +
    gsi::enum_const ("ProxyConnectionRefusedError", QNetworkReply::ProxyConnectionRefusedError, "@brief Enum constant QNetworkReply::ProxyConnectionRefusedError") +
    gsi::enum_const ("ProxyConnectionClosedError", QNetworkReply::ProxyConnectionClosedError, "@brief Enum constant QNetworkReply::ProxyConnectionClosedError") +
    gsi::enum_const ("ProxyNotFoundError", QNetworkReply::ProxyNotFoundError, "@brief Enum constant QNetworkReply::ProxyNotFoundError") +
    gsi::enum_const ("ProxyTimeoutError", QNetworkReply::ProxyTimeoutError, "@brief Enum constant QNetworkReply::ProxyTimeoutError") +
    gsi::enum_const ("ProxyAuthenticationRequiredError", QNetworkReply::ProxyAuthenticationRequiredError, "@brief Enum constant QNetworkReply::ProxyAuthenticationRequiredError") +
    gsi::enum_const ("UnknownProxyError", QNetworkReply::UnknownProxyError, "@brief Enum constant QNetworkReply::UnknownProxyError") +
    gsi::enum_const ("ContentAccessDenied", QNetworkReply::ContentAccessDenied, "@brief Enum constant QNetworkReply::ContentAccessDenied") +
    gsi::enum_const ("ContentOperationNotPermittedError", QNetworkReply::ContentOperationNotPermittedError, "@brief Enum constant QNetworkReply::ContentOperationNotPermittedError") +
    gsi::enum_const ("ContentNotFoundError", QNetworkReply::ContentNotFoundError, "@brief Enum constant QNetworkReply::ContentNotFoundError") +
    gsi::enum_const ("AuthenticationRequiredError", QNetworkReply::AuthenticationRequiredError, "@brief Enum constant QNetworkReply::AuthenticationRequiredError") +
    gsi::enum_const ("ContentReSendError", QNetworkReply::ContentReSendError, "@brief Enum constant QNetworkReply::ContentReSendError") +
    gsi::enum_const ("ContentConflictError", QNetworkReply::ContentConflictError, "@brief Enum constant QNetworkReply::ContentConflictError") +
    gsi::enum_const ("ContentGoneError", QNetworkReply::ContentGoneError, "@brief Enum constant QNetworkReply::ContentGoneError") +
    gsi::enum_const ("UnknownContentError", QNetworkReply::UnknownContentError, "@brief Enum constant QNetworkReply::UnknownContentError") +
    gsi::enum_const ("ProtocolUnknownError", QNetworkReply::ProtocolUnknownError, "@brief Enum constant QNetworkReply::ProtocolUnknownError") +
    gsi::enum_const ("ProtocolInvalidOperationError", QNetworkReply::ProtocolInvalidOperationError, "@brief Enum constant QNetworkReply::ProtocolInvalidOperationError") +
    gsi::enum_const ("ProtocolFailure", QNetworkReply::ProtocolFailure, "@brief Enum constant QNetworkReply::ProtocolFailure") +
    gsi::enum_const ("InternalServerError", QNetworkReply::InternalServerError, "@brief Enum constant QNetworkReply::InternalServerError") +
    gsi::enum_const ("OperationNotImplementedError", QNetworkReply::OperationNotImplementedError, "@brief Enum constant QNetworkReply::OperationNotImplementedError") +
    gsi::enum_const ("ServiceUnavailableError", QNetworkReply::ServiceUnavailableError, "@brief Enum constant QNetworkReply::ServiceUnavailableError") +
    gsi::enum_const ("UnknownServerError", QNetworkReply::UnknownServerError, "@brief Enum constant QNetworkReply::UnknownServerError"),
  "@qt\n@brief This class represents the QNetworkReply::NetworkError enum");

static gsi::QFlagsClass<QNetworkReply::NetworkError > decl_QNetworkReply_NetworkError_Enums ("QtNetwork", "QNetworkReply_QFlags_NetworkError",
  "@qt\n@brief This class represents the QFlags<QNetworkReply::NetworkError> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QNetworkReply> inject_QNetworkReply_NetworkError_Enum_in_parent (decl_QNetworkReply_NetworkError_Enum.defs ());
static gsi::ClassExt<QNetworkReply> decl_QNetworkReply_NetworkError_Enum_as_child (decl_QNetworkReply_NetworkError_Enum, "NetworkError");
static gsi::ClassExt<QNetworkReply> decl_QNetworkReply_NetworkError_Enums_as_child (decl_QNetworkReply_NetworkError_Enums, "QFlags_NetworkError");

}

