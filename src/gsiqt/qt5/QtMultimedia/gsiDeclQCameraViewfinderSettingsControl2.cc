
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
*  @file gsiDeclQCameraViewfinderSettingsControl2.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCameraViewfinderSettingsControl2>
#include <QCameraViewfinderSettings>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCameraViewfinderSettingsControl2

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QCameraViewfinderSettingsControl2::staticMetaObject);
}


// void QCameraViewfinderSettingsControl2::setViewfinderSettings(const QCameraViewfinderSettings &settings)


static void _init_f_setViewfinderSettings_3871 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("settings");
  decl->add_arg<const QCameraViewfinderSettings & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setViewfinderSettings_3871 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraViewfinderSettings &arg1 = gsi::arg_reader<const QCameraViewfinderSettings & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraViewfinderSettingsControl2 *)cls)->setViewfinderSettings (arg1);
}


// QList<QCameraViewfinderSettings> QCameraViewfinderSettingsControl2::supportedViewfinderSettings()


static void _init_f_supportedViewfinderSettings_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QCameraViewfinderSettings> > ();
}

static void _call_f_supportedViewfinderSettings_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QCameraViewfinderSettings> > ((QList<QCameraViewfinderSettings>)((QCameraViewfinderSettingsControl2 *)cls)->supportedViewfinderSettings ());
}


// QCameraViewfinderSettings QCameraViewfinderSettingsControl2::viewfinderSettings()


static void _init_f_viewfinderSettings_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QCameraViewfinderSettings > ();
}

static void _call_f_viewfinderSettings_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCameraViewfinderSettings > ((QCameraViewfinderSettings)((QCameraViewfinderSettingsControl2 *)cls)->viewfinderSettings ());
}


// static QString QCameraViewfinderSettingsControl2::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QCameraViewfinderSettingsControl2::tr (arg1, arg2, arg3));
}


// static QString QCameraViewfinderSettingsControl2::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QCameraViewfinderSettingsControl2::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QCameraViewfinderSettingsControl2 () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("setViewfinderSettings|viewfinderSettings=", "@brief Method void QCameraViewfinderSettingsControl2::setViewfinderSettings(const QCameraViewfinderSettings &settings)\n", false, &_init_f_setViewfinderSettings_3871, &_call_f_setViewfinderSettings_3871);
  methods += new qt_gsi::GenericMethod ("supportedViewfinderSettings", "@brief Method QList<QCameraViewfinderSettings> QCameraViewfinderSettingsControl2::supportedViewfinderSettings()\n", true, &_init_f_supportedViewfinderSettings_c0, &_call_f_supportedViewfinderSettings_c0);
  methods += new qt_gsi::GenericMethod (":viewfinderSettings", "@brief Method QCameraViewfinderSettings QCameraViewfinderSettingsControl2::viewfinderSettings()\n", true, &_init_f_viewfinderSettings_c0, &_call_f_viewfinderSettings_c0);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QCameraViewfinderSettingsControl2::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QCameraViewfinderSettingsControl2::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

qt_gsi::QtNativeClass<QCameraViewfinderSettingsControl2> decl_QCameraViewfinderSettingsControl2 (qtdecl_QMediaControl (), "QtMultimedia", "QCameraViewfinderSettingsControl2_Native",
  methods_QCameraViewfinderSettingsControl2 (),
  "@hide\n@alias QCameraViewfinderSettingsControl2");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QCameraViewfinderSettingsControl2> &qtdecl_QCameraViewfinderSettingsControl2 () { return decl_QCameraViewfinderSettingsControl2; }

}


class QCameraViewfinderSettingsControl2_Adaptor : public QCameraViewfinderSettingsControl2, public qt_gsi::QtObjectBase
{
public:

  virtual ~QCameraViewfinderSettingsControl2_Adaptor();

