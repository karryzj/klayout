
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
*  @file gsiDeclQSharedMemory.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSharedMemory>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSharedMemory

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QSharedMemory::staticMetaObject);
}


// bool QSharedMemory::attach(QSharedMemory::AccessMode mode)


static void _init_f_attach_2848 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode", true, "QSharedMemory::ReadWrite");
  decl->add_arg<const qt_gsi::Converter<QSharedMemory::AccessMode>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_attach_2848 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSharedMemory::AccessMode>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<QSharedMemory::AccessMode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSharedMemory::AccessMode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSharedMemory::AccessMode>(heap, QSharedMemory::ReadWrite), heap);
  ret.write<bool > ((bool)((QSharedMemory *)cls)->attach (qt_gsi::QtToCppAdaptor<QSharedMemory::AccessMode>(arg1).cref()));
}


// const void *QSharedMemory::constData()


static void _init_f_constData_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const void * > ();
}

static void _call_f_constData_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const void * > ((const void *)((QSharedMemory *)cls)->constData ());
}


// bool QSharedMemory::create(int size, QSharedMemory::AccessMode mode)


static void _init_f_create_3507 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QSharedMemory::ReadWrite");
  decl->add_arg<const qt_gsi::Converter<QSharedMemory::AccessMode>::target_type & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_create_3507 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<QSharedMemory::AccessMode>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QSharedMemory::AccessMode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSharedMemory::AccessMode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSharedMemory::AccessMode>(heap, QSharedMemory::ReadWrite), heap);
  ret.write<bool > ((bool)((QSharedMemory *)cls)->create (arg1, qt_gsi::QtToCppAdaptor<QSharedMemory::AccessMode>(arg2).cref()));
}


// void *QSharedMemory::data()


static void _init_f_data_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void * > ();
}

static void _call_f_data_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<void * > ((void *)((QSharedMemory *)cls)->data ());
}


// const void *QSharedMemory::data()


static void _init_f_data_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const void * > ();
}

static void _call_f_data_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const void * > ((const void *)((QSharedMemory *)cls)->data ());
}


// bool QSharedMemory::detach()


static void _init_f_detach_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_detach_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSharedMemory *)cls)->detach ());
}


// QSharedMemory::SharedMemoryError QSharedMemory::error()


static void _init_f_error_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSharedMemory::SharedMemoryError>::target_type > ();
}

static void _call_f_error_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSharedMemory::SharedMemoryError>::target_type > ((qt_gsi::Converter<QSharedMemory::SharedMemoryError>::target_type)qt_gsi::CppToQtAdaptor<QSharedMemory::SharedMemoryError>(((QSharedMemory *)cls)->error ()));
}


// QString QSharedMemory::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSharedMemory *)cls)->errorString ());
}


// bool QSharedMemory::isAttached()


static void _init_f_isAttached_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isAttached_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSharedMemory *)cls)->isAttached ());
}


// QString QSharedMemory::key()


static void _init_f_key_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_key_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSharedMemory *)cls)->key ());
}


// bool QSharedMemory::lock()


static void _init_f_lock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_lock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSharedMemory *)cls)->lock ());
}


// QString QSharedMemory::nativeKey()


static void _init_f_nativeKey_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_nativeKey_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSharedMemory *)cls)->nativeKey ());
}


// void QSharedMemory::setKey(const QString &key)


static void _init_f_setKey_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setKey_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSharedMemory *)cls)->setKey (arg1);
}


// void QSharedMemory::setNativeKey(const QString &key)


static void _init_f_setNativeKey_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNativeKey_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSharedMemory *)cls)->setNativeKey (arg1);
}


// int QSharedMemory::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSharedMemory *)cls)->size ());
}


// bool QSharedMemory::unlock()


static void _init_f_unlock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_unlock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSharedMemory *)cls)->unlock ());
}


// static QString QSharedMemory::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QSharedMemory::tr (arg1, arg2, arg3));
}


