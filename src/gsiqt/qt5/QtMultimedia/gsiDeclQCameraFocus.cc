
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
*  @file gsiDeclQCameraFocus.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCameraFocus>
#include <QCameraFocusZone>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QPointF>
#include <QThread>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCameraFocus

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QCameraFocus::staticMetaObject);
}


// QPointF QCameraFocus::customFocusPoint()


static void _init_f_customFocusPoint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_customFocusPoint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QCameraFocus *)cls)->customFocusPoint ());
}


// double QCameraFocus::digitalZoom()


static void _init_f_digitalZoom_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_digitalZoom_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QCameraFocus *)cls)->digitalZoom ());
}


// void QCameraFocus::digitalZoomChanged(double)


static void _init_f_digitalZoomChanged_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_digitalZoomChanged_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraFocus *)cls)->digitalZoomChanged (arg1);
}


// QFlags<QCameraFocus::FocusMode> QCameraFocus::focusMode()


static void _init_f_focusMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QCameraFocus::FocusMode> > ();
}

static void _call_f_focusMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QCameraFocus::FocusMode> > ((QFlags<QCameraFocus::FocusMode>)((QCameraFocus *)cls)->focusMode ());
}


// QCameraFocus::FocusPointMode QCameraFocus::focusPointMode()


static void _init_f_focusPointMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QCameraFocus::FocusPointMode>::target_type > ();
}

static void _call_f_focusPointMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QCameraFocus::FocusPointMode>::target_type > ((qt_gsi::Converter<QCameraFocus::FocusPointMode>::target_type)qt_gsi::CppToQtAdaptor<QCameraFocus::FocusPointMode>(((QCameraFocus *)cls)->focusPointMode ()));
}


// QList<QCameraFocusZone> QCameraFocus::focusZones()


static void _init_f_focusZones_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QCameraFocusZone> > ();
}

static void _call_f_focusZones_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QCameraFocusZone> > ((QList<QCameraFocusZone>)((QCameraFocus *)cls)->focusZones ());
}


// void QCameraFocus::focusZonesChanged()


static void _init_f_focusZonesChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_focusZonesChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraFocus *)cls)->focusZonesChanged ();
}


// bool QCameraFocus::isAvailable()


static void _init_f_isAvailable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isAvailable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QCameraFocus *)cls)->isAvailable ());
}


// bool QCameraFocus::isFocusModeSupported(QFlags<QCameraFocus::FocusMode> mode)


static void _init_f_isFocusModeSupported_c3327 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<QFlags<QCameraFocus::FocusMode> > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isFocusModeSupported_c3327 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QCameraFocus::FocusMode> arg1 = gsi::arg_reader<QFlags<QCameraFocus::FocusMode> >() (args, heap);
  ret.write<bool > ((bool)((QCameraFocus *)cls)->isFocusModeSupported (arg1));
}


// bool QCameraFocus::isFocusPointModeSupported(QCameraFocus::FocusPointMode)


static void _init_f_isFocusPointModeSupported_c3153 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QCameraFocus::FocusPointMode>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isFocusPointModeSupported_c3153 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCameraFocus::FocusPointMode>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QCameraFocus::FocusPointMode>::target_type & >() (args, heap);
  ret.write<bool > ((bool)((QCameraFocus *)cls)->isFocusPointModeSupported (qt_gsi::QtToCppAdaptor<QCameraFocus::FocusPointMode>(arg1).cref()));
}


// double QCameraFocus::maximumDigitalZoom()


static void _init_f_maximumDigitalZoom_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_maximumDigitalZoom_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QCameraFocus *)cls)->maximumDigitalZoom ());
}


// void QCameraFocus::maximumDigitalZoomChanged(double)


static void _init_f_maximumDigitalZoomChanged_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_maximumDigitalZoomChanged_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraFocus *)cls)->maximumDigitalZoomChanged (arg1);
}


// double QCameraFocus::maximumOpticalZoom()


