
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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
*  @file gsiDeclQGraphicsSceneHoverEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGraphicsSceneHoverEvent>
#include <QPoint>
#include <QPointF>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGraphicsSceneHoverEvent

// QPointF QGraphicsSceneHoverEvent::lastPos()


static void _init_f_lastPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_lastPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QGraphicsSceneHoverEvent *)cls)->lastPos ());
}


// QPointF QGraphicsSceneHoverEvent::lastScenePos()


static void _init_f_lastScenePos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_lastScenePos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QGraphicsSceneHoverEvent *)cls)->lastScenePos ());
}


// QPoint QGraphicsSceneHoverEvent::lastScreenPos()


static void _init_f_lastScreenPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_lastScreenPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QGraphicsSceneHoverEvent *)cls)->lastScreenPos ());
}


// QFlags<Qt::KeyboardModifier> QGraphicsSceneHoverEvent::modifiers()


static void _init_f_modifiers_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::KeyboardModifier> > ();
}

static void _call_f_modifiers_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::KeyboardModifier> > ((QFlags<Qt::KeyboardModifier>)((QGraphicsSceneHoverEvent *)cls)->modifiers ());
}


// QPointF QGraphicsSceneHoverEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QGraphicsSceneHoverEvent *)cls)->pos ());
}


// QPointF QGraphicsSceneHoverEvent::scenePos()


static void _init_f_scenePos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_scenePos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QGraphicsSceneHoverEvent *)cls)->scenePos ());
}


// QPoint QGraphicsSceneHoverEvent::screenPos()


static void _init_f_screenPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_screenPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QGraphicsSceneHoverEvent *)cls)->screenPos ());
}


// void QGraphicsSceneHoverEvent::setLastPos(const QPointF &pos)


static void _init_f_setLastPos_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLastPos_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneHoverEvent *)cls)->setLastPos (arg1);
}


// void QGraphicsSceneHoverEvent::setLastScenePos(const QPointF &pos)


static void _init_f_setLastScenePos_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLastScenePos_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneHoverEvent *)cls)->setLastScenePos (arg1);
}


// void QGraphicsSceneHoverEvent::setLastScreenPos(const QPoint &pos)


static void _init_f_setLastScreenPos_1916 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLastScreenPos_1916 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneHoverEvent *)cls)->setLastScreenPos (arg1);
}


// void QGraphicsSceneHoverEvent::setModifiers(QFlags<Qt::KeyboardModifier> modifiers)


static void _init_f_setModifiers_3077 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setModifiers_3077 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::KeyboardModifier> arg1 = gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneHoverEvent *)cls)->setModifiers (arg1);
}


// void QGraphicsSceneHoverEvent::setPos(const QPointF &pos)


static void _init_f_setPos_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPos_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneHoverEvent *)cls)->setPos (arg1);
}


// void QGraphicsSceneHoverEvent::setScenePos(const QPointF &pos)


static void _init_f_setScenePos_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setScenePos_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneHoverEvent *)cls)->setScenePos (arg1);
}


// void QGraphicsSceneHoverEvent::setScreenPos(const QPoint &pos)


static void _init_f_setScreenPos_1916 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setScreenPos_1916 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneHoverEvent *)cls)->setScreenPos (arg1);
}