  //  [adaptor ctor] QCameraViewfinderSettingsControl2::QCameraViewfinderSettingsControl2()
  QCameraViewfinderSettingsControl2_Adaptor() : QCameraViewfinderSettingsControl2()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QCameraViewfinderSettingsControl2::isSignalConnected(const QMetaMethod &signal)
  bool fp_QCameraViewfinderSettingsControl2_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QCameraViewfinderSettingsControl2::isSignalConnected(signal);
  }

  //  [expose] int QCameraViewfinderSettingsControl2::receivers(const char *signal)
  int fp_QCameraViewfinderSettingsControl2_receivers_c1731 (const char *signal) const {
    return QCameraViewfinderSettingsControl2::receivers(signal);
  }

  //  [expose] QObject *QCameraViewfinderSettingsControl2::sender()
  QObject * fp_QCameraViewfinderSettingsControl2_sender_c0 () const {
    return QCameraViewfinderSettingsControl2::sender();
  }

  //  [expose] int QCameraViewfinderSettingsControl2::senderSignalIndex()
  int fp_QCameraViewfinderSettingsControl2_senderSignalIndex_c0 () const {
    return QCameraViewfinderSettingsControl2::senderSignalIndex();
  }

  //  [adaptor impl] bool QCameraViewfinderSettingsControl2::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QCameraViewfinderSettingsControl2::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QCameraViewfinderSettingsControl2_Adaptor, bool, QEvent *>(&QCameraViewfinderSettingsControl2_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QCameraViewfinderSettingsControl2::event(arg1);
    }
  }

  //  [adaptor impl] bool QCameraViewfinderSettingsControl2::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QCameraViewfinderSettingsControl2::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QCameraViewfinderSettingsControl2_Adaptor, bool, QObject *, QEvent *>(&QCameraViewfinderSettingsControl2_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QCameraViewfinderSettingsControl2::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QCameraViewfinderSettingsControl2::setViewfinderSettings(const QCameraViewfinderSettings &settings)
  void cbs_setViewfinderSettings_3871_0(const QCameraViewfinderSettings &settings)
  {
    __SUPPRESS_UNUSED_WARNING (settings);
    throw qt_gsi::AbstractMethodCalledException("setViewfinderSettings");
  }

  virtual void setViewfinderSettings(const QCameraViewfinderSettings &settings)
  {
    if (cb_setViewfinderSettings_3871_0.can_issue()) {
      cb_setViewfinderSettings_3871_0.issue<QCameraViewfinderSettingsControl2_Adaptor, const QCameraViewfinderSettings &>(&QCameraViewfinderSettingsControl2_Adaptor::cbs_setViewfinderSettings_3871_0, settings);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setViewfinderSettings");
    }
  }

  //  [adaptor impl] QList<QCameraViewfinderSettings> QCameraViewfinderSettingsControl2::supportedViewfinderSettings()
  QList<QCameraViewfinderSettings> cbs_supportedViewfinderSettings_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("supportedViewfinderSettings");
  }

  virtual QList<QCameraViewfinderSettings> supportedViewfinderSettings() const
  {
    if (cb_supportedViewfinderSettings_c0_0.can_issue()) {
      return cb_supportedViewfinderSettings_c0_0.issue<QCameraViewfinderSettingsControl2_Adaptor, QList<QCameraViewfinderSettings> >(&QCameraViewfinderSettingsControl2_Adaptor::cbs_supportedViewfinderSettings_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("supportedViewfinderSettings");
    }
  }

  //  [adaptor impl] QCameraViewfinderSettings QCameraViewfinderSettingsControl2::viewfinderSettings()
  QCameraViewfinderSettings cbs_viewfinderSettings_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("viewfinderSettings");
  }

  virtual QCameraViewfinderSettings viewfinderSettings() const
  {
    if (cb_viewfinderSettings_c0_0.can_issue()) {
      return cb_viewfinderSettings_c0_0.issue<QCameraViewfinderSettingsControl2_Adaptor, QCameraViewfinderSettings>(&QCameraViewfinderSettingsControl2_Adaptor::cbs_viewfinderSettings_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("viewfinderSettings");
    }
  }

  //  [adaptor impl] void QCameraViewfinderSettingsControl2::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QCameraViewfinderSettingsControl2::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QCameraViewfinderSettingsControl2_Adaptor, QChildEvent *>(&QCameraViewfinderSettingsControl2_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QCameraViewfinderSettingsControl2::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QCameraViewfinderSettingsControl2::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QCameraViewfinderSettingsControl2::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QCameraViewfinderSettingsControl2_Adaptor, QEvent *>(&QCameraViewfinderSettingsControl2_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QCameraViewfinderSettingsControl2::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QCameraViewfinderSettingsControl2::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QCameraViewfinderSettingsControl2::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QCameraViewfinderSettingsControl2_Adaptor, const QMetaMethod &>(&QCameraViewfinderSettingsControl2_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QCameraViewfinderSettingsControl2::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QCameraViewfinderSettingsControl2::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QCameraViewfinderSettingsControl2::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QCameraViewfinderSettingsControl2_Adaptor, QTimerEvent *>(&QCameraViewfinderSettingsControl2_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QCameraViewfinderSettingsControl2::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_setViewfinderSettings_3871_0;
  gsi::Callback cb_supportedViewfinderSettings_c0_0;
  gsi::Callback cb_viewfinderSettings_c0_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QCameraViewfinderSettingsControl2_Adaptor::~QCameraViewfinderSettingsControl2_Adaptor() { }

//  Constructor QCameraViewfinderSettingsControl2::QCameraViewfinderSettingsControl2() (adaptor class)

static void _init_ctor_QCameraViewfinderSettingsControl2_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QCameraViewfinderSettingsControl2_Adaptor> ();
}

