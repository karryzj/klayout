
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
*  @file gsiDeclQVideoRendererControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QVideoRendererControl>
#include <QAbstractVideoSurface>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QVideoRendererControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QVideoRendererControl::staticMetaObject);
}


// void QVideoRendererControl::setSurface(QAbstractVideoSurface *surface)


static void _init_f_setSurface_2739 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("surface");
  decl->add_arg<QAbstractVideoSurface * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSurface_2739 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractVideoSurface *arg1 = args.read<QAbstractVideoSurface * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoRendererControl *)cls)->setSurface (arg1);
}


// QAbstractVideoSurface *QVideoRendererControl::surface()


static void _init_f_surface_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAbstractVideoSurface * > ();
}

static void _call_f_surface_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractVideoSurface * > ((QAbstractVideoSurface *)((QVideoRendererControl *)cls)->surface ());
}


// static QString QVideoRendererControl::tr(const char *s, const char *c, int n)


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
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QVideoRendererControl::tr (arg1, arg2, arg3));
}


// static QString QVideoRendererControl::trUtf8(const char *s, const char *c, int n)


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
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QVideoRendererControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QVideoRendererControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("setSurface|surface=", "@brief Method void QVideoRendererControl::setSurface(QAbstractVideoSurface *surface)\n", false, &_init_f_setSurface_2739, &_call_f_setSurface_2739);
  methods += new qt_gsi::GenericMethod (":surface", "@brief Method QAbstractVideoSurface *QVideoRendererControl::surface()\n", true, &_init_f_surface_c0, &_call_f_surface_c0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QVideoRendererControl::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QVideoRendererControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QVideoRendererControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

qt_gsi::QtNativeClass<QVideoRendererControl> decl_QVideoRendererControl (qtdecl_QMediaControl (), "QVideoRendererControl_Native",
  methods_QVideoRendererControl (),
  "@hide\n@alias QVideoRendererControl");

GSIQT_PUBLIC gsi::Class<QVideoRendererControl> &qtdecl_QVideoRendererControl () { return decl_QVideoRendererControl; }

}


class QVideoRendererControl_Adaptor : public QVideoRendererControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QVideoRendererControl_Adaptor();

  //  [expose] bool QVideoRendererControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QVideoRendererControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QVideoRendererControl::isSignalConnected(signal);
  }

  //  [expose] int QVideoRendererControl::receivers(const char *signal)
  int fp_QVideoRendererControl_receivers_c1731 (const char *signal) const {
    return QVideoRendererControl::receivers(signal);
  }

  //  [expose] QObject *QVideoRendererControl::sender()
  QObject * fp_QVideoRendererControl_sender_c0 () const {
    return QVideoRendererControl::sender();
  }

  //  [expose] int QVideoRendererControl::senderSignalIndex()
  int fp_QVideoRendererControl_senderSignalIndex_c0 () const {
    return QVideoRendererControl::senderSignalIndex();
  }

  //  [emitter impl] void QVideoRendererControl::destroyed(QObject *)
  void emitter_QVideoRendererControl_destroyed_1302(QObject *arg1)
  {
    emit QVideoRendererControl::destroyed(arg1);
  }

  //  [adaptor impl] bool QVideoRendererControl::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QVideoRendererControl::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QVideoRendererControl_Adaptor, bool, QEvent *>(&QVideoRendererControl_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QVideoRendererControl::event(arg1);
    }
  }

  //  [adaptor impl] bool QVideoRendererControl::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QVideoRendererControl::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QVideoRendererControl_Adaptor, bool, QObject *, QEvent *>(&QVideoRendererControl_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QVideoRendererControl::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QVideoRendererControl::setSurface(QAbstractVideoSurface *surface)
  void cbs_setSurface_2739_0(QAbstractVideoSurface *surface)
  {
    __SUPPRESS_UNUSED_WARNING (surface);
    throw qt_gsi::AbstractMethodCalledException("setSurface");
  }

  virtual void setSurface(QAbstractVideoSurface *surface)
  {
    if (cb_setSurface_2739_0.can_issue()) {
      cb_setSurface_2739_0.issue<QVideoRendererControl_Adaptor, QAbstractVideoSurface *>(&QVideoRendererControl_Adaptor::cbs_setSurface_2739_0, surface);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setSurface");
    }
  }

  //  [adaptor impl] QAbstractVideoSurface *QVideoRendererControl::surface()
  QAbstractVideoSurface * cbs_surface_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("surface");
  }

  virtual QAbstractVideoSurface * surface() const
  {
    if (cb_surface_c0_0.can_issue()) {
      return cb_surface_c0_0.issue<QVideoRendererControl_Adaptor, QAbstractVideoSurface *>(&QVideoRendererControl_Adaptor::cbs_surface_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("surface");
    }
  }

  //  [adaptor impl] void QVideoRendererControl::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QVideoRendererControl::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QVideoRendererControl_Adaptor, QChildEvent *>(&QVideoRendererControl_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QVideoRendererControl::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QVideoRendererControl::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QVideoRendererControl::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QVideoRendererControl_Adaptor, QEvent *>(&QVideoRendererControl_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QVideoRendererControl::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QVideoRendererControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QVideoRendererControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QVideoRendererControl_Adaptor, const QMetaMethod &>(&QVideoRendererControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QVideoRendererControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QVideoRendererControl::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QVideoRendererControl::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QVideoRendererControl_Adaptor, QTimerEvent *>(&QVideoRendererControl_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QVideoRendererControl::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_setSurface_2739_0;
  gsi::Callback cb_surface_c0_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QVideoRendererControl_Adaptor::~QVideoRendererControl_Adaptor() { }

// void QVideoRendererControl::childEvent(QChildEvent *)

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
  ((QVideoRendererControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoRendererControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QVideoRendererControl::customEvent(QEvent *)

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
  ((QVideoRendererControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoRendererControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QVideoRendererControl::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ((QVideoRendererControl_Adaptor *)cls)->emitter_QVideoRendererControl_destroyed_1302 (arg1);
}


// void QVideoRendererControl::disconnectNotify(const QMetaMethod &signal)

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
  ((QVideoRendererControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoRendererControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QVideoRendererControl::event(QEvent *)

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
  ret.write<bool > ((bool)((QVideoRendererControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoRendererControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QVideoRendererControl::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QVideoRendererControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoRendererControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QVideoRendererControl::isSignalConnected(const QMetaMethod &signal)

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
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  ret.write<bool > ((bool)((QVideoRendererControl_Adaptor *)cls)->fp_QVideoRendererControl_isSignalConnected_c2394 (arg1));
}


// exposed int QVideoRendererControl::receivers(const char *signal)

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
  const char *arg1 = args.read<const char * > (heap);
  ret.write<int > ((int)((QVideoRendererControl_Adaptor *)cls)->fp_QVideoRendererControl_receivers_c1731 (arg1));
}


// exposed QObject *QVideoRendererControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QVideoRendererControl_Adaptor *)cls)->fp_QVideoRendererControl_sender_c0 ());
}


// exposed int QVideoRendererControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoRendererControl_Adaptor *)cls)->fp_QVideoRendererControl_senderSignalIndex_c0 ());
}


// void QVideoRendererControl::setSurface(QAbstractVideoSurface *surface)

static void _init_cbs_setSurface_2739_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("surface");
  decl->add_arg<QAbstractVideoSurface * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setSurface_2739_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractVideoSurface *arg1 = args.read<QAbstractVideoSurface * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoRendererControl_Adaptor *)cls)->cbs_setSurface_2739_0 (arg1);
}

static void _set_callback_cbs_setSurface_2739_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoRendererControl_Adaptor *)cls)->cb_setSurface_2739_0 = cb;
}


