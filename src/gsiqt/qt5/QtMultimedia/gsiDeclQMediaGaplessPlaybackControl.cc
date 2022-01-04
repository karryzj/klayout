
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
*  @file gsiDeclQMediaGaplessPlaybackControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaGaplessPlaybackControl>
#include <QChildEvent>
#include <QEvent>
#include <QMediaContent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMediaGaplessPlaybackControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QMediaGaplessPlaybackControl::staticMetaObject);
}


// void QMediaGaplessPlaybackControl::advancedToNextMedia()


static void _init_f_advancedToNextMedia_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_advancedToNextMedia_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaGaplessPlaybackControl *)cls)->advancedToNextMedia ();
}


// double QMediaGaplessPlaybackControl::crossfadeTime()


static void _init_f_crossfadeTime_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_crossfadeTime_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QMediaGaplessPlaybackControl *)cls)->crossfadeTime ());
}


// void QMediaGaplessPlaybackControl::crossfadeTimeChanged(double crossfadeTime)


static void _init_f_crossfadeTimeChanged_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("crossfadeTime");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_crossfadeTimeChanged_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaGaplessPlaybackControl *)cls)->crossfadeTimeChanged (arg1);
}


// bool QMediaGaplessPlaybackControl::isCrossfadeSupported()


static void _init_f_isCrossfadeSupported_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isCrossfadeSupported_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMediaGaplessPlaybackControl *)cls)->isCrossfadeSupported ());
}


// QMediaContent QMediaGaplessPlaybackControl::nextMedia()


static void _init_f_nextMedia_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMediaContent > ();
}

static void _call_f_nextMedia_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaContent > ((QMediaContent)((QMediaGaplessPlaybackControl *)cls)->nextMedia ());
}


// void QMediaGaplessPlaybackControl::nextMediaChanged(const QMediaContent &media)


static void _init_f_nextMediaChanged_2605 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("media");
  decl->add_arg<const QMediaContent & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_nextMediaChanged_2605 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaContent &arg1 = gsi::arg_reader<const QMediaContent & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaGaplessPlaybackControl *)cls)->nextMediaChanged (arg1);
}


// void QMediaGaplessPlaybackControl::setCrossfadeTime(double crossfadeTime)


static void _init_f_setCrossfadeTime_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("crossfadeTime");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCrossfadeTime_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaGaplessPlaybackControl *)cls)->setCrossfadeTime (arg1);
}


// void QMediaGaplessPlaybackControl::setNextMedia(const QMediaContent &media)


static void _init_f_setNextMedia_2605 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("media");
  decl->add_arg<const QMediaContent & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNextMedia_2605 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaContent &arg1 = gsi::arg_reader<const QMediaContent & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaGaplessPlaybackControl *)cls)->setNextMedia (arg1);
}


// static QString QMediaGaplessPlaybackControl::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QMediaGaplessPlaybackControl::tr (arg1, arg2, arg3));
}