// static QString QSharedMemory::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QSharedMemory::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QSharedMemory () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("attach", "@brief Method bool QSharedMemory::attach(QSharedMemory::AccessMode mode)\n", false, &_init_f_attach_2848, &_call_f_attach_2848);
  methods += new qt_gsi::GenericMethod ("constData", "@brief Method const void *QSharedMemory::constData()\n", true, &_init_f_constData_c0, &_call_f_constData_c0);
  methods += new qt_gsi::GenericMethod ("qt_create", "@brief Method bool QSharedMemory::create(int size, QSharedMemory::AccessMode mode)\n", false, &_init_f_create_3507, &_call_f_create_3507);
  methods += new qt_gsi::GenericMethod ("data", "@brief Method void *QSharedMemory::data()\n", false, &_init_f_data_0, &_call_f_data_0);
  methods += new qt_gsi::GenericMethod ("data", "@brief Method const void *QSharedMemory::data()\n", true, &_init_f_data_c0, &_call_f_data_c0);
  methods += new qt_gsi::GenericMethod ("detach", "@brief Method bool QSharedMemory::detach()\n", false, &_init_f_detach_0, &_call_f_detach_0);
  methods += new qt_gsi::GenericMethod ("error", "@brief Method QSharedMemory::SharedMemoryError QSharedMemory::error()\n", true, &_init_f_error_c0, &_call_f_error_c0);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Method QString QSharedMemory::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  methods += new qt_gsi::GenericMethod ("isAttached?", "@brief Method bool QSharedMemory::isAttached()\n", true, &_init_f_isAttached_c0, &_call_f_isAttached_c0);
  methods += new qt_gsi::GenericMethod (":key", "@brief Method QString QSharedMemory::key()\n", true, &_init_f_key_c0, &_call_f_key_c0);
  methods += new qt_gsi::GenericMethod ("lock", "@brief Method bool QSharedMemory::lock()\n", false, &_init_f_lock_0, &_call_f_lock_0);
  methods += new qt_gsi::GenericMethod (":nativeKey", "@brief Method QString QSharedMemory::nativeKey()\n", true, &_init_f_nativeKey_c0, &_call_f_nativeKey_c0);
  methods += new qt_gsi::GenericMethod ("setKey|key=", "@brief Method void QSharedMemory::setKey(const QString &key)\n", false, &_init_f_setKey_2025, &_call_f_setKey_2025);
  methods += new qt_gsi::GenericMethod ("setNativeKey|nativeKey=", "@brief Method void QSharedMemory::setNativeKey(const QString &key)\n", false, &_init_f_setNativeKey_2025, &_call_f_setNativeKey_2025);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method int QSharedMemory::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod ("unlock", "@brief Method bool QSharedMemory::unlock()\n", false, &_init_f_unlock_0, &_call_f_unlock_0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QSharedMemory::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QSharedMemory::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QSharedMemory::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QSharedMemory::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QSharedMemory> decl_QSharedMemory (qtdecl_QObject (), "QtCore", "QSharedMemory_Native",
  methods_QSharedMemory (),
  "@hide\n@alias QSharedMemory");

GSI_QTCORE_PUBLIC gsi::Class<QSharedMemory> &qtdecl_QSharedMemory () { return decl_QSharedMemory; }

}


class QSharedMemory_Adaptor : public QSharedMemory, public qt_gsi::QtObjectBase
{
public:

  virtual ~QSharedMemory_Adaptor();

  //  [adaptor ctor] QSharedMemory::QSharedMemory(QObject *parent)
  QSharedMemory_Adaptor() : QSharedMemory()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QSharedMemory::QSharedMemory(QObject *parent)
  QSharedMemory_Adaptor(QObject *parent) : QSharedMemory(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QSharedMemory::QSharedMemory(const QString &key, QObject *parent)
  QSharedMemory_Adaptor(const QString &key) : QSharedMemory(key)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QSharedMemory::QSharedMemory(const QString &key, QObject *parent)
  QSharedMemory_Adaptor(const QString &key, QObject *parent) : QSharedMemory(key, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QSharedMemory::isSignalConnected(const QMetaMethod &signal)
  bool fp_QSharedMemory_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QSharedMemory::isSignalConnected(signal);
  }

  //  [expose] int QSharedMemory::receivers(const char *signal)
  int fp_QSharedMemory_receivers_c1731 (const char *signal) const {
    return QSharedMemory::receivers(signal);
  }

  //  [expose] QObject *QSharedMemory::sender()
  QObject * fp_QSharedMemory_sender_c0 () const {
    return QSharedMemory::sender();
  }

  //  [expose] int QSharedMemory::senderSignalIndex()
  int fp_QSharedMemory_senderSignalIndex_c0 () const {
    return QSharedMemory::senderSignalIndex();
  }

  //  [emitter impl] void QSharedMemory::destroyed(QObject *)
  void emitter_QSharedMemory_destroyed_1302(QObject *arg1)
  {
    emit QSharedMemory::destroyed(arg1);
  }

  //  [adaptor impl] bool QSharedMemory::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QSharedMemory::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QSharedMemory_Adaptor, bool, QEvent *>(&QSharedMemory_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QSharedMemory::event(arg1);
    }
  }

  //  [adaptor impl] bool QSharedMemory::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QSharedMemory::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QSharedMemory_Adaptor, bool, QObject *, QEvent *>(&QSharedMemory_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QSharedMemory::eventFilter(arg1, arg2);
    }
  }

  //  [emitter impl] void QSharedMemory::objectNameChanged(const QString &objectName)
  void emitter_QSharedMemory_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QSharedMemory::objectNameChanged(const QString &objectName)'");
  }

  //  [adaptor impl] void QSharedMemory::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QSharedMemory::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QSharedMemory_Adaptor, QChildEvent *>(&QSharedMemory_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QSharedMemory::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QSharedMemory::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QSharedMemory::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QSharedMemory_Adaptor, QEvent *>(&QSharedMemory_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QSharedMemory::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QSharedMemory::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QSharedMemory::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QSharedMemory_Adaptor, const QMetaMethod &>(&QSharedMemory_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QSharedMemory::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QSharedMemory::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QSharedMemory::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QSharedMemory_Adaptor, QTimerEvent *>(&QSharedMemory_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QSharedMemory::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QSharedMemory_Adaptor::~QSharedMemory_Adaptor() { }