// QAbstractVideoSurface *QVideoRendererControl::surface()

static void _init_cbs_surface_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAbstractVideoSurface * > ();
}

static void _call_cbs_surface_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractVideoSurface * > ((QAbstractVideoSurface *)((QVideoRendererControl_Adaptor *)cls)->cbs_surface_c0_0 ());
}

static void _set_callback_cbs_surface_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoRendererControl_Adaptor *)cls)->cb_surface_c0_0 = cb;
}


// void QVideoRendererControl::timerEvent(QTimerEvent *)

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
  ((QVideoRendererControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoRendererControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QVideoRendererControl> &qtdecl_QVideoRendererControl ();

static gsi::Methods methods_QVideoRendererControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QVideoRendererControl::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QVideoRendererControl::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QVideoRendererControl::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QVideoRendererControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QVideoRendererControl::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QVideoRendererControl::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QVideoRendererControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QVideoRendererControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QVideoRendererControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QVideoRendererControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setSurface", "@hide", false, &_init_cbs_setSurface_2739_0, &_call_cbs_setSurface_2739_0);
  methods += new qt_gsi::GenericMethod ("setSurface", "@brief Virtual method void QVideoRendererControl::setSurface(QAbstractVideoSurface *surface)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setSurface_2739_0, &_call_cbs_setSurface_2739_0, &_set_callback_cbs_setSurface_2739_0);
  methods += new qt_gsi::GenericMethod ("surface", "@hide", true, &_init_cbs_surface_c0_0, &_call_cbs_surface_c0_0);
  methods += new qt_gsi::GenericMethod ("surface", "@brief Virtual method QAbstractVideoSurface *QVideoRendererControl::surface()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_surface_c0_0, &_call_cbs_surface_c0_0, &_set_callback_cbs_surface_c0_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QVideoRendererControl::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QVideoRendererControl_Adaptor> decl_QVideoRendererControl_Adaptor (qtdecl_QVideoRendererControl (), "QVideoRendererControl",
  methods_QVideoRendererControl_Adaptor (),
  "@qt\n@brief Binding of QVideoRendererControl");

}