// static QString QMediaGaplessPlaybackControl::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QMediaGaplessPlaybackControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QMediaGaplessPlaybackControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("advancedToNextMedia", "@brief Method void QMediaGaplessPlaybackControl::advancedToNextMedia()\n", false, &_init_f_advancedToNextMedia_0, &_call_f_advancedToNextMedia_0);
  methods += new qt_gsi::GenericMethod (":crossfadeTime", "@brief Method double QMediaGaplessPlaybackControl::crossfadeTime()\n", true, &_init_f_crossfadeTime_c0, &_call_f_crossfadeTime_c0);
  methods += new qt_gsi::GenericMethod ("crossfadeTimeChanged", "@brief Method void QMediaGaplessPlaybackControl::crossfadeTimeChanged(double crossfadeTime)\n", false, &_init_f_crossfadeTimeChanged_1071, &_call_f_crossfadeTimeChanged_1071);
  methods += new qt_gsi::GenericMethod ("isCrossfadeSupported?", "@brief Method bool QMediaGaplessPlaybackControl::isCrossfadeSupported()\n", true, &_init_f_isCrossfadeSupported_c0, &_call_f_isCrossfadeSupported_c0);
  methods += new qt_gsi::GenericMethod (":nextMedia", "@brief Method QMediaContent QMediaGaplessPlaybackControl::nextMedia()\n", true, &_init_f_nextMedia_c0, &_call_f_nextMedia_c0);
  methods += new qt_gsi::GenericMethod ("nextMediaChanged", "@brief Method void QMediaGaplessPlaybackControl::nextMediaChanged(const QMediaContent &media)\n", false, &_init_f_nextMediaChanged_2605, &_call_f_nextMediaChanged_2605);
  methods += new qt_gsi::GenericMethod ("setCrossfadeTime|crossfadeTime=", "@brief Method void QMediaGaplessPlaybackControl::setCrossfadeTime(double crossfadeTime)\n", false, &_init_f_setCrossfadeTime_1071, &_call_f_setCrossfadeTime_1071);
  methods += new qt_gsi::GenericMethod ("setNextMedia|nextMedia=", "@brief Method void QMediaGaplessPlaybackControl::setNextMedia(const QMediaContent &media)\n", false, &_init_f_setNextMedia_2605, &_call_f_setNextMedia_2605);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QMediaGaplessPlaybackControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QMediaGaplessPlaybackControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

qt_gsi::QtNativeClass<QMediaGaplessPlaybackControl> decl_QMediaGaplessPlaybackControl (qtdecl_QMediaControl (), "QtMultimedia", "QMediaGaplessPlaybackControl_Native",
  methods_QMediaGaplessPlaybackControl (),
  "@hide\n@alias QMediaGaplessPlaybackControl");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMediaGaplessPlaybackControl> &qtdecl_QMediaGaplessPlaybackControl () { return decl_QMediaGaplessPlaybackControl; }

}


