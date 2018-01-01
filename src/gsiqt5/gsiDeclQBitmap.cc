
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

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
*  @file gsiDeclQBitmap.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QBitmap>
#include <QColor>
#include <QIODevice>
#include <QImage>
#include <QImageReader>
#include <QMatrix>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QTransform>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QBitmap

// void QBitmap::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QBitmap *)cls)->clear ();
}


// (const QPixmap &)


static void _init_f_operator_eq__2017 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QPixmap & > (argspec_0);
  decl->set_return<QBitmap & > ();
}

static void _call_f_operator_eq__2017 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPixmap &arg1 = args.read<const QPixmap & > (heap);
  ret.write<QBitmap & > ((QBitmap &)((QBitmap *)cls)->operator= (arg1));
}


// (QBitmap &)


static void _init_f_swap_1304 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QBitmap & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1304 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QBitmap &arg1 = args.read<QBitmap & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QBitmap *)cls)->swap (arg1);
}


// (const QMatrix &) const


static void _init_f_transformed_c2023 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QMatrix & > (argspec_0);
  decl->set_return<QBitmap > ();
}

static void _call_f_transformed_c2023 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMatrix &arg1 = args.read<const QMatrix & > (heap);
  ret.write<QBitmap > ((QBitmap)((QBitmap *)cls)->transformed (arg1));
}


// (const QTransform &) const


static void _init_f_transformed_c2350 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("matrix");
  decl->add_arg<const QTransform & > (argspec_0);
  decl->set_return<QBitmap > ();
}

static void _call_f_transformed_c2350 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTransform &arg1 = args.read<const QTransform & > (heap);
  ret.write<QBitmap > ((QBitmap)((QBitmap *)cls)->transformed (arg1));
}


// static QBitmap QBitmap::fromData(const QSize &size, const unsigned char *bits, QImage::Format monoFormat)


static void _init_f_fromData_6058 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const QSize & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("bits");
  decl->add_arg<const unsigned char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("monoFormat", true, "QImage::Format_MonoLSB");
  decl->add_arg<const qt_gsi::Converter<QImage::Format>::target_type & > (argspec_2);
  decl->set_return<QBitmap > ();
}

static void _call_f_fromData_6058 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = args.read<const QSize & > (heap);
  const unsigned char *arg2 = args.read<const unsigned char * > (heap);
  const qt_gsi::Converter<QImage::Format>::target_type & arg3 = args ? args.read<const qt_gsi::Converter<QImage::Format>::target_type & > (heap) : (const qt_gsi::Converter<QImage::Format>::target_type &)(qt_gsi::CppToQtReadAdaptor<QImage::Format>(heap, QImage::Format_MonoLSB));
  ret.write<QBitmap > ((QBitmap)QBitmap::fromData (arg1, arg2, qt_gsi::QtToCppAdaptor<QImage::Format>(arg3).cref()));
}


// static QBitmap QBitmap::fromImage(const QImage &image, QFlags<Qt::ImageConversionFlag> flags)


static void _init_f_fromImage_5137 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("image");
  decl->add_arg<const QImage & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("flags", true, "Qt::AutoColor");
  decl->add_arg<QFlags<Qt::ImageConversionFlag> > (argspec_1);
  decl->set_return<QBitmap > ();
}

static void _call_f_fromImage_5137 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImage &arg1 = args.read<const QImage & > (heap);
  QFlags<Qt::ImageConversionFlag> arg2 = args ? args.read<QFlags<Qt::ImageConversionFlag> > (heap) : (QFlags<Qt::ImageConversionFlag>)(Qt::AutoColor);
  ret.write<QBitmap > ((QBitmap)QBitmap::fromImage (arg1, arg2));
}


namespace gsi
{

static gsi::Methods methods_QBitmap () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QBitmap::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method (const QPixmap &)\n", false, &_init_f_operator_eq__2017, &_call_f_operator_eq__2017);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method (QBitmap &)\n", false, &_init_f_swap_1304, &_call_f_swap_1304);
  methods += new qt_gsi::GenericMethod ("transformed", "@brief Method (const QMatrix &) const\n", true, &_init_f_transformed_c2023, &_call_f_transformed_c2023);
  methods += new qt_gsi::GenericMethod ("transformed", "@brief Method (const QTransform &) const\n", true, &_init_f_transformed_c2350, &_call_f_transformed_c2350);
  methods += new qt_gsi::GenericStaticMethod ("fromData", "@brief Static method QBitmap QBitmap::fromData(const QSize &size, const unsigned char *bits, QImage::Format monoFormat)\nThis method is static and can be called without an instance.", &_init_f_fromData_6058, &_call_f_fromData_6058);
  methods += new qt_gsi::GenericStaticMethod ("fromImage", "@brief Static method QBitmap QBitmap::fromImage(const QImage &image, QFlags<Qt::ImageConversionFlag> flags)\nThis method is static and can be called without an instance.", &_init_f_fromImage_5137, &_call_f_fromImage_5137);
  return methods;
}

