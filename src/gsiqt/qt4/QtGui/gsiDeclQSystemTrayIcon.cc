
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
*  @file gsiDeclQSystemTrayIcon.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSystemTrayIcon>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QMenu>
#include <QObject>
#include <QRect>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSystemTrayIcon

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QSystemTrayIcon::staticMetaObject);
}


// QMenu *QSystemTrayIcon::contextMenu()


static void _init_f_contextMenu_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMenu * > ();
}

static void _call_f_contextMenu_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMenu * > ((QMenu *)((QSystemTrayIcon *)cls)->contextMenu ());
}


// QRect QSystemTrayIcon::geometry()


static void _init_f_geometry_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_geometry_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QSystemTrayIcon *)cls)->geometry ());
}


// void QSystemTrayIcon::hide()


static void _init_f_hide_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_hide_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSystemTrayIcon *)cls)->hide ();
}


// QIcon QSystemTrayIcon::icon()


static void _init_f_icon_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QIcon > ();
}

static void _call_f_icon_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIcon > ((QIcon)((QSystemTrayIcon *)cls)->icon ());
}


// bool QSystemTrayIcon::isVisible()


static void _init_f_isVisible_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isVisible_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSystemTrayIcon *)cls)->isVisible ());
}


// void QSystemTrayIcon::setContextMenu(QMenu *menu)


static void _init_f_setContextMenu_1108 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("menu");
  decl->add_arg<QMenu * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setContextMenu_1108 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMenu *arg1 = gsi::arg_reader<QMenu * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSystemTrayIcon *)cls)->setContextMenu (arg1);
}


// void QSystemTrayIcon::setIcon(const QIcon &icon)


static void _init_f_setIcon_1787 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("icon");
  decl->add_arg<const QIcon & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setIcon_1787 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QIcon &arg1 = gsi::arg_reader<const QIcon & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSystemTrayIcon *)cls)->setIcon (arg1);
}


// void QSystemTrayIcon::setToolTip(const QString &tip)


static void _init_f_setToolTip_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("tip");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setToolTip_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSystemTrayIcon *)cls)->setToolTip (arg1);
}


// void QSystemTrayIcon::setVisible(bool visible)


static void _init_f_setVisible_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("visible");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVisible_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSystemTrayIcon *)cls)->setVisible (arg1);
}


// void QSystemTrayIcon::show()


static void _init_f_show_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_show_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSystemTrayIcon *)cls)->show ();
}


// void QSystemTrayIcon::showMessage(const QString &title, const QString &msg, QSystemTrayIcon::MessageIcon icon, int msecs)


static void _init_f_showMessage_7682 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("title");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("msg");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("icon", true, "QSystemTrayIcon::Information");
  decl->add_arg<const qt_gsi::Converter<QSystemTrayIcon::MessageIcon>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("msecs", true, "10000");
  decl->add_arg<int > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_showMessage_7682 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const qt_gsi::Converter<QSystemTrayIcon::MessageIcon>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QSystemTrayIcon::MessageIcon>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSystemTrayIcon::MessageIcon>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSystemTrayIcon::MessageIcon>(heap, QSystemTrayIcon::Information), heap);
  int arg4 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (10000, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSystemTrayIcon *)cls)->showMessage (arg1, arg2, qt_gsi::QtToCppAdaptor<QSystemTrayIcon::MessageIcon>(arg3).cref(), arg4);
}


// QString QSystemTrayIcon::toolTip()


static void _init_f_toolTip_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_toolTip_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSystemTrayIcon *)cls)->toolTip ());
}


// static bool QSystemTrayIcon::isSystemTrayAvailable()


static void _init_f_isSystemTrayAvailable_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isSystemTrayAvailable_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)QSystemTrayIcon::isSystemTrayAvailable ());
}


// static bool QSystemTrayIcon::supportsMessages()


static void _init_f_supportsMessages_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_supportsMessages_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)QSystemTrayIcon::supportsMessages ());
}


// static QString QSystemTrayIcon::tr(const char *s, const char *c)


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
  ret.write<QString > ((QString)QSystemTrayIcon::tr (arg1, arg2));
}


// static QString QSystemTrayIcon::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QSystemTrayIcon::tr (arg1, arg2, arg3));
}


