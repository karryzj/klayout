
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
*  @file gsiDeclQWheelEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QWheelEvent>
#include <QEvent>
#include <QPoint>
#include <QPointF>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QWheelEvent

// QPoint QWheelEvent::angleDelta()


static void _init_f_angleDelta_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_angleDelta_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QWheelEvent *)cls)->angleDelta ());
}


// QFlags<Qt::MouseButton> QWheelEvent::buttons()


static void _init_f_buttons_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::MouseButton> > ();
}

static void _call_f_buttons_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::MouseButton> > ((QFlags<Qt::MouseButton>)((QWheelEvent *)cls)->buttons ());
}


// int QWheelEvent::delta()


static void _init_f_delta_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_delta_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QWheelEvent *)cls)->delta ());
}


// QPoint QWheelEvent::globalPos()


static void _init_f_globalPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_globalPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QWheelEvent *)cls)->globalPos ());
}


// const QPointF &QWheelEvent::globalPosF()


static void _init_f_globalPosF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPointF & > ();
}

static void _call_f_globalPosF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPointF & > ((const QPointF &)((QWheelEvent *)cls)->globalPosF ());
}


// int QWheelEvent::globalX()


static void _init_f_globalX_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_globalX_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QWheelEvent *)cls)->globalX ());
}


// int QWheelEvent::globalY()


static void _init_f_globalY_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_globalY_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QWheelEvent *)cls)->globalY ());
}


// Qt::Orientation QWheelEvent::orientation()


static void _init_f_orientation_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::Orientation>::target_type > ();
}

static void _call_f_orientation_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::Orientation>::target_type > ((qt_gsi::Converter<Qt::Orientation>::target_type)qt_gsi::CppToQtAdaptor<Qt::Orientation>(((QWheelEvent *)cls)->orientation ()));
}


// Qt::ScrollPhase QWheelEvent::phase()


static void _init_f_phase_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::ScrollPhase>::target_type > ();
}

static void _call_f_phase_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::ScrollPhase>::target_type > ((qt_gsi::Converter<Qt::ScrollPhase>::target_type)qt_gsi::CppToQtAdaptor<Qt::ScrollPhase>(((QWheelEvent *)cls)->phase ()));
}


// QPoint QWheelEvent::pixelDelta()


static void _init_f_pixelDelta_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_pixelDelta_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QWheelEvent *)cls)->pixelDelta ());
}


// QPoint QWheelEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QWheelEvent *)cls)->pos ());
}


// const QPointF &QWheelEvent::posF()


static void _init_f_posF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPointF & > ();
}

static void _call_f_posF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPointF & > ((const QPointF &)((QWheelEvent *)cls)->posF ());
}


// Qt::MouseEventSource QWheelEvent::source()


static void _init_f_source_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::MouseEventSource>::target_type > ();
}

static void _call_f_source_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::MouseEventSource>::target_type > ((qt_gsi::Converter<Qt::MouseEventSource>::target_type)qt_gsi::CppToQtAdaptor<Qt::MouseEventSource>(((QWheelEvent *)cls)->source ()));
}


// int QWheelEvent::x()


static void _init_f_x_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_x_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QWheelEvent *)cls)->x ());
}


// int QWheelEvent::y()


static void _init_f_y_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_y_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QWheelEvent *)cls)->y ());
}