gsi::Class<QPixmap> &qtdecl_QPixmap ();

gsi::Class<QBitmap> decl_QBitmap (qtdecl_QPixmap (), "QBitmap_Native",
  methods_QBitmap (),
  "@hide\n@alias QBitmap");

GSIQT_PUBLIC gsi::Class<QBitmap> &qtdecl_QBitmap () { return decl_QBitmap; }

}


class QBitmap_Adaptor : public QBitmap, public qt_gsi::QtObjectBase
{
public:

  virtual ~QBitmap_Adaptor();

  //  [adaptor ctor] QBitmap::QBitmap()
  QBitmap_Adaptor() : QBitmap()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QBitmap::QBitmap(const QPixmap &)
  QBitmap_Adaptor(const QPixmap &arg1) : QBitmap(arg1)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QBitmap::QBitmap(int w, int h)
  QBitmap_Adaptor(int w, int h) : QBitmap(w, h)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QBitmap::QBitmap(const QSize &)
  QBitmap_Adaptor(const QSize &arg1) : QBitmap(arg1)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QBitmap::QBitmap(const QString &fileName, const char *format)
  QBitmap_Adaptor(const QString &fileName) : QBitmap(fileName)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QBitmap::QBitmap(const QString &fileName, const char *format)
  QBitmap_Adaptor(const QString &fileName, const char *format) : QBitmap(fileName, format)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] QPixmap QBitmap::fromImageInPlace(QImage &image, QFlags<Qt::ImageConversionFlag> flags)
  static QPixmap fp_QBitmap_fromImageInPlace_4442 (QImage &image, QFlags<Qt::ImageConversionFlag> flags) {
    return QBitmap::fromImageInPlace(image, flags);
  }

  //  [adaptor impl] QPaintEngine *QBitmap::paintEngine()
  QPaintEngine * cbs_paintEngine_c0_0() const
  {
    return QBitmap::paintEngine();
  }

  virtual QPaintEngine * paintEngine() const
  {
    if (cb_paintEngine_c0_0.can_issue()) {
      return cb_paintEngine_c0_0.issue<QBitmap_Adaptor, QPaintEngine *>(&QBitmap_Adaptor::cbs_paintEngine_c0_0);
    } else {
      return QBitmap::paintEngine();
    }
  }

  //  [adaptor impl] void QBitmap::initPainter(QPainter *painter)
  void cbs_initPainter_c1426_0(QPainter *painter) const
  {
    QBitmap::initPainter(painter);
  }

  virtual void initPainter(QPainter *painter) const
  {
    if (cb_initPainter_c1426_0.can_issue()) {
      cb_initPainter_c1426_0.issue<QBitmap_Adaptor, QPainter *>(&QBitmap_Adaptor::cbs_initPainter_c1426_0, painter);
    } else {
      QBitmap::initPainter(painter);
    }
  }

  //  [adaptor impl] int QBitmap::metric(QPaintDevice::PaintDeviceMetric)
  int cbs_metric_c3445_0(const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & arg1) const
  {
    return QBitmap::metric(qt_gsi::QtToCppAdaptor<QPaintDevice::PaintDeviceMetric>(arg1).cref());
  }

  virtual int metric(QPaintDevice::PaintDeviceMetric arg1) const
  {
    if (cb_metric_c3445_0.can_issue()) {
      return cb_metric_c3445_0.issue<QBitmap_Adaptor, int, const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type &>(&QBitmap_Adaptor::cbs_metric_c3445_0, qt_gsi::CppToQtAdaptor<QPaintDevice::PaintDeviceMetric>(arg1));
    } else {
      return QBitmap::metric(arg1);
    }
  }

  //  [adaptor impl] QPaintDevice *QBitmap::redirected(QPoint *offset)
  QPaintDevice * cbs_redirected_c1225_0(QPoint *offset) const
  {
    return QBitmap::redirected(offset);
  }

  virtual QPaintDevice * redirected(QPoint *offset) const
  {
    if (cb_redirected_c1225_0.can_issue()) {
      return cb_redirected_c1225_0.issue<QBitmap_Adaptor, QPaintDevice *, QPoint *>(&QBitmap_Adaptor::cbs_redirected_c1225_0, offset);
    } else {
      return QBitmap::redirected(offset);
    }
  }

  //  [adaptor impl] QPainter *QBitmap::sharedPainter()
  QPainter * cbs_sharedPainter_c0_0() const
  {
    return QBitmap::sharedPainter();
  }

  virtual QPainter * sharedPainter() const
  {
    if (cb_sharedPainter_c0_0.can_issue()) {
      return cb_sharedPainter_c0_0.issue<QBitmap_Adaptor, QPainter *>(&QBitmap_Adaptor::cbs_sharedPainter_c0_0);
    } else {
      return QBitmap::sharedPainter();
    }
  }

  gsi::Callback cb_paintEngine_c0_0;
  gsi::Callback cb_initPainter_c1426_0;
  gsi::Callback cb_metric_c3445_0;
  gsi::Callback cb_redirected_c1225_0;
  gsi::Callback cb_sharedPainter_c0_0;
};