// static QString QSystemTrayIcon::trUtf8(const char *s, const char *c)


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
  ret.write<QString > ((QString)QSystemTrayIcon::trUtf8 (arg1, arg2));
}


// static QString QSystemTrayIcon::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QSystemTrayIcon::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QSystemTrayIcon () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":contextMenu", "@brief Method QMenu *QSystemTrayIcon::contextMenu()\n", true, &_init_f_contextMenu_c0, &_call_f_contextMenu_c0);
  methods += new qt_gsi::GenericMethod ("geometry", "@brief Method QRect QSystemTrayIcon::geometry()\n", true, &_init_f_geometry_c0, &_call_f_geometry_c0);
  methods += new qt_gsi::GenericMethod ("hide", "@brief Method void QSystemTrayIcon::hide()\n", false, &_init_f_hide_0, &_call_f_hide_0);
  methods += new qt_gsi::GenericMethod (":icon", "@brief Method QIcon QSystemTrayIcon::icon()\n", true, &_init_f_icon_c0, &_call_f_icon_c0);
  methods += new qt_gsi::GenericMethod ("isVisible?|:visible", "@brief Method bool QSystemTrayIcon::isVisible()\n", true, &_init_f_isVisible_c0, &_call_f_isVisible_c0);
  methods += new qt_gsi::GenericMethod ("setContextMenu|contextMenu=", "@brief Method void QSystemTrayIcon::setContextMenu(QMenu *menu)\n", false, &_init_f_setContextMenu_1108, &_call_f_setContextMenu_1108);
  methods += new qt_gsi::GenericMethod ("setIcon|icon=", "@brief Method void QSystemTrayIcon::setIcon(const QIcon &icon)\n", false, &_init_f_setIcon_1787, &_call_f_setIcon_1787);
  methods += new qt_gsi::GenericMethod ("setToolTip|toolTip=", "@brief Method void QSystemTrayIcon::setToolTip(const QString &tip)\n", false, &_init_f_setToolTip_2025, &_call_f_setToolTip_2025);
  methods += new qt_gsi::GenericMethod ("setVisible|visible=", "@brief Method void QSystemTrayIcon::setVisible(bool visible)\n", false, &_init_f_setVisible_864, &_call_f_setVisible_864);
  methods += new qt_gsi::GenericMethod ("show", "@brief Method void QSystemTrayIcon::show()\n", false, &_init_f_show_0, &_call_f_show_0);
  methods += new qt_gsi::GenericMethod ("showMessage", "@brief Method void QSystemTrayIcon::showMessage(const QString &title, const QString &msg, QSystemTrayIcon::MessageIcon icon, int msecs)\n", false, &_init_f_showMessage_7682, &_call_f_showMessage_7682);
  methods += new qt_gsi::GenericMethod (":toolTip", "@brief Method QString QSystemTrayIcon::toolTip()\n", true, &_init_f_toolTip_c0, &_call_f_toolTip_c0);
  methods += gsi::qt_signal<const qt_gsi::Converter<QSystemTrayIcon::ActivationReason>::target_type & > ("activated(QSystemTrayIcon::ActivationReason)", "activated", gsi::arg("reason"), "@brief Signal declaration for QSystemTrayIcon::activated(QSystemTrayIcon::ActivationReason reason)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QSystemTrayIcon::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("messageClicked()", "messageClicked", "@brief Signal declaration for QSystemTrayIcon::messageClicked()\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("isSystemTrayAvailable?", "@brief Static method bool QSystemTrayIcon::isSystemTrayAvailable()\nThis method is static and can be called without an instance.", &_init_f_isSystemTrayAvailable_0, &_call_f_isSystemTrayAvailable_0);
  methods += new qt_gsi::GenericStaticMethod ("supportsMessages", "@brief Static method bool QSystemTrayIcon::supportsMessages()\nThis method is static and can be called without an instance.", &_init_f_supportsMessages_0, &_call_f_supportsMessages_0);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QSystemTrayIcon::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QSystemTrayIcon::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QSystemTrayIcon::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QSystemTrayIcon::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QSystemTrayIcon> decl_QSystemTrayIcon (qtdecl_QObject (), "QtGui", "QSystemTrayIcon_Native",
  methods_QSystemTrayIcon (),
  "@hide\n@alias QSystemTrayIcon");

GSI_QTGUI_PUBLIC gsi::Class<QSystemTrayIcon> &qtdecl_QSystemTrayIcon () { return decl_QSystemTrayIcon; }

}