namespace gsi
{

static gsi::Methods methods_QWheelEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("angleDelta", "@brief Method QPoint QWheelEvent::angleDelta()\n", true, &_init_f_angleDelta_c0, &_call_f_angleDelta_c0);
  methods += new qt_gsi::GenericMethod ("buttons", "@brief Method QFlags<Qt::MouseButton> QWheelEvent::buttons()\n", true, &_init_f_buttons_c0, &_call_f_buttons_c0);
  methods += new qt_gsi::GenericMethod ("delta", "@brief Method int QWheelEvent::delta()\n", true, &_init_f_delta_c0, &_call_f_delta_c0);
  methods += new qt_gsi::GenericMethod ("globalPos", "@brief Method QPoint QWheelEvent::globalPos()\n", true, &_init_f_globalPos_c0, &_call_f_globalPos_c0);
  methods += new qt_gsi::GenericMethod ("globalPosF", "@brief Method const QPointF &QWheelEvent::globalPosF()\n", true, &_init_f_globalPosF_c0, &_call_f_globalPosF_c0);
  methods += new qt_gsi::GenericMethod ("globalX", "@brief Method int QWheelEvent::globalX()\n", true, &_init_f_globalX_c0, &_call_f_globalX_c0);
  methods += new qt_gsi::GenericMethod ("globalY", "@brief Method int QWheelEvent::globalY()\n", true, &_init_f_globalY_c0, &_call_f_globalY_c0);
  methods += new qt_gsi::GenericMethod ("orientation", "@brief Method Qt::Orientation QWheelEvent::orientation()\n", true, &_init_f_orientation_c0, &_call_f_orientation_c0);
  methods += new qt_gsi::GenericMethod ("phase", "@brief Method Qt::ScrollPhase QWheelEvent::phase()\n", true, &_init_f_phase_c0, &_call_f_phase_c0);
  methods += new qt_gsi::GenericMethod ("pixelDelta", "@brief Method QPoint QWheelEvent::pixelDelta()\n", true, &_init_f_pixelDelta_c0, &_call_f_pixelDelta_c0);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method QPoint QWheelEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod ("posF", "@brief Method const QPointF &QWheelEvent::posF()\n", true, &_init_f_posF_c0, &_call_f_posF_c0);
  methods += new qt_gsi::GenericMethod ("source", "@brief Method Qt::MouseEventSource QWheelEvent::source()\n", true, &_init_f_source_c0, &_call_f_source_c0);
  methods += new qt_gsi::GenericMethod ("x", "@brief Method int QWheelEvent::x()\n", true, &_init_f_x_c0, &_call_f_x_c0);
  methods += new qt_gsi::GenericMethod ("y", "@brief Method int QWheelEvent::y()\n", true, &_init_f_y_c0, &_call_f_y_c0);
  return methods;
}

gsi::Class<QInputEvent> &qtdecl_QInputEvent ();

gsi::Class<QWheelEvent> decl_QWheelEvent (qtdecl_QInputEvent (), "QtGui", "QWheelEvent_Native",
  methods_QWheelEvent (),
  "@hide\n@alias QWheelEvent");

GSI_QTGUI_PUBLIC gsi::Class<QWheelEvent> &qtdecl_QWheelEvent () { return decl_QWheelEvent; }

}


class QWheelEvent_Adaptor : public QWheelEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QWheelEvent_Adaptor();

  //  [adaptor ctor] QWheelEvent::QWheelEvent(const QPointF &pos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient)
  QWheelEvent_Adaptor(const QPointF &pos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QWheelEvent(pos, delta, buttons, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QWheelEvent::QWheelEvent(const QPointF &pos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient)
  QWheelEvent_Adaptor(const QPointF &pos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient) : QWheelEvent(pos, delta, buttons, modifiers, orient)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient)
  QWheelEvent_Adaptor(const QPointF &pos, const QPointF &globalPos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QWheelEvent(pos, globalPos, delta, buttons, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient)
  QWheelEvent_Adaptor(const QPointF &pos, const QPointF &globalPos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient) : QWheelEvent(pos, globalPos, delta, buttons, modifiers, orient)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)
  QWheelEvent_Adaptor(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase)
  QWheelEvent_Adaptor(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source)
  QWheelEvent_Adaptor(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QWheelEvent_Adaptor::~QWheelEvent_Adaptor() { }

//  Constructor QWheelEvent::QWheelEvent(const QPointF &pos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient) (adaptor class)

static void _init_ctor_QWheelEvent_Adaptor_9913 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("delta");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("buttons");
  decl->add_arg<QFlags<Qt::MouseButton> > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("orient", true, "Qt::Vertical");
  decl->add_arg<const qt_gsi::Converter<Qt::Orientation>::target_type & > (argspec_4);
  decl->set_return_new<QWheelEvent_Adaptor> ();
}

static void _call_ctor_QWheelEvent_Adaptor_9913 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  QFlags<Qt::MouseButton> arg3 = gsi::arg_reader<QFlags<Qt::MouseButton> >() (args, heap);
  QFlags<Qt::KeyboardModifier> arg4 = gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap);
  const qt_gsi::Converter<Qt::Orientation>::target_type & arg5 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::Orientation>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::Orientation>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::Orientation>(heap, Qt::Vertical), heap);
  ret.write<QWheelEvent_Adaptor *> (new QWheelEvent_Adaptor (arg1, arg2, arg3, arg4, qt_gsi::QtToCppAdaptor<Qt::Orientation>(arg5).cref()));
}


//  Constructor QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient) (adaptor class)