class QMediaGaplessPlaybackControl_Adaptor : public QMediaGaplessPlaybackControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMediaGaplessPlaybackControl_Adaptor();

  //  [adaptor ctor] QMediaGaplessPlaybackControl::QMediaGaplessPlaybackControl()
  QMediaGaplessPlaybackControl_Adaptor() : QMediaGaplessPlaybackControl()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QMediaGaplessPlaybackControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QMediaGaplessPlaybackControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QMediaGaplessPlaybackControl::isSignalConnected(signal);
  }

  //  [expose] int QMediaGaplessPlaybackControl::receivers(const char *signal)
  int fp_QMediaGaplessPlaybackControl_receivers_c1731 (const char *signal) const {
    return QMediaGaplessPlaybackControl::receivers(signal);
  }

  //  [expose] QObject *QMediaGaplessPlaybackControl::sender()
  QObject * fp_QMediaGaplessPlaybackControl_sender_c0 () const {
    return QMediaGaplessPlaybackControl::sender();
  }

  //  [expose] int QMediaGaplessPlaybackControl::senderSignalIndex()
  int fp_QMediaGaplessPlaybackControl_senderSignalIndex_c0 () const {
    return QMediaGaplessPlaybackControl::senderSignalIndex();
  }

  //  [adaptor impl] double QMediaGaplessPlaybackControl::crossfadeTime()
  double cbs_crossfadeTime_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("crossfadeTime");
  }

  virtual double crossfadeTime() const
  {
    if (cb_crossfadeTime_c0_0.can_issue()) {
      return cb_crossfadeTime_c0_0.issue<QMediaGaplessPlaybackControl_Adaptor, double>(&QMediaGaplessPlaybackControl_Adaptor::cbs_crossfadeTime_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("crossfadeTime");
    }
  }

  //  [adaptor impl] bool QMediaGaplessPlaybackControl::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QMediaGaplessPlaybackControl::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QMediaGaplessPlaybackControl_Adaptor, bool, QEvent *>(&QMediaGaplessPlaybackControl_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QMediaGaplessPlaybackControl::event(arg1);
    }
  }

  //  [adaptor impl] bool QMediaGaplessPlaybackControl::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QMediaGaplessPlaybackControl::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QMediaGaplessPlaybackControl_Adaptor, bool, QObject *, QEvent *>(&QMediaGaplessPlaybackControl_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QMediaGaplessPlaybackControl::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] bool QMediaGaplessPlaybackControl::isCrossfadeSupported()
  bool cbs_isCrossfadeSupported_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("isCrossfadeSupported");
  }

  virtual bool isCrossfadeSupported() const
  {
    if (cb_isCrossfadeSupported_c0_0.can_issue()) {
      return cb_isCrossfadeSupported_c0_0.issue<QMediaGaplessPlaybackControl_Adaptor, bool>(&QMediaGaplessPlaybackControl_Adaptor::cbs_isCrossfadeSupported_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("isCrossfadeSupported");
    }
  }

  //  [adaptor impl] QMediaContent QMediaGaplessPlaybackControl::nextMedia()
  QMediaContent cbs_nextMedia_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("nextMedia");
  }

  virtual QMediaContent nextMedia() const
  {
    if (cb_nextMedia_c0_0.can_issue()) {
      return cb_nextMedia_c0_0.issue<QMediaGaplessPlaybackControl_Adaptor, QMediaContent>(&QMediaGaplessPlaybackControl_Adaptor::cbs_nextMedia_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("nextMedia");
    }
  }

  //  [adaptor impl] void QMediaGaplessPlaybackControl::setCrossfadeTime(double crossfadeTime)
  void cbs_setCrossfadeTime_1071_0(double crossfadeTime)
  {
    __SUPPRESS_UNUSED_WARNING (crossfadeTime);
    throw qt_gsi::AbstractMethodCalledException("setCrossfadeTime");
  }

  virtual void setCrossfadeTime(double crossfadeTime)
  {
    if (cb_setCrossfadeTime_1071_0.can_issue()) {
      cb_setCrossfadeTime_1071_0.issue<QMediaGaplessPlaybackControl_Adaptor, double>(&QMediaGaplessPlaybackControl_Adaptor::cbs_setCrossfadeTime_1071_0, crossfadeTime);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setCrossfadeTime");
    }
  }

  //  [adaptor impl] void QMediaGaplessPlaybackControl::setNextMedia(const QMediaContent &media)
  void cbs_setNextMedia_2605_0(const QMediaContent &media)
  {
    __SUPPRESS_UNUSED_WARNING (media);
    throw qt_gsi::AbstractMethodCalledException("setNextMedia");
  }

  virtual void setNextMedia(const QMediaContent &media)
  {
    if (cb_setNextMedia_2605_0.can_issue()) {
      cb_setNextMedia_2605_0.issue<QMediaGaplessPlaybackControl_Adaptor, const QMediaContent &>(&QMediaGaplessPlaybackControl_Adaptor::cbs_setNextMedia_2605_0, media);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setNextMedia");
    }
  }

  //  [adaptor impl] void QMediaGaplessPlaybackControl::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QMediaGaplessPlaybackControl::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QMediaGaplessPlaybackControl_Adaptor, QChildEvent *>(&QMediaGaplessPlaybackControl_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QMediaGaplessPlaybackControl::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QMediaGaplessPlaybackControl::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QMediaGaplessPlaybackControl::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QMediaGaplessPlaybackControl_Adaptor, QEvent *>(&QMediaGaplessPlaybackControl_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QMediaGaplessPlaybackControl::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QMediaGaplessPlaybackControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QMediaGaplessPlaybackControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QMediaGaplessPlaybackControl_Adaptor, const QMetaMethod &>(&QMediaGaplessPlaybackControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QMediaGaplessPlaybackControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QMediaGaplessPlaybackControl::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QMediaGaplessPlaybackControl::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QMediaGaplessPlaybackControl_Adaptor, QTimerEvent *>(&QMediaGaplessPlaybackControl_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QMediaGaplessPlaybackControl::timerEvent(arg1);
    }
  }

  gsi::Callback cb_crossfadeTime_c0_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_isCrossfadeSupported_c0_0;
  gsi::Callback cb_nextMedia_c0_0;
  gsi::Callback cb_setCrossfadeTime_1071_0;
  gsi::Callback cb_setNextMedia_2605_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QMediaGaplessPlaybackControl_Adaptor::~QMediaGaplessPlaybackControl_Adaptor() { }