class QSystemTrayIcon_Adaptor : public QSystemTrayIcon, public qt_gsi::QtObjectBase
{
public:

  virtual ~QSystemTrayIcon_Adaptor();

  //  [adaptor ctor] QSystemTrayIcon::QSystemTrayIcon(QObject *parent)
  QSystemTrayIcon_Adaptor() : QSystemTrayIcon()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QSystemTrayIcon::QSystemTrayIcon(QObject *parent)
  QSystemTrayIcon_Adaptor(QObject *parent) : QSystemTrayIcon(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QSystemTrayIcon::QSystemTrayIcon(const QIcon &icon, QObject *parent)
  QSystemTrayIcon_Adaptor(const QIcon &icon) : QSystemTrayIcon(icon)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QSystemTrayIcon::QSystemTrayIcon(const QIcon &icon, QObject *parent)
  QSystemTrayIcon_Adaptor(const QIcon &icon, QObject *parent) : QSystemTrayIcon(icon, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QSystemTrayIcon::receivers(const char *signal)
  int fp_QSystemTrayIcon_receivers_c1731 (const char *signal) const {
    return QSystemTrayIcon::receivers(signal);
  }

  //  [expose] QObject *QSystemTrayIcon::sender()
  QObject * fp_QSystemTrayIcon_sender_c0 () const {
    return QSystemTrayIcon::sender();
  }

  //  [adaptor impl] bool QSystemTrayIcon::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QSystemTrayIcon::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QSystemTrayIcon_Adaptor, bool, QObject *, QEvent *>(&QSystemTrayIcon_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QSystemTrayIcon::eventFilter(arg1, arg2);
    }
  }

  //  [emitter impl] void QSystemTrayIcon::activated(QSystemTrayIcon::ActivationReason reason)
  void emitter_QSystemTrayIcon_activated_3745(QSystemTrayIcon::ActivationReason reason)
  {
    emit QSystemTrayIcon::activated(reason);
  }

  //  [adaptor impl] void QSystemTrayIcon::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QSystemTrayIcon::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QSystemTrayIcon_Adaptor, QChildEvent *>(&QSystemTrayIcon_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QSystemTrayIcon::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QSystemTrayIcon::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QSystemTrayIcon::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QSystemTrayIcon_Adaptor, QEvent *>(&QSystemTrayIcon_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QSystemTrayIcon::customEvent(arg1);
    }
  }

  //  [emitter impl] void QSystemTrayIcon::destroyed(QObject *)
  void emitter_QSystemTrayIcon_destroyed_1302(QObject *arg1)
  {
    emit QSystemTrayIcon::destroyed(arg1);
  }

  //  [adaptor impl] void QSystemTrayIcon::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QSystemTrayIcon::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QSystemTrayIcon_Adaptor, const char *>(&QSystemTrayIcon_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QSystemTrayIcon::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] bool QSystemTrayIcon::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QSystemTrayIcon::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QSystemTrayIcon_Adaptor, bool, QEvent *>(&QSystemTrayIcon_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QSystemTrayIcon::event(_event);
    }
  }

  //  [emitter impl] void QSystemTrayIcon::messageClicked()
  void emitter_QSystemTrayIcon_messageClicked_0()
  {
    emit QSystemTrayIcon::messageClicked();
  }

  //  [adaptor impl] void QSystemTrayIcon::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QSystemTrayIcon::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QSystemTrayIcon_Adaptor, QTimerEvent *>(&QSystemTrayIcon_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QSystemTrayIcon::timerEvent(arg1);
    }
  }

  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QSystemTrayIcon_Adaptor::~QSystemTrayIcon_Adaptor() { }

//  Constructor QSystemTrayIcon::QSystemTrayIcon(QObject *parent) (adaptor class)

static void _init_ctor_QSystemTrayIcon_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QSystemTrayIcon_Adaptor> ();
}

static void _call_ctor_QSystemTrayIcon_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QSystemTrayIcon_Adaptor *> (new QSystemTrayIcon_Adaptor (arg1));
}


//  Constructor QSystemTrayIcon::QSystemTrayIcon(const QIcon &icon, QObject *parent) (adaptor class)