//  Constructor QSharedMemory::QSharedMemory(QObject *parent) (adaptor class)

static void _init_ctor_QSharedMemory_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QSharedMemory_Adaptor> ();
}

static void _call_ctor_QSharedMemory_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QSharedMemory_Adaptor *> (new QSharedMemory_Adaptor (arg1));
}


//  Constructor QSharedMemory::QSharedMemory(const QString &key, QObject *parent) (adaptor class)

static void _init_ctor_QSharedMemory_Adaptor_3219 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QSharedMemory_Adaptor> ();
}

static void _call_ctor_QSharedMemory_Adaptor_3219 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QObject *arg2 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QSharedMemory_Adaptor *> (new QSharedMemory_Adaptor (arg1, arg2));
}


// void QSharedMemory::childEvent(QChildEvent *)

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
  ((QSharedMemory_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QSharedMemory_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QSharedMemory::customEvent(QEvent *)

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
  ((QSharedMemory_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QSharedMemory_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QSharedMemory::destroyed(QObject *)

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
  ((QSharedMemory_Adaptor *)cls)->emitter_QSharedMemory_destroyed_1302 (arg1);
}


// void QSharedMemory::disconnectNotify(const QMetaMethod &signal)

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
  ((QSharedMemory_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QSharedMemory_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QSharedMemory::event(QEvent *)

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
  ret.write<bool > ((bool)((QSharedMemory_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QSharedMemory_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QSharedMemory::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QSharedMemory_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QSharedMemory_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QSharedMemory::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QSharedMemory_Adaptor *)cls)->fp_QSharedMemory_isSignalConnected_c2394 (arg1));
}


// emitter void QSharedMemory::objectNameChanged(const QString &objectName)

static void _init_emitter_objectNameChanged_4567 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("objectName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_objectNameChanged_4567 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QSharedMemory_Adaptor *)cls)->emitter_QSharedMemory_objectNameChanged_4567 (arg1);
}


// exposed int QSharedMemory::receivers(const char *signal)

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
  ret.write<int > ((int)((QSharedMemory_Adaptor *)cls)->fp_QSharedMemory_receivers_c1731 (arg1));
}


// exposed QObject *QSharedMemory::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QSharedMemory_Adaptor *)cls)->fp_QSharedMemory_sender_c0 ());
}


// exposed int QSharedMemory::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSharedMemory_Adaptor *)cls)->fp_QSharedMemory_senderSignalIndex_c0 ());
}


// void QSharedMemory::timerEvent(QTimerEvent *)

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
  ((QSharedMemory_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QSharedMemory_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QSharedMemory> &qtdecl_QSharedMemory ();

static gsi::Methods methods_QSharedMemory_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSharedMemory::QSharedMemory(QObject *parent)\nThis method creates an object of class QSharedMemory.", &_init_ctor_QSharedMemory_Adaptor_1302, &_call_ctor_QSharedMemory_Adaptor_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSharedMemory::QSharedMemory(const QString &key, QObject *parent)\nThis method creates an object of class QSharedMemory.", &_init_ctor_QSharedMemory_Adaptor_3219, &_call_ctor_QSharedMemory_Adaptor_3219);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QSharedMemory::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QSharedMemory::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QSharedMemory::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QSharedMemory::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QSharedMemory::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QSharedMemory::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QSharedMemory::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QSharedMemory::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QSharedMemory::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QSharedMemory::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QSharedMemory::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QSharedMemory::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QSharedMemory_Adaptor> decl_QSharedMemory_Adaptor (qtdecl_QSharedMemory (), "QtCore", "QSharedMemory",
  methods_QSharedMemory_Adaptor (),
  "@qt\n@brief Binding of QSharedMemory");

}


//  Implementation of the enum wrapper class for QSharedMemory::AccessMode
namespace qt_gsi
{

static gsi::Enum<QSharedMemory::AccessMode> decl_QSharedMemory_AccessMode_Enum ("QtCore", "QSharedMemory_AccessMode",
    gsi::enum_const ("ReadOnly", QSharedMemory::ReadOnly, "@brief Enum constant QSharedMemory::ReadOnly") +
    gsi::enum_const ("ReadWrite", QSharedMemory::ReadWrite, "@brief Enum constant QSharedMemory::ReadWrite"),
  "@qt\n@brief This class represents the QSharedMemory::AccessMode enum");

static gsi::QFlagsClass<QSharedMemory::AccessMode > decl_QSharedMemory_AccessMode_Enums ("QtCore", "QSharedMemory_QFlags_AccessMode",
  "@qt\n@brief This class represents the QFlags<QSharedMemory::AccessMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSharedMemory> inject_QSharedMemory_AccessMode_Enum_in_parent (decl_QSharedMemory_AccessMode_Enum.defs ());
static gsi::ClassExt<QSharedMemory> decl_QSharedMemory_AccessMode_Enum_as_child (decl_QSharedMemory_AccessMode_Enum, "AccessMode");
static gsi::ClassExt<QSharedMemory> decl_QSharedMemory_AccessMode_Enums_as_child (decl_QSharedMemory_AccessMode_Enums, "QFlags_AccessMode");

}


//  Implementation of the enum wrapper class for QSharedMemory::SharedMemoryError
namespace qt_gsi
{

static gsi::Enum<QSharedMemory::SharedMemoryError> decl_QSharedMemory_SharedMemoryError_Enum ("QtCore", "QSharedMemory_SharedMemoryError",
    gsi::enum_const ("NoError", QSharedMemory::NoError, "@brief Enum constant QSharedMemory::NoError") +
    gsi::enum_const ("PermissionDenied", QSharedMemory::PermissionDenied, "@brief Enum constant QSharedMemory::PermissionDenied") +
    gsi::enum_const ("InvalidSize", QSharedMemory::InvalidSize, "@brief Enum constant QSharedMemory::InvalidSize") +
    gsi::enum_const ("KeyError", QSharedMemory::KeyError, "@brief Enum constant QSharedMemory::KeyError") +
    gsi::enum_const ("AlreadyExists", QSharedMemory::AlreadyExists, "@brief Enum constant QSharedMemory::AlreadyExists") +
    gsi::enum_const ("NotFound", QSharedMemory::NotFound, "@brief Enum constant QSharedMemory::NotFound") +
    gsi::enum_const ("LockError", QSharedMemory::LockError, "@brief Enum constant QSharedMemory::LockError") +
    gsi::enum_const ("OutOfResources", QSharedMemory::OutOfResources, "@brief Enum constant QSharedMemory::OutOfResources") +
    gsi::enum_const ("UnknownError", QSharedMemory::UnknownError, "@brief Enum constant QSharedMemory::UnknownError"),
  "@qt\n@brief This class represents the QSharedMemory::SharedMemoryError enum");

static gsi::QFlagsClass<QSharedMemory::SharedMemoryError > decl_QSharedMemory_SharedMemoryError_Enums ("QtCore", "QSharedMemory_QFlags_SharedMemoryError",
  "@qt\n@brief This class represents the QFlags<QSharedMemory::SharedMemoryError> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSharedMemory> inject_QSharedMemory_SharedMemoryError_Enum_in_parent (decl_QSharedMemory_SharedMemoryError_Enum.defs ());
static gsi::ClassExt<QSharedMemory> decl_QSharedMemory_SharedMemoryError_Enum_as_child (decl_QSharedMemory_SharedMemoryError_Enum, "SharedMemoryError");
static gsi::ClassExt<QSharedMemory> decl_QSharedMemory_SharedMemoryError_Enums_as_child (decl_QSharedMemory_SharedMemoryError_Enums, "QFlags_SharedMemoryError");

}

