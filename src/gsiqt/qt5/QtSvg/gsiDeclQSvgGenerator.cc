
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
*  @file gsiDeclQSvgGenerator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSvgGenerator>
#include <QIODevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRectF>
#include <QSize>
#include "gsiQt.h"
#include "gsiQtSvgCommon.h"
#include "gsiDeclQtSvgTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSvgGenerator

// QString QSvgGenerator::description()


static void _init_f_description_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_description_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSvgGenerator *)cls)->description ());
}


// QString QSvgGenerator::fileName()


static void _init_f_fileName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_fileName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSvgGenerator *)cls)->fileName ());
}


// QIODevice *QSvgGenerator::outputDevice()


static void _init_f_outputDevice_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QIODevice * > ();
}

static void _call_f_outputDevice_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIODevice * > ((QIODevice *)((QSvgGenerator *)cls)->outputDevice ());
}


// int QSvgGenerator::resolution()


static void _init_f_resolution_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_resolution_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSvgGenerator *)cls)->resolution ());
}


// void QSvgGenerator::setDescription(const QString &description)


static void _init_f_setDescription_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("description");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDescription_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSvgGenerator *)cls)->setDescription (arg1);
}


// void QSvgGenerator::setFileName(const QString &fileName)


static void _init_f_setFileName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFileName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSvgGenerator *)cls)->setFileName (arg1);
}


// void QSvgGenerator::setOutputDevice(QIODevice *outputDevice)


static void _init_f_setOutputDevice_1447 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("outputDevice");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setOutputDevice_1447 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSvgGenerator *)cls)->setOutputDevice (arg1);
}


// void QSvgGenerator::setResolution(int dpi)


static void _init_f_setResolution_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dpi");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setResolution_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSvgGenerator *)cls)->setResolution (arg1);
}


// void QSvgGenerator::setSize(const QSize &size)


static void _init_f_setSize_1805 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSize_1805 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSvgGenerator *)cls)->setSize (arg1);
}


// void QSvgGenerator::setTitle(const QString &title)


static void _init_f_setTitle_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("title");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTitle_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSvgGenerator *)cls)->setTitle (arg1);
}


// void QSvgGenerator::setViewBox(const QRect &viewBox)


static void _init_f_setViewBox_1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("viewBox");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setViewBox_1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSvgGenerator *)cls)->setViewBox (arg1);
}


// void QSvgGenerator::setViewBox(const QRectF &viewBox)


static void _init_f_setViewBox_1862 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("viewBox");
  decl->add_arg<const QRectF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setViewBox_1862 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRectF &arg1 = gsi::arg_reader<const QRectF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSvgGenerator *)cls)->setViewBox (arg1);
}


// QSize QSvgGenerator::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QSvgGenerator *)cls)->size ());
}


// QString QSvgGenerator::title()


static void _init_f_title_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_title_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSvgGenerator *)cls)->title ());
}


// QRect QSvgGenerator::viewBox()


static void _init_f_viewBox_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_viewBox_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QSvgGenerator *)cls)->viewBox ());
}


// QRectF QSvgGenerator::viewBoxF()


static void _init_f_viewBoxF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRectF > ();
}

static void _call_f_viewBoxF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRectF > ((QRectF)((QSvgGenerator *)cls)->viewBoxF ());
}