static void _init_f_maximumOpticalZoom_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_maximumOpticalZoom_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QCameraFocus *)cls)->maximumOpticalZoom ());
}


// void QCameraFocus::maximumOpticalZoomChanged(double)


static void _init_f_maximumOpticalZoomChanged_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_maximumOpticalZoomChanged_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraFocus *)cls)->maximumOpticalZoomChanged (arg1);
}


// double QCameraFocus::opticalZoom()


static void _init_f_opticalZoom_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_opticalZoom_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QCameraFocus *)cls)->opticalZoom ());
}


// void QCameraFocus::opticalZoomChanged(double)


static void _init_f_opticalZoomChanged_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_opticalZoomChanged_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraFocus *)cls)->opticalZoomChanged (arg1);
}


// void QCameraFocus::setCustomFocusPoint(const QPointF &point)


static void _init_f_setCustomFocusPoint_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCustomFocusPoint_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraFocus *)cls)->setCustomFocusPoint (arg1);
}


// void QCameraFocus::setFocusMode(QFlags<QCameraFocus::FocusMode> mode)


static void _init_f_setFocusMode_3327 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<QFlags<QCameraFocus::FocusMode> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFocusMode_3327 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QCameraFocus::FocusMode> arg1 = gsi::arg_reader<QFlags<QCameraFocus::FocusMode> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraFocus *)cls)->setFocusMode (arg1);
}


// void QCameraFocus::setFocusPointMode(QCameraFocus::FocusPointMode mode)


static void _init_f_setFocusPointMode_3153 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<const qt_gsi::Converter<QCameraFocus::FocusPointMode>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFocusPointMode_3153 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCameraFocus::FocusPointMode>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QCameraFocus::FocusPointMode>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraFocus *)cls)->setFocusPointMode (qt_gsi::QtToCppAdaptor<QCameraFocus::FocusPointMode>(arg1).cref());
}


// void QCameraFocus::zoomTo(double opticalZoom, double digitalZoom)


static void _init_f_zoomTo_2034 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("opticalZoom");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("digitalZoom");
  decl->add_arg<double > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_zoomTo_2034 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraFocus *)cls)->zoomTo (arg1, arg2);
}


// static QString QCameraFocus::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QCameraFocus::tr (arg1, arg2, arg3));
}


// static QString QCameraFocus::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QCameraFocus::trUtf8 (arg1, arg2, arg3));
}



