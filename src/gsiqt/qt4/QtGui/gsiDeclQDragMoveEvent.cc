
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
*  @file gsiDeclQDragMoveEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDragMoveEvent>
#include <QMimeData>
#include <QPoint>
#include <QRect>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDragMoveEvent

// void QDragMoveEvent::accept()


static void _init_f_accept_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_accept_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDragMoveEvent *)cls)->accept ();
}


// void QDragMoveEvent::accept(const QRect &r)


static void _init_f_accept_1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_accept_1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDragMoveEvent *)cls)->accept (arg1);
}


// QRect QDragMoveEvent::answerRect()


static void _init_f_answerRect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_answerRect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QDragMoveEvent *)cls)->answerRect ());
}


// void QDragMoveEvent::ignore()


static void _init_f_ignore_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_ignore_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDragMoveEvent *)cls)->ignore ();
}


// void QDragMoveEvent::ignore(const QRect &r)


static void _init_f_ignore_1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_ignore_1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDragMoveEvent *)cls)->ignore (arg1);
}


namespace gsi
{

static gsi::Methods methods_QDragMoveEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("accept", "@brief Method void QDragMoveEvent::accept()\n", false, &_init_f_accept_0, &_call_f_accept_0);
  methods += new qt_gsi::GenericMethod ("accept", "@brief Method void QDragMoveEvent::accept(const QRect &r)\n", false, &_init_f_accept_1792, &_call_f_accept_1792);
  methods += new qt_gsi::GenericMethod ("answerRect", "@brief Method QRect QDragMoveEvent::answerRect()\n", true, &_init_f_answerRect_c0, &_call_f_answerRect_c0);
  methods += new qt_gsi::GenericMethod ("ignore", "@brief Method void QDragMoveEvent::ignore()\n", false, &_init_f_ignore_0, &_call_f_ignore_0);
  methods += new qt_gsi::GenericMethod ("ignore", "@brief Method void QDragMoveEvent::ignore(const QRect &r)\n", false, &_init_f_ignore_1792, &_call_f_ignore_1792);
  return methods;
}

gsi::Class<QDropEvent> &qtdecl_QDropEvent ();

gsi::Class<QDragMoveEvent> decl_QDragMoveEvent (qtdecl_QDropEvent (), "QtGui", "QDragMoveEvent_Native",
  methods_QDragMoveEvent (),
  "@hide\n@alias QDragMoveEvent");

GSI_QTGUI_PUBLIC gsi::Class<QDragMoveEvent> &qtdecl_QDragMoveEvent () { return decl_QDragMoveEvent; }

}


class QDragMoveEvent_Adaptor : public QDragMoveEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QDragMoveEvent_Adaptor();

  //  [adaptor ctor] QDragMoveEvent::QDragMoveEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type)
  QDragMoveEvent_Adaptor(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QDragMoveEvent(pos, actions, data, buttons, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QDragMoveEvent::QDragMoveEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type)
  QDragMoveEvent_Adaptor(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type) : QDragMoveEvent(pos, actions, data, buttons, modifiers, type)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QByteArray QDragMoveEvent::encodedData(const char *)
  QByteArray cbs_encodedData_c1731_0(const char *arg1) const
  {
    return QDragMoveEvent::encodedData(arg1);
  }

  virtual QByteArray encodedData(const char *arg1) const
  {
    if (cb_encodedData_c1731_0.can_issue()) {
      return cb_encodedData_c1731_0.issue<QDragMoveEvent_Adaptor, QByteArray, const char *>(&QDragMoveEvent_Adaptor::cbs_encodedData_c1731_0, arg1);
    } else {
      return QDragMoveEvent::encodedData(arg1);
    }
  }

  //  [adaptor impl] const char *QDragMoveEvent::format(int n)
  const char * cbs_format_c767_1(int n) const
  {
    return QDragMoveEvent::format(n);
  }

  virtual const char * format(int n) const
  {
    if (cb_format_c767_1.can_issue()) {
      return cb_format_c767_1.issue<QDragMoveEvent_Adaptor, const char *, int>(&QDragMoveEvent_Adaptor::cbs_format_c767_1, n);
    } else {
      return QDragMoveEvent::format(n);
    }
  }

  //  [adaptor impl] bool QDragMoveEvent::provides(const char *)
  bool cbs_provides_c1731_0(const char *arg1) const
  {
    return QDragMoveEvent::provides(arg1);
  }

  virtual bool provides(const char *arg1) const
  {
    if (cb_provides_c1731_0.can_issue()) {
      return cb_provides_c1731_0.issue<QDragMoveEvent_Adaptor, bool, const char *>(&QDragMoveEvent_Adaptor::cbs_provides_c1731_0, arg1);
    } else {
      return QDragMoveEvent::provides(arg1);
    }
  }

  gsi::Callback cb_encodedData_c1731_0;
  gsi::Callback cb_format_c767_1;
  gsi::Callback cb_provides_c1731_0;
};