namespace gsi
{

static gsi::Methods methods_QSvgGenerator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod (":description", "@brief Method QString QSvgGenerator::description()\n", true, &_init_f_description_c0, &_call_f_description_c0);
  methods += new qt_gsi::GenericMethod (":fileName", "@brief Method QString QSvgGenerator::fileName()\n", true, &_init_f_fileName_c0, &_call_f_fileName_c0);
  methods += new qt_gsi::GenericMethod (":outputDevice", "@brief Method QIODevice *QSvgGenerator::outputDevice()\n", true, &_init_f_outputDevice_c0, &_call_f_outputDevice_c0);
  methods += new qt_gsi::GenericMethod (":resolution", "@brief Method int QSvgGenerator::resolution()\n", true, &_init_f_resolution_c0, &_call_f_resolution_c0);
  methods += new qt_gsi::GenericMethod ("setDescription|description=", "@brief Method void QSvgGenerator::setDescription(const QString &description)\n", false, &_init_f_setDescription_2025, &_call_f_setDescription_2025);
  methods += new qt_gsi::GenericMethod ("setFileName|fileName=", "@brief Method void QSvgGenerator::setFileName(const QString &fileName)\n", false, &_init_f_setFileName_2025, &_call_f_setFileName_2025);
  methods += new qt_gsi::GenericMethod ("setOutputDevice|outputDevice=", "@brief Method void QSvgGenerator::setOutputDevice(QIODevice *outputDevice)\n", false, &_init_f_setOutputDevice_1447, &_call_f_setOutputDevice_1447);
  methods += new qt_gsi::GenericMethod ("setResolution|resolution=", "@brief Method void QSvgGenerator::setResolution(int dpi)\n", false, &_init_f_setResolution_767, &_call_f_setResolution_767);
  methods += new qt_gsi::GenericMethod ("setSize|size=", "@brief Method void QSvgGenerator::setSize(const QSize &size)\n", false, &_init_f_setSize_1805, &_call_f_setSize_1805);
  methods += new qt_gsi::GenericMethod ("setTitle|title=", "@brief Method void QSvgGenerator::setTitle(const QString &title)\n", false, &_init_f_setTitle_2025, &_call_f_setTitle_2025);
  methods += new qt_gsi::GenericMethod ("setViewBox|viewBox=", "@brief Method void QSvgGenerator::setViewBox(const QRect &viewBox)\n", false, &_init_f_setViewBox_1792, &_call_f_setViewBox_1792);
  methods += new qt_gsi::GenericMethod ("setViewBox|viewBox=", "@brief Method void QSvgGenerator::setViewBox(const QRectF &viewBox)\n", false, &_init_f_setViewBox_1862, &_call_f_setViewBox_1862);
  methods += new qt_gsi::GenericMethod (":size", "@brief Method QSize QSvgGenerator::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod (":title", "@brief Method QString QSvgGenerator::title()\n", true, &_init_f_title_c0, &_call_f_title_c0);
  methods += new qt_gsi::GenericMethod (":viewBox", "@brief Method QRect QSvgGenerator::viewBox()\n", true, &_init_f_viewBox_c0, &_call_f_viewBox_c0);
  methods += new qt_gsi::GenericMethod ("viewBoxF", "@brief Method QRectF QSvgGenerator::viewBoxF()\n", true, &_init_f_viewBoxF_c0, &_call_f_viewBoxF_c0);
  return methods;
}

gsi::Class<QPaintDevice> &qtdecl_QPaintDevice ();

gsi::Class<QSvgGenerator> decl_QSvgGenerator (qtdecl_QPaintDevice (), "QtSvg", "QSvgGenerator_Native",
  methods_QSvgGenerator (),
  "@hide\n@alias QSvgGenerator");

GSI_QTSVG_PUBLIC gsi::Class<QSvgGenerator> &qtdecl_QSvgGenerator () { return decl_QSvgGenerator; }

}


class QSvgGenerator_Adaptor : public QSvgGenerator, public qt_gsi::QtObjectBase
{
public:

  virtual ~QSvgGenerator_Adaptor();

  //  [adaptor ctor] QSvgGenerator::QSvgGenerator()
  QSvgGenerator_Adaptor() : QSvgGenerator()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QSvgGenerator::initPainter(QPainter *painter)
  void cbs_initPainter_c1426_0(QPainter *painter) const
  {
    QSvgGenerator::initPainter(painter);
  }

  virtual void initPainter(QPainter *painter) const
  {
    if (cb_initPainter_c1426_0.can_issue()) {
      cb_initPainter_c1426_0.issue<QSvgGenerator_Adaptor, QPainter *>(&QSvgGenerator_Adaptor::cbs_initPainter_c1426_0, painter);
    } else {
      QSvgGenerator::initPainter(painter);
    }
  }

  //  [adaptor impl] int QSvgGenerator::metric(QPaintDevice::PaintDeviceMetric metric)
  int cbs_metric_c3445_0(const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & _metric) const
  {
    return QSvgGenerator::metric(qt_gsi::QtToCppAdaptor<QPaintDevice::PaintDeviceMetric>(_metric).cref());
  }

