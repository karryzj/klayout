
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
*  @file gsiDeclQMediaNetworkAccessControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaNetworkAccessControl>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QNetworkConfiguration>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMediaNetworkAccessControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QMediaNetworkAccessControl::staticMetaObject);
}


// void QMediaNetworkAccessControl::configurationChanged(const QNetworkConfiguration &configuration)


static void _init_f_configurationChanged_3508 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("configuration");
  decl->add_arg<const QNetworkConfiguration & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_configurationChanged_3508 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkConfiguration &arg1 = gsi::arg_reader<const QNetworkConfiguration & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaNetworkAccessControl *)cls)->configurationChanged (arg1);
}


// QNetworkConfiguration QMediaNetworkAccessControl::currentConfiguration()


static void _init_f_currentConfiguration_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNetworkConfiguration > ();
}

static void _call_f_currentConfiguration_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkConfiguration > ((QNetworkConfiguration)((QMediaNetworkAccessControl *)cls)->currentConfiguration ());
}


// void QMediaNetworkAccessControl::setConfigurations(const QList<QNetworkConfiguration> &configuration)


static void _init_f_setConfigurations_4123 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("configuration");
  decl->add_arg<const QList<QNetworkConfiguration> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setConfigurations_4123 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QNetworkConfiguration> &arg1 = gsi::arg_reader<const QList<QNetworkConfiguration> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaNetworkAccessControl *)cls)->setConfigurations (arg1);
}


// static QString QMediaNetworkAccessControl::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QMediaNetworkAccessControl::tr (arg1, arg2, arg3));
}


// static QString QMediaNetworkAccessControl::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QMediaNetworkAccessControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QMediaNetworkAccessControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("configurationChanged", "@brief Method void QMediaNetworkAccessControl::configurationChanged(const QNetworkConfiguration &configuration)\n", false, &_init_f_configurationChanged_3508, &_call_f_configurationChanged_3508);
  methods += new qt_gsi::GenericMethod ("currentConfiguration", "@brief Method QNetworkConfiguration QMediaNetworkAccessControl::currentConfiguration()\n", true, &_init_f_currentConfiguration_c0, &_call_f_currentConfiguration_c0);
  methods += new qt_gsi::GenericMethod ("setConfigurations", "@brief Method void QMediaNetworkAccessControl::setConfigurations(const QList<QNetworkConfiguration> &configuration)\n", false, &_init_f_setConfigurations_4123, &_call_f_setConfigurations_4123);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QMediaNetworkAccessControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QMediaNetworkAccessControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

qt_gsi::QtNativeClass<QMediaNetworkAccessControl> decl_QMediaNetworkAccessControl (qtdecl_QMediaControl (), "QtMultimedia", "QMediaNetworkAccessControl_Native",
  methods_QMediaNetworkAccessControl (),
  "@hide\n@alias QMediaNetworkAccessControl");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMediaNetworkAccessControl> &qtdecl_QMediaNetworkAccessControl () { return decl_QMediaNetworkAccessControl; }

}


