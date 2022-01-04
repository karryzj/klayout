
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
*  @file gsiDeclQNetworkProxy.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QNetworkProxy>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QNetworkProxy

//  Constructor QNetworkProxy::QNetworkProxy()


static void _init_ctor_QNetworkProxy_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QNetworkProxy> ();
}

static void _call_ctor_QNetworkProxy_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkProxy *> (new QNetworkProxy ());
}


//  Constructor QNetworkProxy::QNetworkProxy(QNetworkProxy::ProxyType type, const QString &hostName, quint16 port, const QString &user, const QString &password)


static void _init_ctor_QNetworkProxy_9632 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QNetworkProxy::ProxyType>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("hostName", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("port", true, "0");
  decl->add_arg<quint16 > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("user", true, "QString()");
  decl->add_arg<const QString & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("password", true, "QString()");
  decl->add_arg<const QString & > (argspec_4);
  decl->set_return_new<QNetworkProxy> ();
}

static void _call_ctor_QNetworkProxy_9632 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QNetworkProxy::ProxyType>::target_type & arg1 = args.read<const qt_gsi::Converter<QNetworkProxy::ProxyType>::target_type & > (heap);
  const QString &arg2 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  quint16 arg3 = args ? args.read<quint16 > (heap) : (quint16)(0);
  const QString &arg4 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  const QString &arg5 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  ret.write<QNetworkProxy *> (new QNetworkProxy (qt_gsi::QtToCppAdaptor<QNetworkProxy::ProxyType>(arg1).cref(), arg2, arg3, arg4, arg5));
}


//  Constructor QNetworkProxy::QNetworkProxy(const QNetworkProxy &other)


static void _init_ctor_QNetworkProxy_2686 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkProxy & > (argspec_0);
  decl->set_return_new<QNetworkProxy> ();
}

static void _call_ctor_QNetworkProxy_2686 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkProxy &arg1 = args.read<const QNetworkProxy & > (heap);
  ret.write<QNetworkProxy *> (new QNetworkProxy (arg1));
}


// QFlags<QNetworkProxy::Capability> QNetworkProxy::capabilities()


static void _init_f_capabilities_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QNetworkProxy::Capability> > ();
}

static void _call_f_capabilities_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QNetworkProxy::Capability> > ((QFlags<QNetworkProxy::Capability>)((QNetworkProxy *)cls)->capabilities ());
}


// bool QNetworkProxy::hasRawHeader(const QByteArray &headerName)


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
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<bool > ((bool)((QNetworkProxy *)cls)->hasRawHeader (arg1));
}


// QVariant QNetworkProxy::header(QNetworkRequest::KnownHeaders header)


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
  const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & arg1 = args.read<const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & > (heap);
  ret.write<QVariant > ((QVariant)((QNetworkProxy *)cls)->header (qt_gsi::QtToCppAdaptor<QNetworkRequest::KnownHeaders>(arg1).cref()));
}


// QString QNetworkProxy::hostName()


static void _init_f_hostName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_hostName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QNetworkProxy *)cls)->hostName ());
}


// bool QNetworkProxy::isCachingProxy()


static void _init_f_isCachingProxy_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isCachingProxy_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNetworkProxy *)cls)->isCachingProxy ());
}


// bool QNetworkProxy::isTransparentProxy()


static void _init_f_isTransparentProxy_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isTransparentProxy_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNetworkProxy *)cls)->isTransparentProxy ());
}


// bool QNetworkProxy::operator!=(const QNetworkProxy &other)


static void _init_f_operator_excl__eq__c2686 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkProxy & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2686 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkProxy &arg1 = args.read<const QNetworkProxy & > (heap);
  ret.write<bool > ((bool)((QNetworkProxy *)cls)->operator!= (arg1));
}


// QNetworkProxy &QNetworkProxy::operator=(const QNetworkProxy &other)


static void _init_f_operator_eq__2686 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkProxy & > (argspec_0);
  decl->set_return<QNetworkProxy & > ();
}