  virtual int metric(QPaintDevice::PaintDeviceMetric _metric) const
  {
    if (cb_metric_c3445_0.can_issue()) {
      return cb_metric_c3445_0.issue<QSvgGenerator_Adaptor, int, const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type &>(&QSvgGenerator_Adaptor::cbs_metric_c3445_0, qt_gsi::CppToQtAdaptor<QPaintDevice::PaintDeviceMetric>(_metric));
    } else {
      return QSvgGenerator::metric(_metric);
    }
  }

  //  [adaptor impl] QPaintEngine *QSvgGenerator::paintEngine()
  QPaintEngine * cbs_paintEngine_c0_0() const
  {
    return QSvgGenerator::paintEngine();
  }

  virtual QPaintEngine * paintEngine() const
  {
    if (cb_paintEngine_c0_0.can_issue()) {
      return cb_paintEngine_c0_0.issue<QSvgGenerator_Adaptor, QPaintEngine *>(&QSvgGenerator_Adaptor::cbs_paintEngine_c0_0);
    } else {
      return QSvgGenerator::paintEngine();
    }
  }

  //  [adaptor impl] QPaintDevice *QSvgGenerator::redirected(QPoint *offset)
  QPaintDevice * cbs_redirected_c1225_0(QPoint *offset) const
  {
    return QSvgGenerator::redirected(offset);
  }

  virtual QPaintDevice * redirected(QPoint *offset) const
  {
    if (cb_redirected_c1225_0.can_issue()) {
      return cb_redirected_c1225_0.issue<QSvgGenerator_Adaptor, QPaintDevice *, QPoint *>(&QSvgGenerator_Adaptor::cbs_redirected_c1225_0, offset);
    } else {
      return QSvgGenerator::redirected(offset);
    }
  }

  //  [adaptor impl] QPainter *QSvgGenerator::sharedPainter()
  QPainter * cbs_sharedPainter_c0_0() const
  {
    return QSvgGenerator::sharedPainter();
  }

  virtual QPainter * sharedPainter() const
  {
    if (cb_sharedPainter_c0_0.can_issue()) {
      return cb_sharedPainter_c0_0.issue<QSvgGenerator_Adaptor, QPainter *>(&QSvgGenerator_Adaptor::cbs_sharedPainter_c0_0);
    } else {
      return QSvgGenerator::sharedPainter();
    }
  }

  gsi::Callback cb_initPainter_c1426_0;
  gsi::Callback cb_metric_c3445_0;
  gsi::Callback cb_paintEngine_c0_0;
  gsi::Callback cb_redirected_c1225_0;
  gsi::Callback cb_sharedPainter_c0_0;
};

QSvgGenerator_Adaptor::~QSvgGenerator_Adaptor() { }

//  Constructor QSvgGenerator::QSvgGenerator() (adaptor class)

static void _init_ctor_QSvgGenerator_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSvgGenerator_Adaptor> ();
}

static void _call_ctor_QSvgGenerator_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSvgGenerator_Adaptor *> (new QSvgGenerator_Adaptor ());
}


// void QSvgGenerator::initPainter(QPainter *painter)

static void _init_cbs_initPainter_c1426_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("painter");
  decl->add_arg<QPainter * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_initPainter_c1426_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = args.read<QPainter * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSvgGenerator_Adaptor *)cls)->cbs_initPainter_c1426_0 (arg1);
}

static void _set_callback_cbs_initPainter_c1426_0 (void *cls, const gsi::Callback &cb)
{
  ((QSvgGenerator_Adaptor *)cls)->cb_initPainter_c1426_0 = cb;
}


// int QSvgGenerator::metric(QPaintDevice::PaintDeviceMetric metric)

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
  ret.write<int > ((int)((QSvgGenerator_Adaptor *)cls)->cbs_metric_c3445_0 (arg1));
}

static void _set_callback_cbs_metric_c3445_0 (void *cls, const gsi::Callback &cb)
{
  ((QSvgGenerator_Adaptor *)cls)->cb_metric_c3445_0 = cb;
}


// QPaintEngine *QSvgGenerator::paintEngine()

static void _init_cbs_paintEngine_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPaintEngine * > ();
}

static void _call_cbs_paintEngine_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPaintEngine * > ((QPaintEngine *)((QSvgGenerator_Adaptor *)cls)->cbs_paintEngine_c0_0 ());
}