static void _init_ctor_QWheelEvent_Adaptor_11791 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("globalPos");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("delta");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("buttons");
  decl->add_arg<QFlags<Qt::MouseButton> > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("orient", true, "Qt::Vertical");
  decl->add_arg<const qt_gsi::Converter<Qt::Orientation>::target_type & > (argspec_5);
  decl->set_return_new<QWheelEvent_Adaptor> ();
}

static void _call_ctor_QWheelEvent_Adaptor_11791 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  QFlags<Qt::MouseButton> arg4 = gsi::arg_reader<QFlags<Qt::MouseButton> >() (args, heap);
  QFlags<Qt::KeyboardModifier> arg5 = gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap);
  const qt_gsi::Converter<Qt::Orientation>::target_type & arg6 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::Orientation>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::Orientation>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::Orientation>(heap, Qt::Vertical), heap);
  ret.write<QWheelEvent_Adaptor *> (new QWheelEvent_Adaptor (arg1, arg2, arg3, arg4, arg5, qt_gsi::QtToCppAdaptor<Qt::Orientation>(arg6).cref()));
}


//  Constructor QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) (adaptor class)

static void _init_ctor_QWheelEvent_Adaptor_13653 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("globalPos");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("pixelDelta");
  decl->add_arg<QPoint > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("angleDelta");
  decl->add_arg<QPoint > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("qt4Delta");
  decl->add_arg<int > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("qt4Orientation");
  decl->add_arg<const qt_gsi::Converter<Qt::Orientation>::target_type & > (argspec_5);
  static gsi::ArgSpecBase argspec_6 ("buttons");
  decl->add_arg<QFlags<Qt::MouseButton> > (argspec_6);
  static gsi::ArgSpecBase argspec_7 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_7);
  decl->set_return_new<QWheelEvent_Adaptor> ();
}

static void _call_ctor_QWheelEvent_Adaptor_13653 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  QPoint arg3 = gsi::arg_reader<QPoint >() (args, heap);
  QPoint arg4 = gsi::arg_reader<QPoint >() (args, heap);
  int arg5 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<Qt::Orientation>::target_type & arg6 = gsi::arg_reader<const qt_gsi::Converter<Qt::Orientation>::target_type & >() (args, heap);
  QFlags<Qt::MouseButton> arg7 = gsi::arg_reader<QFlags<Qt::MouseButton> >() (args, heap);
  QFlags<Qt::KeyboardModifier> arg8 = gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap);
  ret.write<QWheelEvent_Adaptor *> (new QWheelEvent_Adaptor (arg1, arg2, arg3, arg4, arg5, qt_gsi::QtToCppAdaptor<Qt::Orientation>(arg6).cref(), arg7, arg8));
}


//  Constructor QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase) (adaptor class)

static void _init_ctor_QWheelEvent_Adaptor_15414 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("globalPos");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("pixelDelta");
  decl->add_arg<QPoint > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("angleDelta");
  decl->add_arg<QPoint > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("qt4Delta");
  decl->add_arg<int > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("qt4Orientation");
  decl->add_arg<const qt_gsi::Converter<Qt::Orientation>::target_type & > (argspec_5);
  static gsi::ArgSpecBase argspec_6 ("buttons");
  decl->add_arg<QFlags<Qt::MouseButton> > (argspec_6);
  static gsi::ArgSpecBase argspec_7 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_7);
  static gsi::ArgSpecBase argspec_8 ("phase");
  decl->add_arg<const qt_gsi::Converter<Qt::ScrollPhase>::target_type & > (argspec_8);
  decl->set_return_new<QWheelEvent_Adaptor> ();
}

static void _call_ctor_QWheelEvent_Adaptor_15414 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  QPoint arg3 = gsi::arg_reader<QPoint >() (args, heap);
  QPoint arg4 = gsi::arg_reader<QPoint >() (args, heap);
  int arg5 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<Qt::Orientation>::target_type & arg6 = gsi::arg_reader<const qt_gsi::Converter<Qt::Orientation>::target_type & >() (args, heap);
  QFlags<Qt::MouseButton> arg7 = gsi::arg_reader<QFlags<Qt::MouseButton> >() (args, heap);
  QFlags<Qt::KeyboardModifier> arg8 = gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap);
  const qt_gsi::Converter<Qt::ScrollPhase>::target_type & arg9 = gsi::arg_reader<const qt_gsi::Converter<Qt::ScrollPhase>::target_type & >() (args, heap);
  ret.write<QWheelEvent_Adaptor *> (new QWheelEvent_Adaptor (arg1, arg2, arg3, arg4, arg5, qt_gsi::QtToCppAdaptor<Qt::Orientation>(arg6).cref(), arg7, arg8, qt_gsi::QtToCppAdaptor<Qt::ScrollPhase>(arg9).cref()));
}


