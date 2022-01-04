
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
*  @file gsiDeclQTextBlockGroup.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextBlockGroup>
#include <QChildEvent>
#include <QEvent>
#include <QObject>
#include <QTextBlock>
#include <QTextDocument>
#include <QTextFormat>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextBlockGroup

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QTextBlockGroup::staticMetaObject);
}


// static QString QTextBlockGroup::tr(const char *s, const char *c)


static void _init_f_tr_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_tr_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QTextBlockGroup::tr (arg1, arg2));
}


// static QString QTextBlockGroup::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QTextBlockGroup::tr (arg1, arg2, arg3));
}


// static QString QTextBlockGroup::trUtf8(const char *s, const char *c)


static void _init_f_trUtf8_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QTextBlockGroup::trUtf8 (arg1, arg2));
}


// static QString QTextBlockGroup::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QTextBlockGroup::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QTextBlockGroup () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QTextBlockGroup::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QTextBlockGroup::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QTextBlockGroup::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QTextBlockGroup::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QTextBlockGroup::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QTextObject> &qtdecl_QTextObject ();

qt_gsi::QtNativeClass<QTextBlockGroup> decl_QTextBlockGroup (qtdecl_QTextObject (), "QtGui", "QTextBlockGroup_Native",
  methods_QTextBlockGroup (),
  "@hide\n@alias QTextBlockGroup");

GSI_QTGUI_PUBLIC gsi::Class<QTextBlockGroup> &qtdecl_QTextBlockGroup () { return decl_QTextBlockGroup; }

}


class QTextBlockGroup_Adaptor : public QTextBlockGroup, public qt_gsi::QtObjectBase
{
public:

  virtual ~QTextBlockGroup_Adaptor();

  //  [expose] QList<QTextBlock> QTextBlockGroup::blockList()
  QList<QTextBlock> fp_QTextBlockGroup_blockList_c0 () const {
    return QTextBlockGroup::blockList();
  }

  //  [expose] int QTextBlockGroup::receivers(const char *signal)
  int fp_QTextBlockGroup_receivers_c1731 (const char *signal) const {
    return QTextBlockGroup::receivers(signal);
  }

  //  [expose] QObject *QTextBlockGroup::sender()
  QObject * fp_QTextBlockGroup_sender_c0 () const {
    return QTextBlockGroup::sender();
  }

  //  [expose] void QTextBlockGroup::setFormat(const QTextFormat &format)
  void fp_QTextBlockGroup_setFormat_2432 (const QTextFormat &format) {
    QTextBlockGroup::setFormat(format);
  }