static void _call_f_operator_eq__2686 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkProxy &arg1 = args.read<const QNetworkProxy & > (heap);
  ret.write<QNetworkProxy & > ((QNetworkProxy &)((QNetworkProxy *)cls)->operator= (arg1));
}


// bool QNetworkProxy::operator==(const QNetworkProxy &other)


static void _init_f_operator_eq__eq__c2686 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkProxy & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2686 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkProxy &arg1 = args.read<const QNetworkProxy & > (heap);
  ret.write<bool > ((bool)((QNetworkProxy *)cls)->operator== (arg1));
}


// QString QNetworkProxy::password()


static void _init_f_password_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_password_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QNetworkProxy *)cls)->password ());
}


// quint16 QNetworkProxy::port()


static void _init_f_port_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint16 > ();
}

static void _call_f_port_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint16 > ((quint16)((QNetworkProxy *)cls)->port ());
}


// QByteArray QNetworkProxy::rawHeader(const QByteArray &headerName)


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
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<QByteArray > ((QByteArray)((QNetworkProxy *)cls)->rawHeader (arg1));
}


// QList<QByteArray> QNetworkProxy::rawHeaderList()


static void _init_f_rawHeaderList_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_rawHeaderList_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)((QNetworkProxy *)cls)->rawHeaderList ());
}


// void QNetworkProxy::setCapabilities(QFlags<QNetworkProxy::Capability> capab)


static void _init_f_setCapabilities_3647 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("capab");
  decl->add_arg<QFlags<QNetworkProxy::Capability> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCapabilities_3647 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QNetworkProxy::Capability> arg1 = args.read<QFlags<QNetworkProxy::Capability> > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkProxy *)cls)->setCapabilities (arg1);
}


// void QNetworkProxy::setHeader(QNetworkRequest::KnownHeaders header, const QVariant &value)


static void _init_f_setHeader_5360 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("header");
  decl->add_arg<const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setHeader_5360 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & arg1 = args.read<const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & > (heap);
  const QVariant &arg2 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkProxy *)cls)->setHeader (qt_gsi::QtToCppAdaptor<QNetworkRequest::KnownHeaders>(arg1).cref(), arg2);
}


// void QNetworkProxy::setHostName(const QString &hostName)


static void _init_f_setHostName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("hostName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHostName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkProxy *)cls)->setHostName (arg1);
}


// void QNetworkProxy::setPassword(const QString &password)


static void _init_f_setPassword_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("password");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPassword_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkProxy *)cls)->setPassword (arg1);
}


// void QNetworkProxy::setPort(quint16 port)


static void _init_f_setPort_1100 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("port");
  decl->add_arg<quint16 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPort_1100 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  quint16 arg1 = args.read<quint16 > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkProxy *)cls)->setPort (arg1);
}


// void QNetworkProxy::setRawHeader(const QByteArray &headerName, const QByteArray &value)


static void _init_f_setRawHeader_4510 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("headerName");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QByteArray & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setRawHeader_4510 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  const QByteArray &arg2 = args.read<const QByteArray & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkProxy *)cls)->setRawHeader (arg1, arg2);
}


// void QNetworkProxy::setType(QNetworkProxy::ProxyType type)


static void _init_f_setType_2889 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QNetworkProxy::ProxyType>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setType_2889 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QNetworkProxy::ProxyType>::target_type & arg1 = args.read<const qt_gsi::Converter<QNetworkProxy::ProxyType>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkProxy *)cls)->setType (qt_gsi::QtToCppAdaptor<QNetworkProxy::ProxyType>(arg1).cref());
}


// void QNetworkProxy::setUser(const QString &userName)


static void _init_f_setUser_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("userName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setUser_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkProxy *)cls)->setUser (arg1);
}


// void QNetworkProxy::swap(QNetworkProxy &other)


static void _init_f_swap_1991 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QNetworkProxy & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1991 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QNetworkProxy &arg1 = args.read<QNetworkProxy & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkProxy *)cls)->swap (arg1);
}