//  Constructor QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source) (adaptor class)

static void _init_ctor_QWheelEvent_Adaptor_17715 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("globalPos");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("pixelDelta");
  decl->add_arg<QPoint > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("angleDelta");
  decl->add_arg<QPoint > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("qt4Delta");
  decl->add_arg<int > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("qt4Orientation");
  decl->add_arg<const qt_gsi::Converter<Qt::Orientation>::target_type & > (argspec_5);
  static gsi::ArgSpecBase argspec_6 ("buttons");
  decl->add_arg<QFlags<Qt::MouseButton> > (argspec_6);
  static gsi::ArgSpecBase argspec_7 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_7);
  static gsi::ArgSpecBase argspec_8 ("phase");
  decl->add_arg<const qt_gsi::Converter<Qt::ScrollPhase>::target_type & > (argspec_8);
  static gsi::ArgSpecBase argspec_9 ("source");
  decl->add_arg<const qt_gsi::Converter<Qt::MouseEventSource>::target_type & > (argspec_9);
  decl->set_return_new<QWheelEvent_Adaptor> ();
}

static void _call_ctor_QWheelEvent_Adaptor_17715 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  QPoint arg3 = gsi::arg_reader<QPoint >() (args, heap);
  QPoint arg4 = gsi::arg_reader<QPoint >() (args, heap);
  int arg5 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<Qt::Orientation>::target_type & arg6 = gsi::arg_reader<const qt_gsi::Converter<Qt::Orientation>::target_type & >() (args, heap);
  QFlags<Qt::MouseButton> arg7 = gsi::arg_reader<QFlags<Qt::MouseButton> >() (args, heap);
  QFlags<Qt::KeyboardModifier> arg8 = gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap);
  const qt_gsi::Converter<Qt::ScrollPhase>::target_type & arg9 = gsi::arg_reader<const qt_gsi::Converter<Qt::ScrollPhase>::target_type & >() (args, heap);
  const qt_gsi::Converter<Qt::MouseEventSource>::target_type & arg10 = gsi::arg_reader<const qt_gsi::Converter<Qt::MouseEventSource>::target_type & >() (args, heap);
  ret.write<QWheelEvent_Adaptor *> (new QWheelEvent_Adaptor (arg1, arg2, arg3, arg4, arg5, qt_gsi::QtToCppAdaptor<Qt::Orientation>(arg6).cref(), arg7, arg8, qt_gsi::QtToCppAdaptor<Qt::ScrollPhase>(arg9).cref(), qt_gsi::QtToCppAdaptor<Qt::MouseEventSource>(arg10).cref()));
}


namespace gsi
{

gsi::Class<QWheelEvent> &qtdecl_QWheelEvent ();

static gsi::Methods methods_QWheelEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QWheelEvent::QWheelEvent(const QPointF &pos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient)\nThis method creates an object of class QWheelEvent.", &_init_ctor_QWheelEvent_Adaptor_9913, &_call_ctor_QWheelEvent_Adaptor_9913);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, int delta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::Orientation orient)\nThis method creates an object of class QWheelEvent.", &_init_ctor_QWheelEvent_Adaptor_11791, &_call_ctor_QWheelEvent_Adaptor_11791);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)\nThis method creates an object of class QWheelEvent.", &_init_ctor_QWheelEvent_Adaptor_13653, &_call_ctor_QWheelEvent_Adaptor_13653);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase)\nThis method creates an object of class QWheelEvent.", &_init_ctor_QWheelEvent_Adaptor_15414, &_call_ctor_QWheelEvent_Adaptor_15414);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, int qt4Delta, Qt::Orientation qt4Orientation, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, Qt::MouseEventSource source)\nThis method creates an object of class QWheelEvent.", &_init_ctor_QWheelEvent_Adaptor_17715, &_call_ctor_QWheelEvent_Adaptor_17715);
  return methods;
}

gsi::Class<QWheelEvent_Adaptor> decl_QWheelEvent_Adaptor (qtdecl_QWheelEvent (), "QtGui", "QWheelEvent",
  methods_QWheelEvent_Adaptor (),
  "@qt\n@brief Binding of QWheelEvent");

}