static void _init_ctor_QSystemTrayIcon_Adaptor_2981 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("icon");
  decl->add_arg<const QIcon & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QSystemTrayIcon_Adaptor> ();
}

static void _call_ctor_QSystemTrayIcon_Adaptor_2981 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QIcon &arg1 = gsi::arg_reader<const QIcon & >() (args, heap);
  QObject *arg2 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QSystemTrayIcon_Adaptor *> (new QSystemTrayIcon_Adaptor (arg1, arg2));
}


// emitter void QSystemTrayIcon::activated(QSystemTrayIcon::ActivationReason reason)

static void _init_emitter_activated_3745 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("reason");
  decl->add_arg<const qt_gsi::Converter<QSystemTrayIcon::ActivationReason>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_activated_3745 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSystemTrayIcon::ActivationReason>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QSystemTrayIcon::ActivationReason>::target_type & >() (args, heap);
  ((QSystemTrayIcon_Adaptor *)cls)->emitter_QSystemTrayIcon_activated_3745 (arg1);
}


// void QSystemTrayIcon::childEvent(QChildEvent *)

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
  ((QSystemTrayIcon_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QSystemTrayIcon_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QSystemTrayIcon::customEvent(QEvent *)

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
  ((QSystemTrayIcon_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QSystemTrayIcon_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QSystemTrayIcon::destroyed(QObject *)

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
  ((QSystemTrayIcon_Adaptor *)cls)->emitter_QSystemTrayIcon_destroyed_1302 (arg1);
}


// void QSystemTrayIcon::disconnectNotify(const char *signal)

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
  ((QSystemTrayIcon_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QSystemTrayIcon_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QSystemTrayIcon::event(QEvent *event)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QSystemTrayIcon_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QSystemTrayIcon_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QSystemTrayIcon::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QSystemTrayIcon_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QSystemTrayIcon_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// emitter void QSystemTrayIcon::messageClicked()

static void _init_emitter_messageClicked_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_messageClicked_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QSystemTrayIcon_Adaptor *)cls)->emitter_QSystemTrayIcon_messageClicked_0 ();
}


// exposed int QSystemTrayIcon::receivers(const char *signal)

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
  ret.write<int > ((int)((QSystemTrayIcon_Adaptor *)cls)->fp_QSystemTrayIcon_receivers_c1731 (arg1));
}


// exposed QObject *QSystemTrayIcon::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QSystemTrayIcon_Adaptor *)cls)->fp_QSystemTrayIcon_sender_c0 ());
}


// void QSystemTrayIcon::timerEvent(QTimerEvent *)

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
  ((QSystemTrayIcon_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QSystemTrayIcon_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QSystemTrayIcon> &qtdecl_QSystemTrayIcon ();

static gsi::Methods methods_QSystemTrayIcon_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSystemTrayIcon::QSystemTrayIcon(QObject *parent)\nThis method creates an object of class QSystemTrayIcon.", &_init_ctor_QSystemTrayIcon_Adaptor_1302, &_call_ctor_QSystemTrayIcon_Adaptor_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSystemTrayIcon::QSystemTrayIcon(const QIcon &icon, QObject *parent)\nThis method creates an object of class QSystemTrayIcon.", &_init_ctor_QSystemTrayIcon_Adaptor_2981, &_call_ctor_QSystemTrayIcon_Adaptor_2981);
  methods += new qt_gsi::GenericMethod ("emit_activated", "@brief Emitter for signal void QSystemTrayIcon::activated(QSystemTrayIcon::ActivationReason reason)\nCall this method to emit this signal.", false, &_init_emitter_activated_3745, &_call_emitter_activated_3745);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QSystemTrayIcon::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QSystemTrayIcon::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QSystemTrayIcon::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QSystemTrayIcon::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*event", "@brief Virtual method bool QSystemTrayIcon::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("*event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QSystemTrayIcon::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("emit_messageClicked", "@brief Emitter for signal void QSystemTrayIcon::messageClicked()\nCall this method to emit this signal.", false, &_init_emitter_messageClicked_0, &_call_emitter_messageClicked_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QSystemTrayIcon::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QSystemTrayIcon::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QSystemTrayIcon::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QSystemTrayIcon_Adaptor> decl_QSystemTrayIcon_Adaptor (qtdecl_QSystemTrayIcon (), "QtGui", "QSystemTrayIcon",
  methods_QSystemTrayIcon_Adaptor (),
  "@qt\n@brief Binding of QSystemTrayIcon");

}


