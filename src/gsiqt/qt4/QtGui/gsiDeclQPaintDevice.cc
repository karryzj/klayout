
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
*  @file gsiDeclQPaintDevice.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPaintDevice>
#include <QPaintEngine>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPaintDevice

// int QPaintDevice::colorCount()


static void _init_f_colorCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_colorCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPaintDevice *)cls)->colorCount ());
}


// int QPaintDevice::depth()


static void _init_f_depth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_depth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPaintDevice *)cls)->depth ());
}


// int QPaintDevice::height()


static void _init_f_height_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_height_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPaintDevice *)cls)->height ());
}


// int QPaintDevice::heightMM()


static void _init_f_heightMM_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_heightMM_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPaintDevice *)cls)->heightMM ());
}


// int QPaintDevice::logicalDpiX()


static void _init_f_logicalDpiX_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_logicalDpiX_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPaintDevice *)cls)->logicalDpiX ());
}


// int QPaintDevice::logicalDpiY()


static void _init_f_logicalDpiY_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_logicalDpiY_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPaintDevice *)cls)->logicalDpiY ());
}


// int QPaintDevice::numColors()


static void _init_f_numColors_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_numColors_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPaintDevice *)cls)->numColors ());
}


// QPaintEngine *QPaintDevice::paintEngine()


static void _init_f_paintEngine_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPaintEngine * > ();
}

static void _call_f_paintEngine_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPaintEngine * > ((QPaintEngine *)((QPaintDevice *)cls)->paintEngine ());
}


// bool QPaintDevice::paintingActive()


static void _init_f_paintingActive_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_paintingActive_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPaintDevice *)cls)->paintingActive ());
}


// int QPaintDevice::physicalDpiX()


static void _init_f_physicalDpiX_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_physicalDpiX_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPaintDevice *)cls)->physicalDpiX ());
}


// int QPaintDevice::physicalDpiY()


static void _init_f_physicalDpiY_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_physicalDpiY_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPaintDevice *)cls)->physicalDpiY ());
}


// int QPaintDevice::width()


static void _init_f_width_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_width_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPaintDevice *)cls)->width ());
}


// int QPaintDevice::widthMM()


static void _init_f_widthMM_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_widthMM_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPaintDevice *)cls)->widthMM ());
}


namespace gsi
{

static gsi::Methods methods_QPaintDevice () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("colorCount", "@brief Method int QPaintDevice::colorCount()\n", true, &_init_f_colorCount_c0, &_call_f_colorCount_c0);
  methods += new qt_gsi::GenericMethod ("depth", "@brief Method int QPaintDevice::depth()\n", true, &_init_f_depth_c0, &_call_f_depth_c0);
  methods += new qt_gsi::GenericMethod ("height", "@brief Method int QPaintDevice::height()\n", true, &_init_f_height_c0, &_call_f_height_c0);
  methods += new qt_gsi::GenericMethod ("heightMM", "@brief Method int QPaintDevice::heightMM()\n", true, &_init_f_heightMM_c0, &_call_f_heightMM_c0);
  methods += new qt_gsi::GenericMethod ("logicalDpiX", "@brief Method int QPaintDevice::logicalDpiX()\n", true, &_init_f_logicalDpiX_c0, &_call_f_logicalDpiX_c0);
  methods += new qt_gsi::GenericMethod ("logicalDpiY", "@brief Method int QPaintDevice::logicalDpiY()\n", true, &_init_f_logicalDpiY_c0, &_call_f_logicalDpiY_c0);
  methods += new qt_gsi::GenericMethod ("numColors", "@brief Method int QPaintDevice::numColors()\n", true, &_init_f_numColors_c0, &_call_f_numColors_c0);
  methods += new qt_gsi::GenericMethod ("paintEngine", "@brief Method QPaintEngine *QPaintDevice::paintEngine()\n", true, &_init_f_paintEngine_c0, &_call_f_paintEngine_c0);
  methods += new qt_gsi::GenericMethod ("paintingActive", "@brief Method bool QPaintDevice::paintingActive()\n", true, &_init_f_paintingActive_c0, &_call_f_paintingActive_c0);
  methods += new qt_gsi::GenericMethod ("physicalDpiX", "@brief Method int QPaintDevice::physicalDpiX()\n", true, &_init_f_physicalDpiX_c0, &_call_f_physicalDpiX_c0);
  methods += new qt_gsi::GenericMethod ("physicalDpiY", "@brief Method int QPaintDevice::physicalDpiY()\n", true, &_init_f_physicalDpiY_c0, &_call_f_physicalDpiY_c0);
  methods += new qt_gsi::GenericMethod ("width", "@brief Method int QPaintDevice::width()\n", true, &_init_f_width_c0, &_call_f_width_c0);
  methods += new qt_gsi::GenericMethod ("widthMM", "@brief Method int QPaintDevice::widthMM()\n", true, &_init_f_widthMM_c0, &_call_f_widthMM_c0);
  return methods;
}