QBitmap_Adaptor::~QBitmap_Adaptor() { }

//  Constructor QBitmap::QBitmap() (adaptor class)

static void _init_ctor_QBitmap_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QBitmap_Adaptor> ();
}

static void _call_ctor_QBitmap_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QBitmap_Adaptor *> (new QBitmap_Adaptor ());
}


//  Constructor QBitmap::QBitmap(const QPixmap &) (adaptor class)

static void _init_ctor_QBitmap_Adaptor_2017 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QPixmap & > (argspec_0);
  decl->set_return_new<QBitmap_Adaptor> ();
}

static void _call_ctor_QBitmap_Adaptor_2017 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPixmap &arg1 = args.read<const QPixmap & > (heap);
  ret.write<QBitmap_Adaptor *> (new QBitmap_Adaptor (arg1));
}


//  Constructor QBitmap::QBitmap(int w, int h) (adaptor class)

static void _init_ctor_QBitmap_Adaptor_1426 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("h");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QBitmap_Adaptor> ();
}

static void _call_ctor_QBitmap_Adaptor_1426 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  ret.write<QBitmap_Adaptor *> (new QBitmap_Adaptor (arg1, arg2));
}


//  Constructor QBitmap::QBitmap(const QSize &) (adaptor class)

static void _init_ctor_QBitmap_Adaptor_1805 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return_new<QBitmap_Adaptor> ();
}

static void _call_ctor_QBitmap_Adaptor_1805 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = args.read<const QSize & > (heap);
  ret.write<QBitmap_Adaptor *> (new QBitmap_Adaptor (arg1));
}


//  Constructor QBitmap::QBitmap(const QString &fileName, const char *format) (adaptor class)

static void _init_ctor_QBitmap_Adaptor_3648 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return_new<QBitmap_Adaptor> ();
}

static void _call_ctor_QBitmap_Adaptor_3648 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(0);
  ret.write<QBitmap_Adaptor *> (new QBitmap_Adaptor (arg1, arg2));
}


// exposed QPixmap QBitmap::fromImageInPlace(QImage &image, QFlags<Qt::ImageConversionFlag> flags)

static void _init_fp_fromImageInPlace_4442 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("image");
  decl->add_arg<QImage & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("flags", true, "Qt::AutoColor");
  decl->add_arg<QFlags<Qt::ImageConversionFlag> > (argspec_1);
  decl->set_return<QPixmap > ();
}

static void _call_fp_fromImageInPlace_4442 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QImage &arg1 = args.read<QImage & > (heap);
  QFlags<Qt::ImageConversionFlag> arg2 = args ? args.read<QFlags<Qt::ImageConversionFlag> > (heap) : (QFlags<Qt::ImageConversionFlag>)(Qt::AutoColor);
  ret.write<QPixmap > ((QPixmap)QBitmap_Adaptor::fp_QBitmap_fromImageInPlace_4442 (arg1, arg2));
}


// void QBitmap::initPainter(QPainter *painter)

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
  ((QBitmap_Adaptor *)cls)->cbs_initPainter_c1426_0 (arg1);
}

static void _set_callback_cbs_initPainter_c1426_0 (void *cls, const gsi::Callback &cb)
{
  ((QBitmap_Adaptor *)cls)->cb_initPainter_c1426_0 = cb;
}


// int QBitmap::metric(QPaintDevice::PaintDeviceMetric)

static void _init_cbs_metric_c3445_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_cbs_metric_c3445_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & arg1 = args.read<const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & > (heap);
  ret.write<int > ((int)((QBitmap_Adaptor *)cls)->cbs_metric_c3445_0 (arg1));
}

static void _set_callback_cbs_metric_c3445_0 (void *cls, const gsi::Callback &cb)
{
  ((QBitmap_Adaptor *)cls)->cb_metric_c3445_0 = cb;
}


// QPaintEngine *QBitmap::paintEngine()

static void _init_cbs_paintEngine_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPaintEngine * > ();
}

static void _call_cbs_paintEngine_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPaintEngine * > ((QPaintEngine *)((QBitmap_Adaptor *)cls)->cbs_paintEngine_c0_0 ());
}

static void _set_callback_cbs_paintEngine_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QBitmap_Adaptor *)cls)->cb_paintEngine_c0_0 = cb;
}