//  Constructor QMediaGaplessPlaybackControl::QMediaGaplessPlaybackControl() (adaptor class)

static void _init_ctor_QMediaGaplessPlaybackControl_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMediaGaplessPlaybackControl_Adaptor> ();
}

static void _call_ctor_QMediaGaplessPlaybackControl_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaGaplessPlaybackControl_Adaptor *> (new QMediaGaplessPlaybackControl_Adaptor ());
}


// void QMediaGaplessPlaybackControl::childEvent(QChildEvent *)

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
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// double QMediaGaplessPlaybackControl::crossfadeTime()

static void _init_cbs_crossfadeTime_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_cbs_crossfadeTime_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QMediaGaplessPlaybackControl_Adaptor *)cls)->cbs_crossfadeTime_c0_0 ());
}

static void _set_callback_cbs_crossfadeTime_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cb_crossfadeTime_c0_0 = cb;
}


// void QMediaGaplessPlaybackControl::customEvent(QEvent *)

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
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QMediaGaplessPlaybackControl::disconnectNotify(const QMetaMethod &signal)

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
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QMediaGaplessPlaybackControl::event(QEvent *)

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
  ret.write<bool > ((bool)((QMediaGaplessPlaybackControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QMediaGaplessPlaybackControl::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QMediaGaplessPlaybackControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// bool QMediaGaplessPlaybackControl::isCrossfadeSupported()

static void _init_cbs_isCrossfadeSupported_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isCrossfadeSupported_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMediaGaplessPlaybackControl_Adaptor *)cls)->cbs_isCrossfadeSupported_c0_0 ());
}

static void _set_callback_cbs_isCrossfadeSupported_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cb_isCrossfadeSupported_c0_0 = cb;
}


// exposed bool QMediaGaplessPlaybackControl::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QMediaGaplessPlaybackControl_Adaptor *)cls)->fp_QMediaGaplessPlaybackControl_isSignalConnected_c2394 (arg1));
}


// QMediaContent QMediaGaplessPlaybackControl::nextMedia()

static void _init_cbs_nextMedia_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMediaContent > ();
}

static void _call_cbs_nextMedia_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaContent > ((QMediaContent)((QMediaGaplessPlaybackControl_Adaptor *)cls)->cbs_nextMedia_c0_0 ());
}

static void _set_callback_cbs_nextMedia_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cb_nextMedia_c0_0 = cb;
}


// exposed int QMediaGaplessPlaybackControl::receivers(const char *signal)

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
  ret.write<int > ((int)((QMediaGaplessPlaybackControl_Adaptor *)cls)->fp_QMediaGaplessPlaybackControl_receivers_c1731 (arg1));
}


// exposed QObject *QMediaGaplessPlaybackControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QMediaGaplessPlaybackControl_Adaptor *)cls)->fp_QMediaGaplessPlaybackControl_sender_c0 ());
}


// exposed int QMediaGaplessPlaybackControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMediaGaplessPlaybackControl_Adaptor *)cls)->fp_QMediaGaplessPlaybackControl_senderSignalIndex_c0 ());
}


// void QMediaGaplessPlaybackControl::setCrossfadeTime(double crossfadeTime)

static void _init_cbs_setCrossfadeTime_1071_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("crossfadeTime");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setCrossfadeTime_1071_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cbs_setCrossfadeTime_1071_0 (arg1);
}

static void _set_callback_cbs_setCrossfadeTime_1071_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cb_setCrossfadeTime_1071_0 = cb;
}


// void QMediaGaplessPlaybackControl::setNextMedia(const QMediaContent &media)

static void _init_cbs_setNextMedia_2605_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("media");
  decl->add_arg<const QMediaContent & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setNextMedia_2605_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaContent &arg1 = args.read<const QMediaContent & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cbs_setNextMedia_2605_0 (arg1);
}

