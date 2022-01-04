
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
*  @file gsiDeclQImageReader.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QImageReader>
#include <QColor>
#include <QIODevice>
#include <QImage>
#include <QRect>
#include <QSize>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QImageReader

//  Constructor QImageReader::QImageReader()


static void _init_ctor_QImageReader_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QImageReader> ();
}

static void _call_ctor_QImageReader_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QImageReader *> (new QImageReader ());
}


//  Constructor QImageReader::QImageReader(QIODevice *device, const QByteArray &format)


static void _init_ctor_QImageReader_3648 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format", true, "QByteArray()");
  decl->add_arg<const QByteArray & > (argspec_1);
  decl->set_return_new<QImageReader> ();
}

static void _call_ctor_QImageReader_3648 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  const QByteArray &arg2 = args ? gsi::arg_reader<const QByteArray & >() (args, heap) : gsi::arg_maker<const QByteArray & >() (QByteArray(), heap);
  ret.write<QImageReader *> (new QImageReader (arg1, arg2));
}


//  Constructor QImageReader::QImageReader(const QString &fileName, const QByteArray &format)


static void _init_ctor_QImageReader_4226 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format", true, "QByteArray()");
  decl->add_arg<const QByteArray & > (argspec_1);
  decl->set_return_new<QImageReader> ();
}

static void _call_ctor_QImageReader_4226 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QByteArray &arg2 = args ? gsi::arg_reader<const QByteArray & >() (args, heap) : gsi::arg_maker<const QByteArray & >() (QByteArray(), heap);
  ret.write<QImageReader *> (new QImageReader (arg1, arg2));
}


// bool QImageReader::autoDetectImageFormat()


static void _init_f_autoDetectImageFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_autoDetectImageFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QImageReader *)cls)->autoDetectImageFormat ());
}


// QColor QImageReader::backgroundColor()


static void _init_f_backgroundColor_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QColor > ();
}

static void _call_f_backgroundColor_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QColor > ((QColor)((QImageReader *)cls)->backgroundColor ());
}


// bool QImageReader::canRead()


static void _init_f_canRead_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_canRead_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QImageReader *)cls)->canRead ());
}


// QRect QImageReader::clipRect()


static void _init_f_clipRect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_clipRect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QImageReader *)cls)->clipRect ());
}


// int QImageReader::currentImageNumber()


static void _init_f_currentImageNumber_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_currentImageNumber_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QImageReader *)cls)->currentImageNumber ());
}


// QRect QImageReader::currentImageRect()


static void _init_f_currentImageRect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_currentImageRect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QImageReader *)cls)->currentImageRect ());
}


// bool QImageReader::decideFormatFromContent()


static void _init_f_decideFormatFromContent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_decideFormatFromContent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QImageReader *)cls)->decideFormatFromContent ());
}


// QIODevice *QImageReader::device()


static void _init_f_device_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QIODevice * > ();
}

static void _call_f_device_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIODevice * > ((QIODevice *)((QImageReader *)cls)->device ());
}


// QImageReader::ImageReaderError QImageReader::error()


static void _init_f_error_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QImageReader::ImageReaderError>::target_type > ();
}

static void _call_f_error_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QImageReader::ImageReaderError>::target_type > ((qt_gsi::Converter<QImageReader::ImageReaderError>::target_type)qt_gsi::CppToQtAdaptor<QImageReader::ImageReaderError>(((QImageReader *)cls)->error ()));
}


// QString QImageReader::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QImageReader *)cls)->errorString ());
}


// QString QImageReader::fileName()


static void _init_f_fileName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_fileName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QImageReader *)cls)->fileName ());
}


// QByteArray QImageReader::format()


static void _init_f_format_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_format_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QImageReader *)cls)->format ());
}


// int QImageReader::imageCount()


static void _init_f_imageCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_imageCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QImageReader *)cls)->imageCount ());
}


// QImage::Format QImageReader::imageFormat()


static void _init_f_imageFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QImage::Format>::target_type > ();
}

static void _call_f_imageFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QImage::Format>::target_type > ((qt_gsi::Converter<QImage::Format>::target_type)qt_gsi::CppToQtAdaptor<QImage::Format>(((QImageReader *)cls)->imageFormat ()));
}