static void _call_ctor_QCameraViewfinderSettingsControl2_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCameraViewfinderSettingsControl2_Adaptor *> (new QCameraViewfinderSettingsControl2_Adaptor ());
}


// void QCameraViewfinderSettingsControl2::childEvent(QChildEvent *)

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
  ((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QCameraViewfinderSettingsControl2::customEvent(QEvent *)

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
  ((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QCameraViewfinderSettingsControl2::disconnectNotify(const QMetaMethod &signal)

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
  ((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QCameraViewfinderSettingsControl2::event(QEvent *)

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
  ret.write<bool > ((bool)((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QCameraViewfinderSettingsControl2::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QCameraViewfinderSettingsControl2::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QCameraViewfinderSettingsControl2_Adaptor *)cls)->fp_QCameraViewfinderSettingsControl2_isSignalConnected_c2394 (arg1));
}


// exposed int QCameraViewfinderSettingsControl2::receivers(const char *signal)

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
  ret.write<int > ((int)((QCameraViewfinderSettingsControl2_Adaptor *)cls)->fp_QCameraViewfinderSettingsControl2_receivers_c1731 (arg1));
}


// exposed QObject *QCameraViewfinderSettingsControl2::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QCameraViewfinderSettingsControl2_Adaptor *)cls)->fp_QCameraViewfinderSettingsControl2_sender_c0 ());
}


// exposed int QCameraViewfinderSettingsControl2::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QCameraViewfinderSettingsControl2_Adaptor *)cls)->fp_QCameraViewfinderSettingsControl2_senderSignalIndex_c0 ());
}


// void QCameraViewfinderSettingsControl2::setViewfinderSettings(const QCameraViewfinderSettings &settings)

static void _init_cbs_setViewfinderSettings_3871_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("settings");
  decl->add_arg<const QCameraViewfinderSettings & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setViewfinderSettings_3871_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraViewfinderSettings &arg1 = args.read<const QCameraViewfinderSettings & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cbs_setViewfinderSettings_3871_0 (arg1);
}

static void _set_callback_cbs_setViewfinderSettings_3871_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cb_setViewfinderSettings_3871_0 = cb;
}


// QList<QCameraViewfinderSettings> QCameraViewfinderSettingsControl2::supportedViewfinderSettings()

static void _init_cbs_supportedViewfinderSettings_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QCameraViewfinderSettings> > ();
}