namespace gsi
{

static gsi::Methods methods_QCameraFocus () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":customFocusPoint", "@brief Method QPointF QCameraFocus::customFocusPoint()\n", true, &_init_f_customFocusPoint_c0, &_call_f_customFocusPoint_c0);
  methods += new qt_gsi::GenericMethod (":digitalZoom", "@brief Method double QCameraFocus::digitalZoom()\n", true, &_init_f_digitalZoom_c0, &_call_f_digitalZoom_c0);
  methods += new qt_gsi::GenericMethod ("digitalZoomChanged", "@brief Method void QCameraFocus::digitalZoomChanged(double)\n", false, &_init_f_digitalZoomChanged_1071, &_call_f_digitalZoomChanged_1071);
  methods += new qt_gsi::GenericMethod (":focusMode", "@brief Method QFlags<QCameraFocus::FocusMode> QCameraFocus::focusMode()\n", true, &_init_f_focusMode_c0, &_call_f_focusMode_c0);
  methods += new qt_gsi::GenericMethod (":focusPointMode", "@brief Method QCameraFocus::FocusPointMode QCameraFocus::focusPointMode()\n", true, &_init_f_focusPointMode_c0, &_call_f_focusPointMode_c0);
  methods += new qt_gsi::GenericMethod (":focusZones", "@brief Method QList<QCameraFocusZone> QCameraFocus::focusZones()\n", true, &_init_f_focusZones_c0, &_call_f_focusZones_c0);
  methods += new qt_gsi::GenericMethod ("focusZonesChanged", "@brief Method void QCameraFocus::focusZonesChanged()\n", false, &_init_f_focusZonesChanged_0, &_call_f_focusZonesChanged_0);
  methods += new qt_gsi::GenericMethod ("isAvailable?", "@brief Method bool QCameraFocus::isAvailable()\n", true, &_init_f_isAvailable_c0, &_call_f_isAvailable_c0);
  methods += new qt_gsi::GenericMethod ("isFocusModeSupported?", "@brief Method bool QCameraFocus::isFocusModeSupported(QFlags<QCameraFocus::FocusMode> mode)\n", true, &_init_f_isFocusModeSupported_c3327, &_call_f_isFocusModeSupported_c3327);
  methods += new qt_gsi::GenericMethod ("isFocusPointModeSupported?", "@brief Method bool QCameraFocus::isFocusPointModeSupported(QCameraFocus::FocusPointMode)\n", true, &_init_f_isFocusPointModeSupported_c3153, &_call_f_isFocusPointModeSupported_c3153);
  methods += new qt_gsi::GenericMethod ("maximumDigitalZoom", "@brief Method double QCameraFocus::maximumDigitalZoom()\n", true, &_init_f_maximumDigitalZoom_c0, &_call_f_maximumDigitalZoom_c0);
  methods += new qt_gsi::GenericMethod ("maximumDigitalZoomChanged", "@brief Method void QCameraFocus::maximumDigitalZoomChanged(double)\n", false, &_init_f_maximumDigitalZoomChanged_1071, &_call_f_maximumDigitalZoomChanged_1071);
  methods += new qt_gsi::GenericMethod ("maximumOpticalZoom", "@brief Method double QCameraFocus::maximumOpticalZoom()\n", true, &_init_f_maximumOpticalZoom_c0, &_call_f_maximumOpticalZoom_c0);
  methods += new qt_gsi::GenericMethod ("maximumOpticalZoomChanged", "@brief Method void QCameraFocus::maximumOpticalZoomChanged(double)\n", false, &_init_f_maximumOpticalZoomChanged_1071, &_call_f_maximumOpticalZoomChanged_1071);
  methods += new qt_gsi::GenericMethod (":opticalZoom", "@brief Method double QCameraFocus::opticalZoom()\n", true, &_init_f_opticalZoom_c0, &_call_f_opticalZoom_c0);
  methods += new qt_gsi::GenericMethod ("opticalZoomChanged", "@brief Method void QCameraFocus::opticalZoomChanged(double)\n", false, &_init_f_opticalZoomChanged_1071, &_call_f_opticalZoomChanged_1071);
  methods += new qt_gsi::GenericMethod ("setCustomFocusPoint|customFocusPoint=", "@brief Method void QCameraFocus::setCustomFocusPoint(const QPointF &point)\n", false, &_init_f_setCustomFocusPoint_1986, &_call_f_setCustomFocusPoint_1986);
  methods += new qt_gsi::GenericMethod ("setFocusMode|focusMode=", "@brief Method void QCameraFocus::setFocusMode(QFlags<QCameraFocus::FocusMode> mode)\n", false, &_init_f_setFocusMode_3327, &_call_f_setFocusMode_3327);
  methods += new qt_gsi::GenericMethod ("setFocusPointMode|focusPointMode=", "@brief Method void QCameraFocus::setFocusPointMode(QCameraFocus::FocusPointMode mode)\n", false, &_init_f_setFocusPointMode_3153, &_call_f_setFocusPointMode_3153);
  methods += new qt_gsi::GenericMethod ("zoomTo", "@brief Method void QCameraFocus::zoomTo(double opticalZoom, double digitalZoom)\n", false, &_init_f_zoomTo_2034, &_call_f_zoomTo_2034);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QCameraFocus::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QCameraFocus::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QCameraFocus> decl_QCameraFocus (qtdecl_QObject (), "QtMultimedia", "QCameraFocus",
  methods_QCameraFocus (),
  "@qt\n@brief Binding of QCameraFocus");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QCameraFocus> &qtdecl_QCameraFocus () { return decl_QCameraFocus; }

}