static void _set_callback_cbs_paintEngine_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QSvgGenerator_Adaptor *)cls)->cb_paintEngine_c0_0 = cb;
}


// QPaintDevice *QSvgGenerator::redirected(QPoint *offset)

static void _init_cbs_redirected_c1225_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("offset");
  decl->add_arg<QPoint * > (argspec_0);
  decl->set_return<QPaintDevice * > ();
}

static void _call_cbs_redirected_c1225_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPoint *arg1 = args.read<QPoint * > (heap);
  ret.write<QPaintDevice * > ((QPaintDevice *)((QSvgGenerator_Adaptor *)cls)->cbs_redirected_c1225_0 (arg1));
}

static void _set_callback_cbs_redirected_c1225_0 (void *cls, const gsi::Callback &cb)
{
  ((QSvgGenerator_Adaptor *)cls)->cb_redirected_c1225_0 = cb;
}


// QPainter *QSvgGenerator::sharedPainter()

static void _init_cbs_sharedPainter_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPainter * > ();
}

static void _call_cbs_sharedPainter_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPainter * > ((QPainter *)((QSvgGenerator_Adaptor *)cls)->cbs_sharedPainter_c0_0 ());
}

static void _set_callback_cbs_sharedPainter_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QSvgGenerator_Adaptor *)cls)->cb_sharedPainter_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QSvgGenerator> &qtdecl_QSvgGenerator ();

static gsi::Methods methods_QSvgGenerator_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSvgGenerator::QSvgGenerator()\nThis method creates an object of class QSvgGenerator.", &_init_ctor_QSvgGenerator_Adaptor_0, &_call_ctor_QSvgGenerator_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("*initPainter", "@brief Virtual method void QSvgGenerator::initPainter(QPainter *painter)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_initPainter_c1426_0, &_call_cbs_initPainter_c1426_0);
  methods += new qt_gsi::GenericMethod ("*initPainter", "@hide", true, &_init_cbs_initPainter_c1426_0, &_call_cbs_initPainter_c1426_0, &_set_callback_cbs_initPainter_c1426_0);
  methods += new qt_gsi::GenericMethod ("*metric", "@brief Virtual method int QSvgGenerator::metric(QPaintDevice::PaintDeviceMetric metric)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_metric_c3445_0, &_call_cbs_metric_c3445_0);
  methods += new qt_gsi::GenericMethod ("*metric", "@hide", true, &_init_cbs_metric_c3445_0, &_call_cbs_metric_c3445_0, &_set_callback_cbs_metric_c3445_0);
  methods += new qt_gsi::GenericMethod ("*paintEngine", "@brief Virtual method QPaintEngine *QSvgGenerator::paintEngine()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_paintEngine_c0_0, &_call_cbs_paintEngine_c0_0);
  methods += new qt_gsi::GenericMethod ("*paintEngine", "@hide", true, &_init_cbs_paintEngine_c0_0, &_call_cbs_paintEngine_c0_0, &_set_callback_cbs_paintEngine_c0_0);
  methods += new qt_gsi::GenericMethod ("*redirected", "@brief Virtual method QPaintDevice *QSvgGenerator::redirected(QPoint *offset)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_redirected_c1225_0, &_call_cbs_redirected_c1225_0);
  methods += new qt_gsi::GenericMethod ("*redirected", "@hide", true, &_init_cbs_redirected_c1225_0, &_call_cbs_redirected_c1225_0, &_set_callback_cbs_redirected_c1225_0);
  methods += new qt_gsi::GenericMethod ("*sharedPainter", "@brief Virtual method QPainter *QSvgGenerator::sharedPainter()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_sharedPainter_c0_0, &_call_cbs_sharedPainter_c0_0);
  methods += new qt_gsi::GenericMethod ("*sharedPainter", "@hide", true, &_init_cbs_sharedPainter_c0_0, &_call_cbs_sharedPainter_c0_0, &_set_callback_cbs_sharedPainter_c0_0);
  return methods;
}

gsi::Class<QSvgGenerator_Adaptor> decl_QSvgGenerator_Adaptor (qtdecl_QSvgGenerator (), "QtSvg", "QSvgGenerator",
  methods_QSvgGenerator_Adaptor (),
  "@qt\n@brief Binding of QSvgGenerator");

}