namespace gsi
{

static gsi::Methods methods_QGraphicsSceneHoverEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod (":lastPos", "@brief Method QPointF QGraphicsSceneHoverEvent::lastPos()\n", true, &_init_f_lastPos_c0, &_call_f_lastPos_c0);
  methods += new qt_gsi::GenericMethod (":lastScenePos", "@brief Method QPointF QGraphicsSceneHoverEvent::lastScenePos()\n", true, &_init_f_lastScenePos_c0, &_call_f_lastScenePos_c0);
  methods += new qt_gsi::GenericMethod (":lastScreenPos", "@brief Method QPoint QGraphicsSceneHoverEvent::lastScreenPos()\n", true, &_init_f_lastScreenPos_c0, &_call_f_lastScreenPos_c0);
  methods += new qt_gsi::GenericMethod (":modifiers", "@brief Method QFlags<Qt::KeyboardModifier> QGraphicsSceneHoverEvent::modifiers()\n", true, &_init_f_modifiers_c0, &_call_f_modifiers_c0);
  methods += new qt_gsi::GenericMethod (":pos", "@brief Method QPointF QGraphicsSceneHoverEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod (":scenePos", "@brief Method QPointF QGraphicsSceneHoverEvent::scenePos()\n", true, &_init_f_scenePos_c0, &_call_f_scenePos_c0);
  methods += new qt_gsi::GenericMethod (":screenPos", "@brief Method QPoint QGraphicsSceneHoverEvent::screenPos()\n", true, &_init_f_screenPos_c0, &_call_f_screenPos_c0);
  methods += new qt_gsi::GenericMethod ("setLastPos|lastPos=", "@brief Method void QGraphicsSceneHoverEvent::setLastPos(const QPointF &pos)\n", false, &_init_f_setLastPos_1986, &_call_f_setLastPos_1986);
  methods += new qt_gsi::GenericMethod ("setLastScenePos|lastScenePos=", "@brief Method void QGraphicsSceneHoverEvent::setLastScenePos(const QPointF &pos)\n", false, &_init_f_setLastScenePos_1986, &_call_f_setLastScenePos_1986);
  methods += new qt_gsi::GenericMethod ("setLastScreenPos|lastScreenPos=", "@brief Method void QGraphicsSceneHoverEvent::setLastScreenPos(const QPoint &pos)\n", false, &_init_f_setLastScreenPos_1916, &_call_f_setLastScreenPos_1916);
  methods += new qt_gsi::GenericMethod ("setModifiers|modifiers=", "@brief Method void QGraphicsSceneHoverEvent::setModifiers(QFlags<Qt::KeyboardModifier> modifiers)\n", false, &_init_f_setModifiers_3077, &_call_f_setModifiers_3077);
  methods += new qt_gsi::GenericMethod ("setPos|pos=", "@brief Method void QGraphicsSceneHoverEvent::setPos(const QPointF &pos)\n", false, &_init_f_setPos_1986, &_call_f_setPos_1986);
  methods += new qt_gsi::GenericMethod ("setScenePos|scenePos=", "@brief Method void QGraphicsSceneHoverEvent::setScenePos(const QPointF &pos)\n", false, &_init_f_setScenePos_1986, &_call_f_setScenePos_1986);
  methods += new qt_gsi::GenericMethod ("setScreenPos|screenPos=", "@brief Method void QGraphicsSceneHoverEvent::setScreenPos(const QPoint &pos)\n", false, &_init_f_setScreenPos_1916, &_call_f_setScreenPos_1916);
  return methods;
}

gsi::Class<QGraphicsSceneEvent> &qtdecl_QGraphicsSceneEvent ();

gsi::Class<QGraphicsSceneHoverEvent> decl_QGraphicsSceneHoverEvent (qtdecl_QGraphicsSceneEvent (), "QtGui", "QGraphicsSceneHoverEvent_Native",
  methods_QGraphicsSceneHoverEvent (),
  "@hide\n@alias QGraphicsSceneHoverEvent");

GSI_QTGUI_PUBLIC gsi::Class<QGraphicsSceneHoverEvent> &qtdecl_QGraphicsSceneHoverEvent () { return decl_QGraphicsSceneHoverEvent; }

}


class QGraphicsSceneHoverEvent_Adaptor : public QGraphicsSceneHoverEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QGraphicsSceneHoverEvent_Adaptor();

  //  [adaptor ctor] QGraphicsSceneHoverEvent::QGraphicsSceneHoverEvent(QEvent::Type type)
  QGraphicsSceneHoverEvent_Adaptor() : QGraphicsSceneHoverEvent()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QGraphicsSceneHoverEvent::QGraphicsSceneHoverEvent(QEvent::Type type)
  QGraphicsSceneHoverEvent_Adaptor(QEvent::Type type) : QGraphicsSceneHoverEvent(type)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QGraphicsSceneHoverEvent_Adaptor::~QGraphicsSceneHoverEvent_Adaptor() { }

//  Constructor QGraphicsSceneHoverEvent::QGraphicsSceneHoverEvent(QEvent::Type type) (adaptor class)

static void _init_ctor_QGraphicsSceneHoverEvent_Adaptor_1565 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type", true, "QEvent::None");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  decl->set_return_new<QGraphicsSceneHoverEvent_Adaptor> ();
}

static void _call_ctor_QGraphicsSceneHoverEvent_Adaptor_1565 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QEvent::Type>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QEvent::Type>(heap, QEvent::None), heap);
  ret.write<QGraphicsSceneHoverEvent_Adaptor *> (new QGraphicsSceneHoverEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref()));
}


namespace gsi
{

gsi::Class<QGraphicsSceneHoverEvent> &qtdecl_QGraphicsSceneHoverEvent ();

static gsi::Methods methods_QGraphicsSceneHoverEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGraphicsSceneHoverEvent::QGraphicsSceneHoverEvent(QEvent::Type type)\nThis method creates an object of class QGraphicsSceneHoverEvent.", &_init_ctor_QGraphicsSceneHoverEvent_Adaptor_1565, &_call_ctor_QGraphicsSceneHoverEvent_Adaptor_1565);
  return methods;
}

gsi::Class<QGraphicsSceneHoverEvent_Adaptor> decl_QGraphicsSceneHoverEvent_Adaptor (qtdecl_QGraphicsSceneHoverEvent (), "QtGui", "QGraphicsSceneHoverEvent",
  methods_QGraphicsSceneHoverEvent_Adaptor (),
  "@qt\n@brief Binding of QGraphicsSceneHoverEvent");

}