  //  [adaptor impl] bool QTextBlockGroup::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QTextBlockGroup::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QTextBlockGroup_Adaptor, bool, QEvent *>(&QTextBlockGroup_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QTextBlockGroup::event(arg1);
    }
  }

  //  [adaptor impl] bool QTextBlockGroup::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QTextBlockGroup::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QTextBlockGroup_Adaptor, bool, QObject *, QEvent *>(&QTextBlockGroup_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QTextBlockGroup::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QTextBlockGroup::blockFormatChanged(const QTextBlock &block)
  void cbs_blockFormatChanged_2306_0(const QTextBlock &block)
  {
    QTextBlockGroup::blockFormatChanged(block);
  }

  virtual void blockFormatChanged(const QTextBlock &block)
  {
    if (cb_blockFormatChanged_2306_0.can_issue()) {
      cb_blockFormatChanged_2306_0.issue<QTextBlockGroup_Adaptor, const QTextBlock &>(&QTextBlockGroup_Adaptor::cbs_blockFormatChanged_2306_0, block);
    } else {
      QTextBlockGroup::blockFormatChanged(block);
    }
  }

  //  [adaptor impl] void QTextBlockGroup::blockInserted(const QTextBlock &block)
  void cbs_blockInserted_2306_0(const QTextBlock &block)
  {
    QTextBlockGroup::blockInserted(block);
  }

  virtual void blockInserted(const QTextBlock &block)
  {
    if (cb_blockInserted_2306_0.can_issue()) {
      cb_blockInserted_2306_0.issue<QTextBlockGroup_Adaptor, const QTextBlock &>(&QTextBlockGroup_Adaptor::cbs_blockInserted_2306_0, block);
    } else {
      QTextBlockGroup::blockInserted(block);
    }
  }

  //  [adaptor impl] void QTextBlockGroup::blockRemoved(const QTextBlock &block)
  void cbs_blockRemoved_2306_0(const QTextBlock &block)
  {
    QTextBlockGroup::blockRemoved(block);
  }

  virtual void blockRemoved(const QTextBlock &block)
  {
    if (cb_blockRemoved_2306_0.can_issue()) {
      cb_blockRemoved_2306_0.issue<QTextBlockGroup_Adaptor, const QTextBlock &>(&QTextBlockGroup_Adaptor::cbs_blockRemoved_2306_0, block);
    } else {
      QTextBlockGroup::blockRemoved(block);
    }
  }

  //  [adaptor impl] void QTextBlockGroup::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QTextBlockGroup::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QTextBlockGroup_Adaptor, QChildEvent *>(&QTextBlockGroup_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QTextBlockGroup::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QTextBlockGroup::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QTextBlockGroup::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QTextBlockGroup_Adaptor, QEvent *>(&QTextBlockGroup_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QTextBlockGroup::customEvent(arg1);
    }
  }

  //  [emitter impl] void QTextBlockGroup::destroyed(QObject *)
  void emitter_QTextBlockGroup_destroyed_1302(QObject *arg1)
  {
    emit QTextBlockGroup::destroyed(arg1);
  }

  //  [adaptor impl] void QTextBlockGroup::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QTextBlockGroup::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QTextBlockGroup_Adaptor, const char *>(&QTextBlockGroup_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QTextBlockGroup::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QTextBlockGroup::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QTextBlockGroup::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QTextBlockGroup_Adaptor, QTimerEvent *>(&QTextBlockGroup_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QTextBlockGroup::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_blockFormatChanged_2306_0;
  gsi::Callback cb_blockInserted_2306_0;
  gsi::Callback cb_blockRemoved_2306_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QTextBlockGroup_Adaptor::~QTextBlockGroup_Adaptor() { }

// void QTextBlockGroup::blockFormatChanged(const QTextBlock &block)

static void _init_cbs_blockFormatChanged_2306_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("block");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_blockFormatChanged_2306_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = args.read<const QTextBlock & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockGroup_Adaptor *)cls)->cbs_blockFormatChanged_2306_0 (arg1);
}

static void _set_callback_cbs_blockFormatChanged_2306_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextBlockGroup_Adaptor *)cls)->cb_blockFormatChanged_2306_0 = cb;
}


// void QTextBlockGroup::blockInserted(const QTextBlock &block)

static void _init_cbs_blockInserted_2306_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("block");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_blockInserted_2306_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = args.read<const QTextBlock & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockGroup_Adaptor *)cls)->cbs_blockInserted_2306_0 (arg1);
}

static void _set_callback_cbs_blockInserted_2306_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextBlockGroup_Adaptor *)cls)->cb_blockInserted_2306_0 = cb;
}


// exposed QList<QTextBlock> QTextBlockGroup::blockList()

static void _init_fp_blockList_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QTextBlock> > ();
}

static void _call_fp_blockList_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QTextBlock> > ((QList<QTextBlock>)((QTextBlockGroup_Adaptor *)cls)->fp_QTextBlockGroup_blockList_c0 ());
}


// void QTextBlockGroup::blockRemoved(const QTextBlock &block)

static void _init_cbs_blockRemoved_2306_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("block");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_blockRemoved_2306_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = args.read<const QTextBlock & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockGroup_Adaptor *)cls)->cbs_blockRemoved_2306_0 (arg1);
}

static void _set_callback_cbs_blockRemoved_2306_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextBlockGroup_Adaptor *)cls)->cb_blockRemoved_2306_0 = cb;
}