static void _set_callback_cbs_setNextMedia_2605_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cb_setNextMedia_2605_0 = cb;
}


// void QMediaGaplessPlaybackControl::timerEvent(QTimerEvent *)

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
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaGaplessPlaybackControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QMediaGaplessPlaybackControl> &qtdecl_QMediaGaplessPlaybackControl ();

static gsi::Methods methods_QMediaGaplessPlaybackControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaGaplessPlaybackControl::QMediaGaplessPlaybackControl()\nThis method creates an object of class QMediaGaplessPlaybackControl.", &_init_ctor_QMediaGaplessPlaybackControl_Adaptor_0, &_call_ctor_QMediaGaplessPlaybackControl_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QMediaGaplessPlaybackControl::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("crossfadeTime", "@brief Virtual method double QMediaGaplessPlaybackControl::crossfadeTime()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_crossfadeTime_c0_0, &_call_cbs_crossfadeTime_c0_0);
  methods += new qt_gsi::GenericMethod ("crossfadeTime", "@hide", true, &_init_cbs_crossfadeTime_c0_0, &_call_cbs_crossfadeTime_c0_0, &_set_callback_cbs_crossfadeTime_c0_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QMediaGaplessPlaybackControl::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QMediaGaplessPlaybackControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QMediaGaplessPlaybackControl::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QMediaGaplessPlaybackControl::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("isCrossfadeSupported", "@brief Virtual method bool QMediaGaplessPlaybackControl::isCrossfadeSupported()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isCrossfadeSupported_c0_0, &_call_cbs_isCrossfadeSupported_c0_0);
  methods += new qt_gsi::GenericMethod ("isCrossfadeSupported", "@hide", true, &_init_cbs_isCrossfadeSupported_c0_0, &_call_cbs_isCrossfadeSupported_c0_0, &_set_callback_cbs_isCrossfadeSupported_c0_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QMediaGaplessPlaybackControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("nextMedia", "@brief Virtual method QMediaContent QMediaGaplessPlaybackControl::nextMedia()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_nextMedia_c0_0, &_call_cbs_nextMedia_c0_0);
  methods += new qt_gsi::GenericMethod ("nextMedia", "@hide", true, &_init_cbs_nextMedia_c0_0, &_call_cbs_nextMedia_c0_0, &_set_callback_cbs_nextMedia_c0_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QMediaGaplessPlaybackControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QMediaGaplessPlaybackControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QMediaGaplessPlaybackControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setCrossfadeTime", "@brief Virtual method void QMediaGaplessPlaybackControl::setCrossfadeTime(double crossfadeTime)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setCrossfadeTime_1071_0, &_call_cbs_setCrossfadeTime_1071_0);
  methods += new qt_gsi::GenericMethod ("setCrossfadeTime", "@hide", false, &_init_cbs_setCrossfadeTime_1071_0, &_call_cbs_setCrossfadeTime_1071_0, &_set_callback_cbs_setCrossfadeTime_1071_0);
  methods += new qt_gsi::GenericMethod ("setNextMedia", "@brief Virtual method void QMediaGaplessPlaybackControl::setNextMedia(const QMediaContent &media)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setNextMedia_2605_0, &_call_cbs_setNextMedia_2605_0);
  methods += new qt_gsi::GenericMethod ("setNextMedia", "@hide", false, &_init_cbs_setNextMedia_2605_0, &_call_cbs_setNextMedia_2605_0, &_set_callback_cbs_setNextMedia_2605_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QMediaGaplessPlaybackControl::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QMediaGaplessPlaybackControl_Adaptor> decl_QMediaGaplessPlaybackControl_Adaptor (qtdecl_QMediaGaplessPlaybackControl (), "QtMultimedia", "QMediaGaplessPlaybackControl",
  methods_QMediaGaplessPlaybackControl_Adaptor (),
  "@qt\n@brief Binding of QMediaGaplessPlaybackControl");

}