static void _call_cbs_supportedViewfinderSettings_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QCameraViewfinderSettings> > ((QList<QCameraViewfinderSettings>)((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cbs_supportedViewfinderSettings_c0_0 ());
}

static void _set_callback_cbs_supportedViewfinderSettings_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cb_supportedViewfinderSettings_c0_0 = cb;
}


// void QCameraViewfinderSettingsControl2::timerEvent(QTimerEvent *)

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
  ((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// QCameraViewfinderSettings QCameraViewfinderSettingsControl2::viewfinderSettings()

static void _init_cbs_viewfinderSettings_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QCameraViewfinderSettings > ();
}

static void _call_cbs_viewfinderSettings_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCameraViewfinderSettings > ((QCameraViewfinderSettings)((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cbs_viewfinderSettings_c0_0 ());
}

static void _set_callback_cbs_viewfinderSettings_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraViewfinderSettingsControl2_Adaptor *)cls)->cb_viewfinderSettings_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QCameraViewfinderSettingsControl2> &qtdecl_QCameraViewfinderSettingsControl2 ();

static gsi::Methods methods_QCameraViewfinderSettingsControl2_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCameraViewfinderSettingsControl2::QCameraViewfinderSettingsControl2()\nThis method creates an object of class QCameraViewfinderSettingsControl2.", &_init_ctor_QCameraViewfinderSettingsControl2_Adaptor_0, &_call_ctor_QCameraViewfinderSettingsControl2_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QCameraViewfinderSettingsControl2::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QCameraViewfinderSettingsControl2::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QCameraViewfinderSettingsControl2::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QCameraViewfinderSettingsControl2::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QCameraViewfinderSettingsControl2::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QCameraViewfinderSettingsControl2::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QCameraViewfinderSettingsControl2::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QCameraViewfinderSettingsControl2::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QCameraViewfinderSettingsControl2::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setViewfinderSettings", "@brief Virtual method void QCameraViewfinderSettingsControl2::setViewfinderSettings(const QCameraViewfinderSettings &settings)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setViewfinderSettings_3871_0, &_call_cbs_setViewfinderSettings_3871_0);
  methods += new qt_gsi::GenericMethod ("setViewfinderSettings", "@hide", false, &_init_cbs_setViewfinderSettings_3871_0, &_call_cbs_setViewfinderSettings_3871_0, &_set_callback_cbs_setViewfinderSettings_3871_0);
  methods += new qt_gsi::GenericMethod ("supportedViewfinderSettings", "@brief Virtual method QList<QCameraViewfinderSettings> QCameraViewfinderSettingsControl2::supportedViewfinderSettings()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_supportedViewfinderSettings_c0_0, &_call_cbs_supportedViewfinderSettings_c0_0);
  methods += new qt_gsi::GenericMethod ("supportedViewfinderSettings", "@hide", true, &_init_cbs_supportedViewfinderSettings_c0_0, &_call_cbs_supportedViewfinderSettings_c0_0, &_set_callback_cbs_supportedViewfinderSettings_c0_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QCameraViewfinderSettingsControl2::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("viewfinderSettings", "@brief Virtual method QCameraViewfinderSettings QCameraViewfinderSettingsControl2::viewfinderSettings()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_viewfinderSettings_c0_0, &_call_cbs_viewfinderSettings_c0_0);
  methods += new qt_gsi::GenericMethod ("viewfinderSettings", "@hide", true, &_init_cbs_viewfinderSettings_c0_0, &_call_cbs_viewfinderSettings_c0_0, &_set_callback_cbs_viewfinderSettings_c0_0);
  return methods;
}

gsi::Class<QCameraViewfinderSettingsControl2_Adaptor> decl_QCameraViewfinderSettingsControl2_Adaptor (qtdecl_QCameraViewfinderSettingsControl2 (), "QtMultimedia", "QCameraViewfinderSettingsControl2",
  methods_QCameraViewfinderSettingsControl2_Adaptor (),
  "@qt\n@brief Binding of QCameraViewfinderSettingsControl2");

}