gsi::Class<QPaintDevice> decl_QPaintDevice ("QtGui", "QPaintDevice_Native",
  methods_QPaintDevice (),
  "@hide\n@alias QPaintDevice");

GSI_QTGUI_PUBLIC gsi::Class<QPaintDevice> &qtdecl_QPaintDevice () { return decl_QPaintDevice; }

}


class QPaintDevice_Adaptor : public QPaintDevice, public qt_gsi::QtObjectBase
{
public:

  virtual ~QPaintDevice_Adaptor();

  //  [adaptor ctor] QPaintDevice::QPaintDevice()
  QPaintDevice_Adaptor() : QPaintDevice()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QPaintEngine *QPaintDevice::paintEngine()
  QPaintEngine * cbs_paintEngine_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("paintEngine");
  }

  virtual QPaintEngine * paintEngine() const
  {
    if (cb_paintEngine_c0_0.can_issue()) {
      return cb_paintEngine_c0_0.issue<QPaintDevice_Adaptor, QPaintEngine *>(&QPaintDevice_Adaptor::cbs_paintEngine_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("paintEngine");
    }
  }

  //  [adaptor impl] int QPaintDevice::metric(QPaintDevice::PaintDeviceMetric metric)
  int cbs_metric_c3445_0(const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & _metric) const
  {
    return QPaintDevice::metric(qt_gsi::QtToCppAdaptor<QPaintDevice::PaintDeviceMetric>(_metric).cref());
  }

  virtual int metric(QPaintDevice::PaintDeviceMetric _metric) const
  {
    if (cb_metric_c3445_0.can_issue()) {
      return cb_metric_c3445_0.issue<QPaintDevice_Adaptor, int, const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type &>(&QPaintDevice_Adaptor::cbs_metric_c3445_0, qt_gsi::CppToQtAdaptor<QPaintDevice::PaintDeviceMetric>(_metric));
    } else {
      return QPaintDevice::metric(_metric);
    }
  }

  gsi::Callback cb_paintEngine_c0_0;
  gsi::Callback cb_metric_c3445_0;
};

QPaintDevice_Adaptor::~QPaintDevice_Adaptor() { }

//  Constructor QPaintDevice::QPaintDevice() (adaptor class)

static void _init_ctor_QPaintDevice_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPaintDevice_Adaptor> ();
}

static void _call_ctor_QPaintDevice_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPaintDevice_Adaptor *> (new QPaintDevice_Adaptor ());
}


// int QPaintDevice::metric(QPaintDevice::PaintDeviceMetric metric)

static void _init_cbs_metric_c3445_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("metric");
  decl->add_arg<const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_cbs_metric_c3445_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & arg1 = args.read<const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & > (heap);
  ret.write<int > ((int)((QPaintDevice_Adaptor *)cls)->cbs_metric_c3445_0 (arg1));
}

static void _set_callback_cbs_metric_c3445_0 (void *cls, const gsi::Callback &cb)
{
  ((QPaintDevice_Adaptor *)cls)->cb_metric_c3445_0 = cb;
}


// QPaintEngine *QPaintDevice::paintEngine()

static void _init_cbs_paintEngine_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPaintEngine * > ();
}

static void _call_cbs_paintEngine_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPaintEngine * > ((QPaintEngine *)((QPaintDevice_Adaptor *)cls)->cbs_paintEngine_c0_0 ());
}

static void _set_callback_cbs_paintEngine_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPaintDevice_Adaptor *)cls)->cb_paintEngine_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QPaintDevice> &qtdecl_QPaintDevice ();