// QNetworkProxy::ProxyType QNetworkProxy::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QNetworkProxy::ProxyType>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QNetworkProxy::ProxyType>::target_type > ((qt_gsi::Converter<QNetworkProxy::ProxyType>::target_type)qt_gsi::CppToQtAdaptor<QNetworkProxy::ProxyType>(((QNetworkProxy *)cls)->type ()));
}


// QString QNetworkProxy::user()


static void _init_f_user_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_user_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QNetworkProxy *)cls)->user ());
}


// static QNetworkProxy QNetworkProxy::applicationProxy()


static void _init_f_applicationProxy_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QNetworkProxy > ();
}

static void _call_f_applicationProxy_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkProxy > ((QNetworkProxy)QNetworkProxy::applicationProxy ());
}


// static void QNetworkProxy::setApplicationProxy(const QNetworkProxy &proxy)


static void _init_f_setApplicationProxy_2686 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("proxy");
  decl->add_arg<const QNetworkProxy & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setApplicationProxy_2686 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkProxy &arg1 = args.read<const QNetworkProxy & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QNetworkProxy::setApplicationProxy (arg1);
}



namespace gsi
{

static gsi::Methods methods_QNetworkProxy () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNetworkProxy::QNetworkProxy()\nThis method creates an object of class QNetworkProxy.", &_init_ctor_QNetworkProxy_0, &_call_ctor_QNetworkProxy_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNetworkProxy::QNetworkProxy(QNetworkProxy::ProxyType type, const QString &hostName, quint16 port, const QString &user, const QString &password)\nThis method creates an object of class QNetworkProxy.", &_init_ctor_QNetworkProxy_9632, &_call_ctor_QNetworkProxy_9632);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNetworkProxy::QNetworkProxy(const QNetworkProxy &other)\nThis method creates an object of class QNetworkProxy.", &_init_ctor_QNetworkProxy_2686, &_call_ctor_QNetworkProxy_2686);
  methods += new qt_gsi::GenericMethod (":capabilities", "@brief Method QFlags<QNetworkProxy::Capability> QNetworkProxy::capabilities()\n", true, &_init_f_capabilities_c0, &_call_f_capabilities_c0);
  methods += new qt_gsi::GenericMethod ("hasRawHeader", "@brief Method bool QNetworkProxy::hasRawHeader(const QByteArray &headerName)\n", true, &_init_f_hasRawHeader_c2309, &_call_f_hasRawHeader_c2309);
  methods += new qt_gsi::GenericMethod ("header", "@brief Method QVariant QNetworkProxy::header(QNetworkRequest::KnownHeaders header)\n", true, &_init_f_header_c3349, &_call_f_header_c3349);
  methods += new qt_gsi::GenericMethod (":hostName", "@brief Method QString QNetworkProxy::hostName()\n", true, &_init_f_hostName_c0, &_call_f_hostName_c0);
  methods += new qt_gsi::GenericMethod ("isCachingProxy?", "@brief Method bool QNetworkProxy::isCachingProxy()\n", true, &_init_f_isCachingProxy_c0, &_call_f_isCachingProxy_c0);
  methods += new qt_gsi::GenericMethod ("isTransparentProxy?", "@brief Method bool QNetworkProxy::isTransparentProxy()\n", true, &_init_f_isTransparentProxy_c0, &_call_f_isTransparentProxy_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QNetworkProxy::operator!=(const QNetworkProxy &other)\n", true, &_init_f_operator_excl__eq__c2686, &_call_f_operator_excl__eq__c2686);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QNetworkProxy &QNetworkProxy::operator=(const QNetworkProxy &other)\n", false, &_init_f_operator_eq__2686, &_call_f_operator_eq__2686);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QNetworkProxy::operator==(const QNetworkProxy &other)\n", true, &_init_f_operator_eq__eq__c2686, &_call_f_operator_eq__eq__c2686);
  methods += new qt_gsi::GenericMethod (":password", "@brief Method QString QNetworkProxy::password()\n", true, &_init_f_password_c0, &_call_f_password_c0);
  methods += new qt_gsi::GenericMethod (":port", "@brief Method quint16 QNetworkProxy::port()\n", true, &_init_f_port_c0, &_call_f_port_c0);
  methods += new qt_gsi::GenericMethod ("rawHeader", "@brief Method QByteArray QNetworkProxy::rawHeader(const QByteArray &headerName)\n", true, &_init_f_rawHeader_c2309, &_call_f_rawHeader_c2309);
  methods += new qt_gsi::GenericMethod ("rawHeaderList", "@brief Method QList<QByteArray> QNetworkProxy::rawHeaderList()\n", true, &_init_f_rawHeaderList_c0, &_call_f_rawHeaderList_c0);
  methods += new qt_gsi::GenericMethod ("setCapabilities|capabilities=", "@brief Method void QNetworkProxy::setCapabilities(QFlags<QNetworkProxy::Capability> capab)\n", false, &_init_f_setCapabilities_3647, &_call_f_setCapabilities_3647);
  methods += new qt_gsi::GenericMethod ("setHeader", "@brief Method void QNetworkProxy::setHeader(QNetworkRequest::KnownHeaders header, const QVariant &value)\n", false, &_init_f_setHeader_5360, &_call_f_setHeader_5360);
  methods += new qt_gsi::GenericMethod ("setHostName|hostName=", "@brief Method void QNetworkProxy::setHostName(const QString &hostName)\n", false, &_init_f_setHostName_2025, &_call_f_setHostName_2025);
  methods += new qt_gsi::GenericMethod ("setPassword|password=", "@brief Method void QNetworkProxy::setPassword(const QString &password)\n", false, &_init_f_setPassword_2025, &_call_f_setPassword_2025);
  methods += new qt_gsi::GenericMethod ("setPort|port=", "@brief Method void QNetworkProxy::setPort(quint16 port)\n", false, &_init_f_setPort_1100, &_call_f_setPort_1100);
  methods += new qt_gsi::GenericMethod ("setRawHeader", "@brief Method void QNetworkProxy::setRawHeader(const QByteArray &headerName, const QByteArray &value)\n", false, &_init_f_setRawHeader_4510, &_call_f_setRawHeader_4510);
  methods += new qt_gsi::GenericMethod ("setType|type=", "@brief Method void QNetworkProxy::setType(QNetworkProxy::ProxyType type)\n", false, &_init_f_setType_2889, &_call_f_setType_2889);
  methods += new qt_gsi::GenericMethod ("setUser|user=", "@brief Method void QNetworkProxy::setUser(const QString &userName)\n", false, &_init_f_setUser_2025, &_call_f_setUser_2025);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QNetworkProxy::swap(QNetworkProxy &other)\n", false, &_init_f_swap_1991, &_call_f_swap_1991);
  methods += new qt_gsi::GenericMethod (":type", "@brief Method QNetworkProxy::ProxyType QNetworkProxy::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  methods += new qt_gsi::GenericMethod (":user", "@brief Method QString QNetworkProxy::user()\n", true, &_init_f_user_c0, &_call_f_user_c0);
  methods += new qt_gsi::GenericStaticMethod (":applicationProxy", "@brief Static method QNetworkProxy QNetworkProxy::applicationProxy()\nThis method is static and can be called without an instance.", &_init_f_applicationProxy_0, &_call_f_applicationProxy_0);
  methods += new qt_gsi::GenericStaticMethod ("setApplicationProxy|applicationProxy=", "@brief Static method void QNetworkProxy::setApplicationProxy(const QNetworkProxy &proxy)\nThis method is static and can be called without an instance.", &_init_f_setApplicationProxy_2686, &_call_f_setApplicationProxy_2686);
  return methods;
}