// QPaintDevice *QBitmap::redirected(QPoint *offset)

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
  ret.write<QPaintDevice * > ((QPaintDevice *)((QBitmap_Adaptor *)cls)->cbs_redirected_c1225_0 (arg1));
}

static void _set_callback_cbs_redirected_c1225_0 (void *cls, const gsi::Callback &cb)
{
  ((QBitmap_Adaptor *)cls)->cb_redirected_c1225_0 = cb;
}


// QPainter *QBitmap::sharedPainter()

static void _init_cbs_sharedPainter_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPainter * > ();
}

static void _call_cbs_sharedPainter_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPainter * > ((QPainter *)((QBitmap_Adaptor *)cls)->cbs_sharedPainter_c0_0 ());
}

static void _set_callback_cbs_sharedPainter_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QBitmap_Adaptor *)cls)->cb_sharedPainter_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QBitmap> &qtdecl_QBitmap ();

static gsi::Methods methods_QBitmap_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBitmap::QBitmap()\nThis method creates an object of class QBitmap.", &_init_ctor_QBitmap_Adaptor_0, &_call_ctor_QBitmap_Adaptor_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBitmap::QBitmap(const QPixmap &)\nThis method creates an object of class QBitmap.", &_init_ctor_QBitmap_Adaptor_2017, &_call_ctor_QBitmap_Adaptor_2017);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBitmap::QBitmap(int w, int h)\nThis method creates an object of class QBitmap.", &_init_ctor_QBitmap_Adaptor_1426, &_call_ctor_QBitmap_Adaptor_1426);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBitmap::QBitmap(const QSize &)\nThis method creates an object of class QBitmap.", &_init_ctor_QBitmap_Adaptor_1805, &_call_ctor_QBitmap_Adaptor_1805);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBitmap::QBitmap(const QString &fileName, const char *format)\nThis method creates an object of class QBitmap.", &_init_ctor_QBitmap_Adaptor_3648, &_call_ctor_QBitmap_Adaptor_3648);
  methods += new qt_gsi::GenericStaticMethod ("*fromImageInPlace", "@brief Method QPixmap QBitmap::fromImageInPlace(QImage &image, QFlags<Qt::ImageConversionFlag> flags)\nThis method is protected and can only be called from inside a derived class.", &_init_fp_fromImageInPlace_4442, &_call_fp_fromImageInPlace_4442);
  methods += new qt_gsi::GenericMethod ("*initPainter", "@hide", true, &_init_cbs_initPainter_c1426_0, &_call_cbs_initPainter_c1426_0);
  methods += new qt_gsi::GenericMethod ("*initPainter", "@brief Virtual method void QBitmap::initPainter(QPainter *painter)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_initPainter_c1426_0, &_call_cbs_initPainter_c1426_0, &_set_callback_cbs_initPainter_c1426_0);
  methods += new qt_gsi::GenericMethod ("*metric", "@hide", true, &_init_cbs_metric_c3445_0, &_call_cbs_metric_c3445_0);
  methods += new qt_gsi::GenericMethod ("*metric", "@brief Virtual method int QBitmap::metric(QPaintDevice::PaintDeviceMetric)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_metric_c3445_0, &_call_cbs_metric_c3445_0, &_set_callback_cbs_metric_c3445_0);
  methods += new qt_gsi::GenericMethod ("paintEngine", "@hide", true, &_init_cbs_paintEngine_c0_0, &_call_cbs_paintEngine_c0_0);
  methods += new qt_gsi::GenericMethod ("paintEngine", "@brief Virtual method QPaintEngine *QBitmap::paintEngine()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_paintEngine_c0_0, &_call_cbs_paintEngine_c0_0, &_set_callback_cbs_paintEngine_c0_0);
  methods += new qt_gsi::GenericMethod ("*redirected", "@hide", true, &_init_cbs_redirected_c1225_0, &_call_cbs_redirected_c1225_0);
  methods += new qt_gsi::GenericMethod ("*redirected", "@brief Virtual method QPaintDevice *QBitmap::redirected(QPoint *offset)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_redirected_c1225_0, &_call_cbs_redirected_c1225_0, &_set_callback_cbs_redirected_c1225_0);
  methods += new qt_gsi::GenericMethod ("*sharedPainter", "@hide", true, &_init_cbs_sharedPainter_c0_0, &_call_cbs_sharedPainter_c0_0);
  methods += new qt_gsi::GenericMethod ("*sharedPainter", "@brief Virtual method QPainter *QBitmap::sharedPainter()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_sharedPainter_c0_0, &_call_cbs_sharedPainter_c0_0, &_set_callback_cbs_sharedPainter_c0_0);
  return methods;
}

gsi::Class<QBitmap_Adaptor> decl_QBitmap_Adaptor (qtdecl_QBitmap (), "QBitmap",
  methods_QBitmap_Adaptor (),
  "@qt\n@brief Binding of QBitmap");

}