// bool QImageReader::jumpToImage(int imageNumber)


static void _init_f_jumpToImage_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("imageNumber");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_jumpToImage_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<bool > ((bool)((QImageReader *)cls)->jumpToImage (arg1));
}


// bool QImageReader::jumpToNextImage()


static void _init_f_jumpToNextImage_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_jumpToNextImage_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QImageReader *)cls)->jumpToNextImage ());
}


// int QImageReader::loopCount()


static void _init_f_loopCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_loopCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QImageReader *)cls)->loopCount ());
}


// int QImageReader::nextImageDelay()


static void _init_f_nextImageDelay_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_nextImageDelay_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QImageReader *)cls)->nextImageDelay ());
}


// int QImageReader::quality()


static void _init_f_quality_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_quality_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QImageReader *)cls)->quality ());
}


// QImage QImageReader::read()


static void _init_f_read_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QImage > ();
}

static void _call_f_read_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QImage > ((QImage)((QImageReader *)cls)->read ());
}


// bool QImageReader::read(QImage *image)


static void _init_f_read_1186 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("image");
  decl->add_arg<QImage * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_read_1186 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QImage *arg1 = gsi::arg_reader<QImage * >() (args, heap);
  ret.write<bool > ((bool)((QImageReader *)cls)->read (arg1));
}


// QRect QImageReader::scaledClipRect()


static void _init_f_scaledClipRect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_scaledClipRect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QImageReader *)cls)->scaledClipRect ());
}


// QSize QImageReader::scaledSize()


static void _init_f_scaledSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_scaledSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QImageReader *)cls)->scaledSize ());
}


// void QImageReader::setAutoDetectImageFormat(bool enabled)


static void _init_f_setAutoDetectImageFormat_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("enabled");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAutoDetectImageFormat_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageReader *)cls)->setAutoDetectImageFormat (arg1);
}


// void QImageReader::setBackgroundColor(const QColor &color)


static void _init_f_setBackgroundColor_1905 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("color");
  decl->add_arg<const QColor & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBackgroundColor_1905 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QColor &arg1 = gsi::arg_reader<const QColor & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageReader *)cls)->setBackgroundColor (arg1);
}


// void QImageReader::setClipRect(const QRect &rect)


static void _init_f_setClipRect_1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rect");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setClipRect_1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageReader *)cls)->setClipRect (arg1);
}


// void QImageReader::setDecideFormatFromContent(bool ignored)


static void _init_f_setDecideFormatFromContent_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ignored");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDecideFormatFromContent_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageReader *)cls)->setDecideFormatFromContent (arg1);
}


// void QImageReader::setDevice(QIODevice *device)


static void _init_f_setDevice_1447 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDevice_1447 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageReader *)cls)->setDevice (arg1);
}


// void QImageReader::setFileName(const QString &fileName)


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
  ((QImageReader *)cls)->setFileName (arg1);
}


// void QImageReader::setFormat(const QByteArray &format)


static void _init_f_setFormat_2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFormat_2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageReader *)cls)->setFormat (arg1);
}


// void QImageReader::setQuality(int quality)


static void _init_f_setQuality_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("quality");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setQuality_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageReader *)cls)->setQuality (arg1);
}


// void QImageReader::setScaledClipRect(const QRect &rect)


static void _init_f_setScaledClipRect_1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rect");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setScaledClipRect_1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageReader *)cls)->setScaledClipRect (arg1);
}


// void QImageReader::setScaledSize(const QSize &size)


static void _init_f_setScaledSize_1805 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setScaledSize_1805 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageReader *)cls)->setScaledSize (arg1);
}


// QSize QImageReader::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QImageReader *)cls)->size ());
}


// bool QImageReader::supportsAnimation()


static void _init_f_supportsAnimation_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_supportsAnimation_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QImageReader *)cls)->supportsAnimation ());
}


// bool QImageReader::supportsOption(QImageIOHandler::ImageOption option)


static void _init_f_supportsOption_c3086 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const qt_gsi::Converter<QImageIOHandler::ImageOption>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_supportsOption_c3086 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QImageIOHandler::ImageOption>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QImageIOHandler::ImageOption>::target_type & >() (args, heap);
  ret.write<bool > ((bool)((QImageReader *)cls)->supportsOption (qt_gsi::QtToCppAdaptor<QImageIOHandler::ImageOption>(arg1).cref()));
}