static gsi::Methods methods_QPaintDevice_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPaintDevice::QPaintDevice()\nThis method creates an object of class QPaintDevice.", &_init_ctor_QPaintDevice_Adaptor_0, &_call_ctor_QPaintDevice_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("*metric", "@brief Virtual method int QPaintDevice::metric(QPaintDevice::PaintDeviceMetric metric)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_metric_c3445_0, &_call_cbs_metric_c3445_0);
  methods += new qt_gsi::GenericMethod ("*metric", "@hide", true, &_init_cbs_metric_c3445_0, &_call_cbs_metric_c3445_0, &_set_callback_cbs_metric_c3445_0);
  methods += new qt_gsi::GenericMethod ("paintEngine", "@brief Virtual method QPaintEngine *QPaintDevice::paintEngine()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_paintEngine_c0_0, &_call_cbs_paintEngine_c0_0);
  methods += new qt_gsi::GenericMethod ("paintEngine", "@hide", true, &_init_cbs_paintEngine_c0_0, &_call_cbs_paintEngine_c0_0, &_set_callback_cbs_paintEngine_c0_0);
  return methods;
}

gsi::Class<QPaintDevice_Adaptor> decl_QPaintDevice_Adaptor (qtdecl_QPaintDevice (), "QtGui", "QPaintDevice",
  methods_QPaintDevice_Adaptor (),
  "@qt\n@brief Binding of QPaintDevice");

}


//  Implementation of the enum wrapper class for QPaintDevice::PaintDeviceMetric
namespace qt_gsi
{

static gsi::Enum<QPaintDevice::PaintDeviceMetric> decl_QPaintDevice_PaintDeviceMetric_Enum ("QtGui", "QPaintDevice_PaintDeviceMetric",
    gsi::enum_const ("PdmWidth", QPaintDevice::PdmWidth, "@brief Enum constant QPaintDevice::PdmWidth") +
    gsi::enum_const ("PdmHeight", QPaintDevice::PdmHeight, "@brief Enum constant QPaintDevice::PdmHeight") +
    gsi::enum_const ("PdmWidthMM", QPaintDevice::PdmWidthMM, "@brief Enum constant QPaintDevice::PdmWidthMM") +
    gsi::enum_const ("PdmHeightMM", QPaintDevice::PdmHeightMM, "@brief Enum constant QPaintDevice::PdmHeightMM") +
    gsi::enum_const ("PdmNumColors", QPaintDevice::PdmNumColors, "@brief Enum constant QPaintDevice::PdmNumColors") +
    gsi::enum_const ("PdmDepth", QPaintDevice::PdmDepth, "@brief Enum constant QPaintDevice::PdmDepth") +
    gsi::enum_const ("PdmDpiX", QPaintDevice::PdmDpiX, "@brief Enum constant QPaintDevice::PdmDpiX") +
    gsi::enum_const ("PdmDpiY", QPaintDevice::PdmDpiY, "@brief Enum constant QPaintDevice::PdmDpiY") +
    gsi::enum_const ("PdmPhysicalDpiX", QPaintDevice::PdmPhysicalDpiX, "@brief Enum constant QPaintDevice::PdmPhysicalDpiX") +
    gsi::enum_const ("PdmPhysicalDpiY", QPaintDevice::PdmPhysicalDpiY, "@brief Enum constant QPaintDevice::PdmPhysicalDpiY"),
  "@qt\n@brief This class represents the QPaintDevice::PaintDeviceMetric enum");

static gsi::QFlagsClass<QPaintDevice::PaintDeviceMetric > decl_QPaintDevice_PaintDeviceMetric_Enums ("QtGui", "QPaintDevice_QFlags_PaintDeviceMetric",
  "@qt\n@brief This class represents the QFlags<QPaintDevice::PaintDeviceMetric> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QPaintDevice> inject_QPaintDevice_PaintDeviceMetric_Enum_in_parent (decl_QPaintDevice_PaintDeviceMetric_Enum.defs ());
static gsi::ClassExt<QPaintDevice> decl_QPaintDevice_PaintDeviceMetric_Enum_as_child (decl_QPaintDevice_PaintDeviceMetric_Enum, "PaintDeviceMetric");
static gsi::ClassExt<QPaintDevice> decl_QPaintDevice_PaintDeviceMetric_Enums_as_child (decl_QPaintDevice_PaintDeviceMetric_Enums, "QFlags_PaintDeviceMetric");

}