// void QTextBlockGroup::childEvent(QChildEvent *)

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
  ((QTextBlockGroup_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextBlockGroup_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QTextBlockGroup::customEvent(QEvent *)

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
  ((QTextBlockGroup_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextBlockGroup_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QTextBlockGroup::destroyed(QObject *)

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
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ((QTextBlockGroup_Adaptor *)cls)->emitter_QTextBlockGroup_destroyed_1302 (arg1);
}


// void QTextBlockGroup::disconnectNotify(const char *signal)

static void _init_cbs_disconnectNotify_1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockGroup_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextBlockGroup_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QTextBlockGroup::event(QEvent *)

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
  ret.write<bool > ((bool)((QTextBlockGroup_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextBlockGroup_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QTextBlockGroup::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QTextBlockGroup_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextBlockGroup_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed int QTextBlockGroup::receivers(const char *signal)

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
  ret.write<int > ((int)((QTextBlockGroup_Adaptor *)cls)->fp_QTextBlockGroup_receivers_c1731 (arg1));
}


// exposed QObject *QTextBlockGroup::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QTextBlockGroup_Adaptor *)cls)->fp_QTextBlockGroup_sender_c0 ());
}


// exposed void QTextBlockGroup::setFormat(const QTextFormat &format)

static void _init_fp_setFormat_2432 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QTextFormat & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_fp_setFormat_2432 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFormat &arg1 = gsi::arg_reader<const QTextFormat & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextBlockGroup_Adaptor *)cls)->fp_QTextBlockGroup_setFormat_2432 (arg1);
}


// void QTextBlockGroup::timerEvent(QTimerEvent *)

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
  ((QTextBlockGroup_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextBlockGroup_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QTextBlockGroup> &qtdecl_QTextBlockGroup ();

static gsi::Methods methods_QTextBlockGroup_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("*blockFormatChanged", "@brief Virtual method void QTextBlockGroup::blockFormatChanged(const QTextBlock &block)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_blockFormatChanged_2306_0, &_call_cbs_blockFormatChanged_2306_0);
  methods += new qt_gsi::GenericMethod ("*blockFormatChanged", "@hide", false, &_init_cbs_blockFormatChanged_2306_0, &_call_cbs_blockFormatChanged_2306_0, &_set_callback_cbs_blockFormatChanged_2306_0);
  methods += new qt_gsi::GenericMethod ("*blockInserted", "@brief Virtual method void QTextBlockGroup::blockInserted(const QTextBlock &block)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_blockInserted_2306_0, &_call_cbs_blockInserted_2306_0);
  methods += new qt_gsi::GenericMethod ("*blockInserted", "@hide", false, &_init_cbs_blockInserted_2306_0, &_call_cbs_blockInserted_2306_0, &_set_callback_cbs_blockInserted_2306_0);
  methods += new qt_gsi::GenericMethod ("*blockList", "@brief Method QList<QTextBlock> QTextBlockGroup::blockList()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_blockList_c0, &_call_fp_blockList_c0);
  methods += new qt_gsi::GenericMethod ("*blockRemoved", "@brief Virtual method void QTextBlockGroup::blockRemoved(const QTextBlock &block)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_blockRemoved_2306_0, &_call_cbs_blockRemoved_2306_0);
  methods += new qt_gsi::GenericMethod ("*blockRemoved", "@hide", false, &_init_cbs_blockRemoved_2306_0, &_call_cbs_blockRemoved_2306_0, &_set_callback_cbs_blockRemoved_2306_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QTextBlockGroup::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QTextBlockGroup::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QTextBlockGroup::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QTextBlockGroup::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QTextBlockGroup::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QTextBlockGroup::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QTextBlockGroup::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QTextBlockGroup::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*setFormat", "@brief Method void QTextBlockGroup::setFormat(const QTextFormat &format)\nThis method is protected and can only be called from inside a derived class.", false, &_init_fp_setFormat_2432, &_call_fp_setFormat_2432);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QTextBlockGroup::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QTextBlockGroup_Adaptor> decl_QTextBlockGroup_Adaptor (qtdecl_QTextBlockGroup (), "QtGui", "QTextBlockGroup",
  methods_QTextBlockGroup_Adaptor (),
  "@qt\n@brief Binding of QTextBlockGroup");

}