// QString QImageReader::text(const QString &key)


static void _init_f_text_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_text_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QImageReader *)cls)->text (arg1));
}


// QStringList QImageReader::textKeys()


static void _init_f_textKeys_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_textKeys_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QImageReader *)cls)->textKeys ());
}


// static QByteArray QImageReader::imageFormat(const QString &fileName)


static void _init_f_imageFormat_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_imageFormat_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QByteArray > ((QByteArray)QImageReader::imageFormat (arg1));
}


// static QByteArray QImageReader::imageFormat(QIODevice *device)


static void _init_f_imageFormat_1447 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_imageFormat_1447 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  ret.write<QByteArray > ((QByteArray)QImageReader::imageFormat (arg1));
}


// static QList<QByteArray> QImageReader::supportedImageFormats()


static void _init_f_supportedImageFormats_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_supportedImageFormats_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)QImageReader::supportedImageFormats ());
}



namespace gsi
{

static gsi::Methods methods_QImageReader () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QImageReader::QImageReader()\nThis method creates an object of class QImageReader.", &_init_ctor_QImageReader_0, &_call_ctor_QImageReader_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QImageReader::QImageReader(QIODevice *device, const QByteArray &format)\nThis method creates an object of class QImageReader.", &_init_ctor_QImageReader_3648, &_call_ctor_QImageReader_3648);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QImageReader::QImageReader(const QString &fileName, const QByteArray &format)\nThis method creates an object of class QImageReader.", &_init_ctor_QImageReader_4226, &_call_ctor_QImageReader_4226);
  methods += new qt_gsi::GenericMethod (":autoDetectImageFormat", "@brief Method bool QImageReader::autoDetectImageFormat()\n", true, &_init_f_autoDetectImageFormat_c0, &_call_f_autoDetectImageFormat_c0);
  methods += new qt_gsi::GenericMethod (":backgroundColor", "@brief Method QColor QImageReader::backgroundColor()\n", true, &_init_f_backgroundColor_c0, &_call_f_backgroundColor_c0);
  methods += new qt_gsi::GenericMethod ("canRead", "@brief Method bool QImageReader::canRead()\n", true, &_init_f_canRead_c0, &_call_f_canRead_c0);
  methods += new qt_gsi::GenericMethod (":clipRect", "@brief Method QRect QImageReader::clipRect()\n", true, &_init_f_clipRect_c0, &_call_f_clipRect_c0);
  methods += new qt_gsi::GenericMethod ("currentImageNumber", "@brief Method int QImageReader::currentImageNumber()\n", true, &_init_f_currentImageNumber_c0, &_call_f_currentImageNumber_c0);
  methods += new qt_gsi::GenericMethod ("currentImageRect", "@brief Method QRect QImageReader::currentImageRect()\n", true, &_init_f_currentImageRect_c0, &_call_f_currentImageRect_c0);
  methods += new qt_gsi::GenericMethod (":decideFormatFromContent", "@brief Method bool QImageReader::decideFormatFromContent()\n", true, &_init_f_decideFormatFromContent_c0, &_call_f_decideFormatFromContent_c0);
  methods += new qt_gsi::GenericMethod (":device", "@brief Method QIODevice *QImageReader::device()\n", true, &_init_f_device_c0, &_call_f_device_c0);
  methods += new qt_gsi::GenericMethod ("error", "@brief Method QImageReader::ImageReaderError QImageReader::error()\n", true, &_init_f_error_c0, &_call_f_error_c0);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Method QString QImageReader::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  methods += new qt_gsi::GenericMethod (":fileName", "@brief Method QString QImageReader::fileName()\n", true, &_init_f_fileName_c0, &_call_f_fileName_c0);
  methods += new qt_gsi::GenericMethod (":format", "@brief Method QByteArray QImageReader::format()\n", true, &_init_f_format_c0, &_call_f_format_c0);
  methods += new qt_gsi::GenericMethod ("imageCount", "@brief Method int QImageReader::imageCount()\n", true, &_init_f_imageCount_c0, &_call_f_imageCount_c0);
  methods += new qt_gsi::GenericMethod ("imageFormat", "@brief Method QImage::Format QImageReader::imageFormat()\n", true, &_init_f_imageFormat_c0, &_call_f_imageFormat_c0);
  methods += new qt_gsi::GenericMethod ("jumpToImage", "@brief Method bool QImageReader::jumpToImage(int imageNumber)\n", false, &_init_f_jumpToImage_767, &_call_f_jumpToImage_767);
  methods += new qt_gsi::GenericMethod ("jumpToNextImage", "@brief Method bool QImageReader::jumpToNextImage()\n", false, &_init_f_jumpToNextImage_0, &_call_f_jumpToNextImage_0);
  methods += new qt_gsi::GenericMethod ("loopCount", "@brief Method int QImageReader::loopCount()\n", true, &_init_f_loopCount_c0, &_call_f_loopCount_c0);
  methods += new qt_gsi::GenericMethod ("nextImageDelay", "@brief Method int QImageReader::nextImageDelay()\n", true, &_init_f_nextImageDelay_c0, &_call_f_nextImageDelay_c0);
  methods += new qt_gsi::GenericMethod (":quality", "@brief Method int QImageReader::quality()\n", true, &_init_f_quality_c0, &_call_f_quality_c0);
  methods += new qt_gsi::GenericMethod ("read", "@brief Method QImage QImageReader::read()\n", false, &_init_f_read_0, &_call_f_read_0);
  methods += new qt_gsi::GenericMethod ("read", "@brief Method bool QImageReader::read(QImage *image)\n", false, &_init_f_read_1186, &_call_f_read_1186);
  methods += new qt_gsi::GenericMethod (":scaledClipRect", "@brief Method QRect QImageReader::scaledClipRect()\n", true, &_init_f_scaledClipRect_c0, &_call_f_scaledClipRect_c0);
  methods += new qt_gsi::GenericMethod (":scaledSize", "@brief Method QSize QImageReader::scaledSize()\n", true, &_init_f_scaledSize_c0, &_call_f_scaledSize_c0);
  methods += new qt_gsi::GenericMethod ("setAutoDetectImageFormat|autoDetectImageFormat=", "@brief Method void QImageReader::setAutoDetectImageFormat(bool enabled)\n", false, &_init_f_setAutoDetectImageFormat_864, &_call_f_setAutoDetectImageFormat_864);
  methods += new qt_gsi::GenericMethod ("setBackgroundColor|backgroundColor=", "@brief Method void QImageReader::setBackgroundColor(const QColor &color)\n", false, &_init_f_setBackgroundColor_1905, &_call_f_setBackgroundColor_1905);
  methods += new qt_gsi::GenericMethod ("setClipRect|clipRect=", "@brief Method void QImageReader::setClipRect(const QRect &rect)\n", false, &_init_f_setClipRect_1792, &_call_f_setClipRect_1792);
  methods += new qt_gsi::GenericMethod ("setDecideFormatFromContent|decideFormatFromContent=", "@brief Method void QImageReader::setDecideFormatFromContent(bool ignored)\n", false, &_init_f_setDecideFormatFromContent_864, &_call_f_setDecideFormatFromContent_864);
  methods += new qt_gsi::GenericMethod ("setDevice|device=", "@brief Method void QImageReader::setDevice(QIODevice *device)\n", false, &_init_f_setDevice_1447, &_call_f_setDevice_1447);
  methods += new qt_gsi::GenericMethod ("setFileName|fileName=", "@brief Method void QImageReader::setFileName(const QString &fileName)\n", false, &_init_f_setFileName_2025, &_call_f_setFileName_2025);
  methods += new qt_gsi::GenericMethod ("setFormat|format=", "@brief Method void QImageReader::setFormat(const QByteArray &format)\n", false, &_init_f_setFormat_2309, &_call_f_setFormat_2309);
  methods += new qt_gsi::GenericMethod ("setQuality|quality=", "@brief Method void QImageReader::setQuality(int quality)\n", false, &_init_f_setQuality_767, &_call_f_setQuality_767);
  methods += new qt_gsi::GenericMethod ("setScaledClipRect|scaledClipRect=", "@brief Method void QImageReader::setScaledClipRect(const QRect &rect)\n", false, &_init_f_setScaledClipRect_1792, &_call_f_setScaledClipRect_1792);
  methods += new qt_gsi::GenericMethod ("setScaledSize|scaledSize=", "@brief Method void QImageReader::setScaledSize(const QSize &size)\n", false, &_init_f_setScaledSize_1805, &_call_f_setScaledSize_1805);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method QSize QImageReader::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod ("supportsAnimation", "@brief Method bool QImageReader::supportsAnimation()\n", true, &_init_f_supportsAnimation_c0, &_call_f_supportsAnimation_c0);
  methods += new qt_gsi::GenericMethod ("supportsOption", "@brief Method bool QImageReader::supportsOption(QImageIOHandler::ImageOption option)\n", true, &_init_f_supportsOption_c3086, &_call_f_supportsOption_c3086);
  methods += new qt_gsi::GenericMethod ("text", "@brief Method QString QImageReader::text(const QString &key)\n", true, &_init_f_text_c2025, &_call_f_text_c2025);
  methods += new qt_gsi::GenericMethod ("textKeys", "@brief Method QStringList QImageReader::textKeys()\n", true, &_init_f_textKeys_c0, &_call_f_textKeys_c0);
  methods += new qt_gsi::GenericStaticMethod ("imageFormat", "@brief Static method QByteArray QImageReader::imageFormat(const QString &fileName)\nThis method is static and can be called without an instance.", &_init_f_imageFormat_2025, &_call_f_imageFormat_2025);
  methods += new qt_gsi::GenericStaticMethod ("imageFormat", "@brief Static method QByteArray QImageReader::imageFormat(QIODevice *device)\nThis method is static and can be called without an instance.", &_init_f_imageFormat_1447, &_call_f_imageFormat_1447);
  methods += new qt_gsi::GenericStaticMethod ("supportedImageFormats", "@brief Static method QList<QByteArray> QImageReader::supportedImageFormats()\nThis method is static and can be called without an instance.", &_init_f_supportedImageFormats_0, &_call_f_supportedImageFormats_0);
  return methods;
}