class QMediaNetworkAccessControl_Adaptor : public QMediaNetworkAccessControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMediaNetworkAccessControl_Adaptor();

  //  [adaptor ctor] QMediaNetworkAccessControl::QMediaNetworkAccessControl()
  QMediaNetworkAccessControl_Adaptor() : QMediaNetworkAccessControl()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QMediaNetworkAccessControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QMediaNetworkAccessControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QMediaNetworkAccessControl::isSignalConnected(signal);
  }

  //  [expose] int QMediaNetworkAccessControl::receivers(const char *signal)
  int fp_QMediaNetworkAccessControl_receivers_c1731 (const char *signal) const {
    return QMediaNetworkAccessControl::receivers(signal);
  }

  //  [expose] QObject *QMediaNetworkAccessControl::sender()
  QObject * fp_QMediaNetworkAccessControl_sender_c0 () const {
    return QMediaNetworkAccessControl::sender();
  }

  //  [expose] int QMediaNetworkAccessControl::senderSignalIndex()
  int fp_QMediaNetworkAccessControl_senderSignalIndex_c0 () const {
    return QMediaNetworkAccessControl::senderSignalIndex();
  }

  //  [adaptor impl] QNetworkConfiguration QMediaNetworkAccessControl::currentConfiguration()
  QNetworkConfiguration cbs_currentConfiguration_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("currentConfiguration");
  }

  virtual QNetworkConfiguration currentConfiguration() const
  {
    if (cb_currentConfiguration_c0_0.can_issue()) {
      return cb_currentConfiguration_c0_0.issue<QMediaNetworkAccessControl_Adaptor, QNetworkConfiguration>(&QMediaNetworkAccessControl_Adaptor::cbs_currentConfiguration_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("currentConfiguration");
    }
  }

  //  [adaptor impl] bool QMediaNetworkAccessControl::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QMediaNetworkAccessControl::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QMediaNetworkAccessControl_Adaptor, bool, QEvent *>(&QMediaNetworkAccessControl_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QMediaNetworkAccessControl::event(arg1);
    }
  }

  //  [adaptor impl] bool QMediaNetworkAccessControl::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QMediaNetworkAccessControl::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QMediaNetworkAccessControl_Adaptor, bool, QObject *, QEvent *>(&QMediaNetworkAccessControl_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QMediaNetworkAccessControl::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QMediaNetworkAccessControl::setConfigurations(const QList<QNetworkConfiguration> &configuration)
  void cbs_setConfigurations_4123_0(const QList<QNetworkConfiguration> &configuration)
  {
    __SUPPRESS_UNUSED_WARNING (configuration);
    throw qt_gsi::AbstractMethodCalledException("setConfigurations");
  }

  virtual void setConfigurations(const QList<QNetworkConfiguration> &configuration)
  {
    if (cb_setConfigurations_4123_0.can_issue()) {
      cb_setConfigurations_4123_0.issue<QMediaNetworkAccessControl_Adaptor, const QList<QNetworkConfiguration> &>(&QMediaNetworkAccessControl_Adaptor::cbs_setConfigurations_4123_0, configuration);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setConfigurations");
    }
  }

  //  [adaptor impl] void QMediaNetworkAccessControl::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QMediaNetworkAccessControl::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QMediaNetworkAccessControl_Adaptor, QChildEvent *>(&QMediaNetworkAccessControl_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QMediaNetworkAccessControl::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QMediaNetworkAccessControl::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QMediaNetworkAccessControl::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QMediaNetworkAccessControl_Adaptor, QEvent *>(&QMediaNetworkAccessControl_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QMediaNetworkAccessControl::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QMediaNetworkAccessControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QMediaNetworkAccessControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QMediaNetworkAccessControl_Adaptor, const QMetaMethod &>(&QMediaNetworkAccessControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QMediaNetworkAccessControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QMediaNetworkAccessControl::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QMediaNetworkAccessControl::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QMediaNetworkAccessControl_Adaptor, QTimerEvent *>(&QMediaNetworkAccessControl_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QMediaNetworkAccessControl::timerEvent(arg1);
    }
  }

  gsi::Callback cb_currentConfiguration_c0_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_setConfigurations_4123_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QMediaNetworkAccessControl_Adaptor::~QMediaNetworkAccessControl_Adaptor() { }

//  Constructor QMediaNetworkAccessControl::QMediaNetworkAccessControl() (adaptor class)

static void _init_ctor_QMediaNetworkAccessControl_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMediaNetworkAccessControl_Adaptor> ();
}

static void _call_ctor_QMediaNetworkAccessControl_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaNetworkAccessControl_Adaptor *> (new QMediaNetworkAccessControl_Adaptor ());
}


// void QMediaNetworkAccessControl::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaNetworkAccessControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaNetworkAccessControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// QNetworkConfiguration QMediaNetworkAccessControl::currentConfiguration()

static void _init_cbs_currentConfiguration_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNetworkConfiguration > ();
}

static void _call_cbs_currentConfiguration_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkConfiguration > ((QNetworkConfiguration)((QMediaNetworkAccessControl_Adaptor *)cls)->cbs_currentConfiguration_c0_0 ());
}