QDragMoveEvent_Adaptor::~QDragMoveEvent_Adaptor() { }

//  Constructor QDragMoveEvent::QDragMoveEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type) (adaptor class)

static void _init_ctor_QDragMoveEvent_Adaptor_13244 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPoint & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("actions");
  decl->add_arg<QFlags<Qt::DropAction> > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("data");
  decl->add_arg<const QMimeData * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("buttons");
  decl->add_arg<QFlags<Qt::MouseButton> > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("type", true, "QEvent::DragMove");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_5);
  decl->set_return_new<QDragMoveEvent_Adaptor> ();
}

static void _call_ctor_QDragMoveEvent_Adaptor_13244 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  QFlags<Qt::DropAction> arg2 = gsi::arg_reader<QFlags<Qt::DropAction> >() (args, heap);
  const QMimeData *arg3 = gsi::arg_reader<const QMimeData * >() (args, heap);
  QFlags<Qt::MouseButton> arg4 = gsi::arg_reader<QFlags<Qt::MouseButton> >() (args, heap);
  QFlags<Qt::KeyboardModifier> arg5 = gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap);
  const qt_gsi::Converter<QEvent::Type>::target_type & arg6 = args ? gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QEvent::Type>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QEvent::Type>(heap, QEvent::DragMove), heap);
  ret.write<QDragMoveEvent_Adaptor *> (new QDragMoveEvent_Adaptor (arg1, arg2, arg3, arg4, arg5, qt_gsi::QtToCppAdaptor<QEvent::Type>(arg6).cref()));
}


// QByteArray QDragMoveEvent::encodedData(const char *)

static void _init_cbs_encodedData_c1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_cbs_encodedData_c1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<QByteArray > ((QByteArray)((QDragMoveEvent_Adaptor *)cls)->cbs_encodedData_c1731_0 (arg1));
}

static void _set_callback_cbs_encodedData_c1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QDragMoveEvent_Adaptor *)cls)->cb_encodedData_c1731_0 = cb;
}


// const char *QDragMoveEvent::format(int n)

static void _init_cbs_format_c767_1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<int > (argspec_0);
  decl->set_return<const char * > ();
}

static void _call_cbs_format_c767_1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<const char * > ((const char *)((QDragMoveEvent_Adaptor *)cls)->cbs_format_c767_1 (arg1));
}

static void _set_callback_cbs_format_c767_1 (void *cls, const gsi::Callback &cb)
{
  ((QDragMoveEvent_Adaptor *)cls)->cb_format_c767_1 = cb;
}


// bool QDragMoveEvent::provides(const char *)

static void _init_cbs_provides_c1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_provides_c1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<bool > ((bool)((QDragMoveEvent_Adaptor *)cls)->cbs_provides_c1731_0 (arg1));
}

static void _set_callback_cbs_provides_c1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QDragMoveEvent_Adaptor *)cls)->cb_provides_c1731_0 = cb;
}


namespace gsi
{

gsi::Class<QDragMoveEvent> &qtdecl_QDragMoveEvent ();

static gsi::Methods methods_QDragMoveEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDragMoveEvent::QDragMoveEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type)\nThis method creates an object of class QDragMoveEvent.", &_init_ctor_QDragMoveEvent_Adaptor_13244, &_call_ctor_QDragMoveEvent_Adaptor_13244);
  methods += new qt_gsi::GenericMethod ("encodedData", "@brief Virtual method QByteArray QDragMoveEvent::encodedData(const char *)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_encodedData_c1731_0, &_call_cbs_encodedData_c1731_0);
  methods += new qt_gsi::GenericMethod ("encodedData", "@hide", true, &_init_cbs_encodedData_c1731_0, &_call_cbs_encodedData_c1731_0, &_set_callback_cbs_encodedData_c1731_0);
  methods += new qt_gsi::GenericMethod ("format", "@brief Virtual method const char *QDragMoveEvent::format(int n)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_format_c767_1, &_call_cbs_format_c767_1);
  methods += new qt_gsi::GenericMethod ("format", "@hide", true, &_init_cbs_format_c767_1, &_call_cbs_format_c767_1, &_set_callback_cbs_format_c767_1);
  methods += new qt_gsi::GenericMethod ("provides", "@brief Virtual method bool QDragMoveEvent::provides(const char *)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_provides_c1731_0, &_call_cbs_provides_c1731_0);
  methods += new qt_gsi::GenericMethod ("provides", "@hide", true, &_init_cbs_provides_c1731_0, &_call_cbs_provides_c1731_0, &_set_callback_cbs_provides_c1731_0);
  return methods;
}

gsi::Class<QDragMoveEvent_Adaptor> decl_QDragMoveEvent_Adaptor (qtdecl_QDragMoveEvent (), "QtGui", "QDragMoveEvent",
  methods_QDragMoveEvent_Adaptor (),
  "@qt\n@brief Binding of QDragMoveEvent");

}