gsi::Class<QImageReader> decl_QImageReader ("QtGui", "QImageReader",
  methods_QImageReader (),
  "@qt\n@brief Binding of QImageReader");


GSI_QTGUI_PUBLIC gsi::Class<QImageReader> &qtdecl_QImageReader () { return decl_QImageReader; }

}


//  Implementation of the enum wrapper class for QImageReader::ImageReaderError
namespace qt_gsi
{

static gsi::Enum<QImageReader::ImageReaderError> decl_QImageReader_ImageReaderError_Enum ("QtGui", "QImageReader_ImageReaderError",
    gsi::enum_const ("UnknownError", QImageReader::UnknownError, "@brief Enum constant QImageReader::UnknownError") +
    gsi::enum_const ("FileNotFoundError", QImageReader::FileNotFoundError, "@brief Enum constant QImageReader::FileNotFoundError") +
    gsi::enum_const ("DeviceError", QImageReader::DeviceError, "@brief Enum constant QImageReader::DeviceError") +
    gsi::enum_const ("UnsupportedFormatError", QImageReader::UnsupportedFormatError, "@brief Enum constant QImageReader::UnsupportedFormatError") +
    gsi::enum_const ("InvalidDataError", QImageReader::InvalidDataError, "@brief Enum constant QImageReader::InvalidDataError"),
  "@qt\n@brief This class represents the QImageReader::ImageReaderError enum");

static gsi::QFlagsClass<QImageReader::ImageReaderError > decl_QImageReader_ImageReaderError_Enums ("QtGui", "QImageReader_QFlags_ImageReaderError",
  "@qt\n@brief This class represents the QFlags<QImageReader::ImageReaderError> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QImageReader> inject_QImageReader_ImageReaderError_Enum_in_parent (decl_QImageReader_ImageReaderError_Enum.defs ());
static gsi::ClassExt<QImageReader> decl_QImageReader_ImageReaderError_Enum_as_child (decl_QImageReader_ImageReaderError_Enum, "ImageReaderError");
static gsi::ClassExt<QImageReader> decl_QImageReader_ImageReaderError_Enums_as_child (decl_QImageReader_ImageReaderError_Enums, "QFlags_ImageReaderError");

}