static void _set_callback_cbs_currentConfiguration_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaNetworkAccessControl_Adaptor *)cls)->cb_currentConfiguration_c0_0 = cb;
}


// void QMediaNetworkAccessControl::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaNetworkAccessControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaNetworkAccessControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QMediaNetworkAccessControl::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaNetworkAccessControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaNetworkAccessControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QMediaNetworkAccessControl::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QMediaNetworkAccessControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaNetworkAccessControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QMediaNetworkAccessControl::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QMediaNetworkAccessControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaNetworkAccessControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QMediaNetworkAccessControl::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QMediaNetworkAccessControl_Adaptor *)cls)->fp_QMediaNetworkAccessControl_isSignalConnected_c2394 (arg1));
}


// exposed int QMediaNetworkAccessControl::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QMediaNetworkAccessControl_Adaptor *)cls)->fp_QMediaNetworkAccessControl_receivers_c1731 (arg1));
}


// exposed QObject *QMediaNetworkAccessControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QMediaNetworkAccessControl_Adaptor *)cls)->fp_QMediaNetworkAccessControl_sender_c0 ());
}


// exposed int QMediaNetworkAccessControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMediaNetworkAccessControl_Adaptor *)cls)->fp_QMediaNetworkAccessControl_senderSignalIndex_c0 ());
}


// void QMediaNetworkAccessControl::setConfigurations(const QList<QNetworkConfiguration> &configuration)

static void _init_cbs_setConfigurations_4123_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("configuration");
  decl->add_arg<const QList<QNetworkConfiguration> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setConfigurations_4123_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QNetworkConfiguration> &arg1 = args.read<const QList<QNetworkConfiguration> & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaNetworkAccessControl_Adaptor *)cls)->cbs_setConfigurations_4123_0 (arg1);
}

static void _set_callback_cbs_setConfigurations_4123_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaNetworkAccessControl_Adaptor *)cls)->cb_setConfigurations_4123_0 = cb;
}


// void QMediaNetworkAccessControl::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaNetworkAccessControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaNetworkAccessControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QMediaNetworkAccessControl> &qtdecl_QMediaNetworkAccessControl ();

static gsi::Methods methods_QMediaNetworkAccessControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaNetworkAccessControl::QMediaNetworkAccessControl()\nThis method creates an object of class QMediaNetworkAccessControl.", &_init_ctor_QMediaNetworkAccessControl_Adaptor_0, &_call_ctor_QMediaNetworkAccessControl_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QMediaNetworkAccessControl::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("currentConfiguration", "@brief Virtual method QNetworkConfiguration QMediaNetworkAccessControl::currentConfiguration()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_currentConfiguration_c0_0, &_call_cbs_currentConfiguration_c0_0);
  methods += new qt_gsi::GenericMethod ("currentConfiguration", "@hide", true, &_init_cbs_currentConfiguration_c0_0, &_call_cbs_currentConfiguration_c0_0, &_set_callback_cbs_currentConfiguration_c0_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QMediaNetworkAccessControl::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QMediaNetworkAccessControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QMediaNetworkAccessControl::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QMediaNetworkAccessControl::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QMediaNetworkAccessControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QMediaNetworkAccessControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QMediaNetworkAccessControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QMediaNetworkAccessControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setConfigurations", "@brief Virtual method void QMediaNetworkAccessControl::setConfigurations(const QList<QNetworkConfiguration> &configuration)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setConfigurations_4123_0, &_call_cbs_setConfigurations_4123_0);
  methods += new qt_gsi::GenericMethod ("setConfigurations", "@hide", false, &_init_cbs_setConfigurations_4123_0, &_call_cbs_setConfigurations_4123_0, &_set_callback_cbs_setConfigurations_4123_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QMediaNetworkAccessControl::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QMediaNetworkAccessControl_Adaptor> decl_QMediaNetworkAccessControl_Adaptor (qtdecl_QMediaNetworkAccessControl (), "QtMultimedia", "QMediaNetworkAccessControl",
  methods_QMediaNetworkAccessControl_Adaptor (),
  "@qt\n@brief Binding of QMediaNetworkAccessControl");

}