//  Implementation of the enum wrapper class for QSystemTrayIcon::ActivationReason
namespace qt_gsi
{

static gsi::Enum<QSystemTrayIcon::ActivationReason> decl_QSystemTrayIcon_ActivationReason_Enum ("QtGui", "QSystemTrayIcon_ActivationReason",
    gsi::enum_const ("Unknown", QSystemTrayIcon::Unknown, "@brief Enum constant QSystemTrayIcon::Unknown") +
    gsi::enum_const ("Context", QSystemTrayIcon::Context, "@brief Enum constant QSystemTrayIcon::Context") +
    gsi::enum_const ("DoubleClick", QSystemTrayIcon::DoubleClick, "@brief Enum constant QSystemTrayIcon::DoubleClick") +
    gsi::enum_const ("Trigger", QSystemTrayIcon::Trigger, "@brief Enum constant QSystemTrayIcon::Trigger") +
    gsi::enum_const ("MiddleClick", QSystemTrayIcon::MiddleClick, "@brief Enum constant QSystemTrayIcon::MiddleClick"),
  "@qt\n@brief This class represents the QSystemTrayIcon::ActivationReason enum");

static gsi::QFlagsClass<QSystemTrayIcon::ActivationReason > decl_QSystemTrayIcon_ActivationReason_Enums ("QtGui", "QSystemTrayIcon_QFlags_ActivationReason",
  "@qt\n@brief This class represents the QFlags<QSystemTrayIcon::ActivationReason> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSystemTrayIcon> inject_QSystemTrayIcon_ActivationReason_Enum_in_parent (decl_QSystemTrayIcon_ActivationReason_Enum.defs ());
static gsi::ClassExt<QSystemTrayIcon> decl_QSystemTrayIcon_ActivationReason_Enum_as_child (decl_QSystemTrayIcon_ActivationReason_Enum, "ActivationReason");
static gsi::ClassExt<QSystemTrayIcon> decl_QSystemTrayIcon_ActivationReason_Enums_as_child (decl_QSystemTrayIcon_ActivationReason_Enums, "QFlags_ActivationReason");

}


//  Implementation of the enum wrapper class for QSystemTrayIcon::MessageIcon
namespace qt_gsi
{

static gsi::Enum<QSystemTrayIcon::MessageIcon> decl_QSystemTrayIcon_MessageIcon_Enum ("QtGui", "QSystemTrayIcon_MessageIcon",
    gsi::enum_const ("NoIcon", QSystemTrayIcon::NoIcon, "@brief Enum constant QSystemTrayIcon::NoIcon") +
    gsi::enum_const ("Information", QSystemTrayIcon::Information, "@brief Enum constant QSystemTrayIcon::Information") +
    gsi::enum_const ("Warning", QSystemTrayIcon::Warning, "@brief Enum constant QSystemTrayIcon::Warning") +
    gsi::enum_const ("Critical", QSystemTrayIcon::Critical, "@brief Enum constant QSystemTrayIcon::Critical"),
  "@qt\n@brief This class represents the QSystemTrayIcon::MessageIcon enum");

static gsi::QFlagsClass<QSystemTrayIcon::MessageIcon > decl_QSystemTrayIcon_MessageIcon_Enums ("QtGui", "QSystemTrayIcon_QFlags_MessageIcon",
  "@qt\n@brief This class represents the QFlags<QSystemTrayIcon::MessageIcon> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSystemTrayIcon> inject_QSystemTrayIcon_MessageIcon_Enum_in_parent (decl_QSystemTrayIcon_MessageIcon_Enum.defs ());
static gsi::ClassExt<QSystemTrayIcon> decl_QSystemTrayIcon_MessageIcon_Enum_as_child (decl_QSystemTrayIcon_MessageIcon_Enum, "MessageIcon");
static gsi::ClassExt<QSystemTrayIcon> decl_QSystemTrayIcon_MessageIcon_Enums_as_child (decl_QSystemTrayIcon_MessageIcon_Enums, "QFlags_MessageIcon");

}