//  Implementation of the enum wrapper class for QCameraFocus::FocusMode
namespace qt_gsi
{

static gsi::Enum<QCameraFocus::FocusMode> decl_QCameraFocus_FocusMode_Enum ("QtMultimedia", "QCameraFocus_FocusMode",
    gsi::enum_const ("ManualFocus", QCameraFocus::ManualFocus, "@brief Enum constant QCameraFocus::ManualFocus") +
    gsi::enum_const ("HyperfocalFocus", QCameraFocus::HyperfocalFocus, "@brief Enum constant QCameraFocus::HyperfocalFocus") +
    gsi::enum_const ("InfinityFocus", QCameraFocus::InfinityFocus, "@brief Enum constant QCameraFocus::InfinityFocus") +
    gsi::enum_const ("AutoFocus", QCameraFocus::AutoFocus, "@brief Enum constant QCameraFocus::AutoFocus") +
    gsi::enum_const ("ContinuousFocus", QCameraFocus::ContinuousFocus, "@brief Enum constant QCameraFocus::ContinuousFocus") +
    gsi::enum_const ("MacroFocus", QCameraFocus::MacroFocus, "@brief Enum constant QCameraFocus::MacroFocus"),
  "@qt\n@brief This class represents the QCameraFocus::FocusMode enum");

static gsi::QFlagsClass<QCameraFocus::FocusMode > decl_QCameraFocus_FocusMode_Enums ("QtMultimedia", "QCameraFocus_QFlags_FocusMode",
  "@qt\n@brief This class represents the QFlags<QCameraFocus::FocusMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QCameraFocus> inject_QCameraFocus_FocusMode_Enum_in_parent (decl_QCameraFocus_FocusMode_Enum.defs ());
static gsi::ClassExt<QCameraFocus> decl_QCameraFocus_FocusMode_Enum_as_child (decl_QCameraFocus_FocusMode_Enum, "FocusMode");
static gsi::ClassExt<QCameraFocus> decl_QCameraFocus_FocusMode_Enums_as_child (decl_QCameraFocus_FocusMode_Enums, "QFlags_FocusMode");

}


//  Implementation of the enum wrapper class for QCameraFocus::FocusPointMode
namespace qt_gsi
{

static gsi::Enum<QCameraFocus::FocusPointMode> decl_QCameraFocus_FocusPointMode_Enum ("QtMultimedia", "QCameraFocus_FocusPointMode",
    gsi::enum_const ("FocusPointAuto", QCameraFocus::FocusPointAuto, "@brief Enum constant QCameraFocus::FocusPointAuto") +
    gsi::enum_const ("FocusPointCenter", QCameraFocus::FocusPointCenter, "@brief Enum constant QCameraFocus::FocusPointCenter") +
    gsi::enum_const ("FocusPointFaceDetection", QCameraFocus::FocusPointFaceDetection, "@brief Enum constant QCameraFocus::FocusPointFaceDetection") +
    gsi::enum_const ("FocusPointCustom", QCameraFocus::FocusPointCustom, "@brief Enum constant QCameraFocus::FocusPointCustom"),
  "@qt\n@brief This class represents the QCameraFocus::FocusPointMode enum");

static gsi::QFlagsClass<QCameraFocus::FocusPointMode > decl_QCameraFocus_FocusPointMode_Enums ("QtMultimedia", "QCameraFocus_QFlags_FocusPointMode",
  "@qt\n@brief This class represents the QFlags<QCameraFocus::FocusPointMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QCameraFocus> inject_QCameraFocus_FocusPointMode_Enum_in_parent (decl_QCameraFocus_FocusPointMode_Enum.defs ());
static gsi::ClassExt<QCameraFocus> decl_QCameraFocus_FocusPointMode_Enum_as_child (decl_QCameraFocus_FocusPointMode_Enum, "FocusPointMode");
static gsi::ClassExt<QCameraFocus> decl_QCameraFocus_FocusPointMode_Enums_as_child (decl_QCameraFocus_FocusPointMode_Enums, "QFlags_FocusPointMode");

}