gsi::Class<QNetworkProxy> decl_QNetworkProxy ("QtMultimedia", "QNetworkProxy",
  methods_QNetworkProxy (),
  "@qt\n@brief Binding of QNetworkProxy");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QNetworkProxy> &qtdecl_QNetworkProxy () { return decl_QNetworkProxy; }

}


//  Implementation of the enum wrapper class for QNetworkProxy::Capability
namespace qt_gsi
{

static gsi::Enum<QNetworkProxy::Capability> decl_QNetworkProxy_Capability_Enum ("QtMultimedia", "QNetworkProxy_Capability",
    gsi::enum_const ("TunnelingCapability", QNetworkProxy::TunnelingCapability, "@brief Enum constant QNetworkProxy::TunnelingCapability") +
    gsi::enum_const ("ListeningCapability", QNetworkProxy::ListeningCapability, "@brief Enum constant QNetworkProxy::ListeningCapability") +
    gsi::enum_const ("UdpTunnelingCapability", QNetworkProxy::UdpTunnelingCapability, "@brief Enum constant QNetworkProxy::UdpTunnelingCapability") +
    gsi::enum_const ("CachingCapability", QNetworkProxy::CachingCapability, "@brief Enum constant QNetworkProxy::CachingCapability") +
    gsi::enum_const ("HostNameLookupCapability", QNetworkProxy::HostNameLookupCapability, "@brief Enum constant QNetworkProxy::HostNameLookupCapability"),
  "@qt\n@brief This class represents the QNetworkProxy::Capability enum");

static gsi::QFlagsClass<QNetworkProxy::Capability > decl_QNetworkProxy_Capability_Enums ("QtMultimedia", "QNetworkProxy_QFlags_Capability",
  "@qt\n@brief This class represents the QFlags<QNetworkProxy::Capability> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QNetworkProxy> inject_QNetworkProxy_Capability_Enum_in_parent (decl_QNetworkProxy_Capability_Enum.defs ());
static gsi::ClassExt<QNetworkProxy> decl_QNetworkProxy_Capability_Enum_as_child (decl_QNetworkProxy_Capability_Enum, "Capability");
static gsi::ClassExt<QNetworkProxy> decl_QNetworkProxy_Capability_Enums_as_child (decl_QNetworkProxy_Capability_Enums, "QFlags_Capability");

}


//  Implementation of the enum wrapper class for QNetworkProxy::ProxyType
namespace qt_gsi
{

static gsi::Enum<QNetworkProxy::ProxyType> decl_QNetworkProxy_ProxyType_Enum ("QtMultimedia", "QNetworkProxy_ProxyType",
    gsi::enum_const ("DefaultProxy", QNetworkProxy::DefaultProxy, "@brief Enum constant QNetworkProxy::DefaultProxy") +
    gsi::enum_const ("Socks5Proxy", QNetworkProxy::Socks5Proxy, "@brief Enum constant QNetworkProxy::Socks5Proxy") +
    gsi::enum_const ("NoProxy", QNetworkProxy::NoProxy, "@brief Enum constant QNetworkProxy::NoProxy") +
    gsi::enum_const ("HttpProxy", QNetworkProxy::HttpProxy, "@brief Enum constant QNetworkProxy::HttpProxy") +
    gsi::enum_const ("HttpCachingProxy", QNetworkProxy::HttpCachingProxy, "@brief Enum constant QNetworkProxy::HttpCachingProxy") +
    gsi::enum_const ("FtpCachingProxy", QNetworkProxy::FtpCachingProxy, "@brief Enum constant QNetworkProxy::FtpCachingProxy"),
  "@qt\n@brief This class represents the QNetworkProxy::ProxyType enum");

static gsi::QFlagsClass<QNetworkProxy::ProxyType > decl_QNetworkProxy_ProxyType_Enums ("QtMultimedia", "QNetworkProxy_QFlags_ProxyType",
  "@qt\n@brief This class represents the QFlags<QNetworkProxy::ProxyType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QNetworkProxy> inject_QNetworkProxy_ProxyType_Enum_in_parent (decl_QNetworkProxy_ProxyType_Enum.defs ());
static gsi::ClassExt<QNetworkProxy> decl_QNetworkProxy_ProxyType_Enum_as_child (decl_QNetworkProxy_ProxyType_Enum, "ProxyType");
static gsi::ClassExt<QNetworkProxy> decl_QNetworkProxy_ProxyType_Enums_as_child (decl_QNetworkProxy_ProxyType_Enums, "QFlags_ProxyType");

}

