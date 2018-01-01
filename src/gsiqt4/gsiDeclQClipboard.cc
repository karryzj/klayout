
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
*  @file gsiDeclQClipboard.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QClipboard>
#include <QChildEvent>
#include <QEvent>
#include <QImage>
#include <QMimeData>
#include <QObject>
#include <QPixmap>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QClipboard

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QClipboard::staticMetaObject);
}


// void QClipboard::clear(QClipboard::Mode mode)


static void _init_f_clear_1934 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode", true, "QClipboard::Clipboard");
  decl->add_arg<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_clear_1934 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QClipboard::Mode>::target_type & arg1 = args ? args.read<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (heap) : (const qt_gsi::Converter<QClipboard::Mode>::target_type &)(qt_gsi::CppToQtReadAdaptor<QClipboard::Mode>(heap, QClipboard::Clipboard));
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QClipboard *)cls)->clear (qt_gsi::QtToCppAdaptor<QClipboard::Mode>(arg1).cref());
}


// QImage QClipboard::image(QClipboard::Mode mode)


static void _init_f_image_c1934 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode", true, "QClipboard::Clipboard");
  decl->add_arg<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (argspec_0);
  decl->set_return<QImage > ();
}

static void _call_f_image_c1934 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QClipboard::Mode>::target_type & arg1 = args ? args.read<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (heap) : (const qt_gsi::Converter<QClipboard::Mode>::target_type &)(qt_gsi::CppToQtReadAdaptor<QClipboard::Mode>(heap, QClipboard::Clipboard));
  ret.write<QImage > ((QImage)((QClipboard *)cls)->image (qt_gsi::QtToCppAdaptor<QClipboard::Mode>(arg1).cref()));
}


// const QMimeData *QClipboard::mimeData(QClipboard::Mode mode)


static void _init_f_mimeData_c1934 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode", true, "QClipboard::Clipboard");
  decl->add_arg<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (argspec_0);
  decl->set_return<const QMimeData * > ();
}

static void _call_f_mimeData_c1934 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QClipboard::Mode>::target_type & arg1 = args ? args.read<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (heap) : (const qt_gsi::Converter<QClipboard::Mode>::target_type &)(qt_gsi::CppToQtReadAdaptor<QClipboard::Mode>(heap, QClipboard::Clipboard));
  ret.write<const QMimeData * > ((const QMimeData *)((QClipboard *)cls)->mimeData (qt_gsi::QtToCppAdaptor<QClipboard::Mode>(arg1).cref()));
}


// bool QClipboard::ownsClipboard()


static void _init_f_ownsClipboard_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_ownsClipboard_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QClipboard *)cls)->ownsClipboard ());
}


// bool QClipboard::ownsFindBuffer()


static void _init_f_ownsFindBuffer_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_ownsFindBuffer_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QClipboard *)cls)->ownsFindBuffer ());
}


// bool QClipboard::ownsSelection()


static void _init_f_ownsSelection_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_ownsSelection_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QClipboard *)cls)->ownsSelection ());
}


// QPixmap QClipboard::pixmap(QClipboard::Mode mode)


static void _init_f_pixmap_c1934 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode", true, "QClipboard::Clipboard");
  decl->add_arg<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (argspec_0);
  decl->set_return<QPixmap > ();
}

static void _call_f_pixmap_c1934 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QClipboard::Mode>::target_type & arg1 = args ? args.read<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (heap) : (const qt_gsi::Converter<QClipboard::Mode>::target_type &)(qt_gsi::CppToQtReadAdaptor<QClipboard::Mode>(heap, QClipboard::Clipboard));
  ret.write<QPixmap > ((QPixmap)((QClipboard *)cls)->pixmap (qt_gsi::QtToCppAdaptor<QClipboard::Mode>(arg1).cref()));
}


// void QClipboard::setImage(const QImage &, QClipboard::Mode mode)


static void _init_f_setImage_3703 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QImage & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QClipboard::Clipboard");
  decl->add_arg<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setImage_3703 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImage &arg1 = args.read<const QImage & > (heap);
  const qt_gsi::Converter<QClipboard::Mode>::target_type & arg2 = args ? args.read<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (heap) : (const qt_gsi::Converter<QClipboard::Mode>::target_type &)(qt_gsi::CppToQtReadAdaptor<QClipboard::Mode>(heap, QClipboard::Clipboard));
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QClipboard *)cls)->setImage (arg1, qt_gsi::QtToCppAdaptor<QClipboard::Mode>(arg2).cref());
}


// void QClipboard::setMimeData(QMimeData *data, QClipboard::Mode mode)


static void _init_f_setMimeData_3299 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<QMimeData * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QClipboard::Clipboard");
  decl->add_arg<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setMimeData_3299 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMimeData *arg1 = args.read<QMimeData * > (heap);
  const qt_gsi::Converter<QClipboard::Mode>::target_type & arg2 = args ? args.read<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (heap) : (const qt_gsi::Converter<QClipboard::Mode>::target_type &)(qt_gsi::CppToQtReadAdaptor<QClipboard::Mode>(heap, QClipboard::Clipboard));
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QClipboard *)cls)->setMimeData (arg1, qt_gsi::QtToCppAdaptor<QClipboard::Mode>(arg2).cref());
}


// void QClipboard::setPixmap(const QPixmap &, QClipboard::Mode mode)


static void _init_f_setPixmap_3843 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QPixmap & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QClipboard::Clipboard");
  decl->add_arg<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setPixmap_3843 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPixmap &arg1 = args.read<const QPixmap & > (heap);
  const qt_gsi::Converter<QClipboard::Mode>::target_type & arg2 = args ? args.read<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (heap) : (const qt_gsi::Converter<QClipboard::Mode>::target_type &)(qt_gsi::CppToQtReadAdaptor<QClipboard::Mode>(heap, QClipboard::Clipboard));
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QClipboard *)cls)->setPixmap (arg1, qt_gsi::QtToCppAdaptor<QClipboard::Mode>(arg2).cref());
}


// void QClipboard::setText(const QString &, QClipboard::Mode mode)


static void _init_f_setText_3851 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QClipboard::Clipboard");
  decl->add_arg<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setText_3851 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const qt_gsi::Converter<QClipboard::Mode>::target_type & arg2 = args ? args.read<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (heap) : (const qt_gsi::Converter<QClipboard::Mode>::target_type &)(qt_gsi::CppToQtReadAdaptor<QClipboard::Mode>(heap, QClipboard::Clipboard));
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QClipboard *)cls)->setText (arg1, qt_gsi::QtToCppAdaptor<QClipboard::Mode>(arg2).cref());
}


// bool QClipboard::supportsFindBuffer()


static void _init_f_supportsFindBuffer_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_supportsFindBuffer_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QClipboard *)cls)->supportsFindBuffer ());
}


// bool QClipboard::supportsSelection()


static void _init_f_supportsSelection_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_supportsSelection_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QClipboard *)cls)->supportsSelection ());
}


// QString QClipboard::text(QClipboard::Mode mode)


static void _init_f_text_c1934 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode", true, "QClipboard::Clipboard");
  decl->add_arg<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_text_c1934 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QClipboard::Mode>::target_type & arg1 = args ? args.read<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (heap) : (const qt_gsi::Converter<QClipboard::Mode>::target_type &)(qt_gsi::CppToQtReadAdaptor<QClipboard::Mode>(heap, QClipboard::Clipboard));
  ret.write<QString > ((QString)((QClipboard *)cls)->text (qt_gsi::QtToCppAdaptor<QClipboard::Mode>(arg1).cref()));
}


// QString QClipboard::text(QString &subtype, QClipboard::Mode mode)


static void _init_f_text_c3156 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subtype");
  decl->add_arg<QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QClipboard::Clipboard");
  decl->add_arg<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_text_c3156 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString &arg1 = args.read<QString & > (heap);
  const qt_gsi::Converter<QClipboard::Mode>::target_type & arg2 = args ? args.read<const qt_gsi::Converter<QClipboard::Mode>::target_type & > (heap) : (const qt_gsi::Converter<QClipboard::Mode>::target_type &)(qt_gsi::CppToQtReadAdaptor<QClipboard::Mode>(heap, QClipboard::Clipboard));
  ret.write<QString > ((QString)((QClipboard *)cls)->text (arg1, qt_gsi::QtToCppAdaptor<QClipboard::Mode>(arg2).cref()));
}


// static QString QClipboard::tr(const char *s, const char *c)


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
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(0);
  ret.write<QString > ((QString)QClipboard::tr (arg1, arg2));
}


// static QString QClipboard::tr(const char *s, const char *c, int n)


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
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QString > ((QString)QClipboard::tr (arg1, arg2, arg3));
}


// static QString QClipboard::trUtf8(const char *s, const char *c)


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
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(0);
  ret.write<QString > ((QString)QClipboard::trUtf8 (arg1, arg2));
}


// static QString QClipboard::trUtf8(const char *s, const char *c, int n)


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
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QString > ((QString)QClipboard::trUtf8 (arg1, arg2, arg3));
}



namespace gsi
{

static gsi::Methods methods_QClipboard () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QClipboard::clear(QClipboard::Mode mode)\n", false, &_init_f_clear_1934, &_call_f_clear_1934);
  methods += new qt_gsi::GenericMethod ("image", "@brief Method QImage QClipboard::image(QClipboard::Mode mode)\n", true, &_init_f_image_c1934, &_call_f_image_c1934);
  methods += new qt_gsi::GenericMethod ("mimeData", "@brief Method const QMimeData *QClipboard::mimeData(QClipboard::Mode mode)\n", true, &_init_f_mimeData_c1934, &_call_f_mimeData_c1934);
  methods += new qt_gsi::GenericMethod ("ownsClipboard", "@brief Method bool QClipboard::ownsClipboard()\n", true, &_init_f_ownsClipboard_c0, &_call_f_ownsClipboard_c0);
  methods += new qt_gsi::GenericMethod ("ownsFindBuffer", "@brief Method bool QClipboard::ownsFindBuffer()\n", true, &_init_f_ownsFindBuffer_c0, &_call_f_ownsFindBuffer_c0);
  methods += new qt_gsi::GenericMethod ("ownsSelection", "@brief Method bool QClipboard::ownsSelection()\n", true, &_init_f_ownsSelection_c0, &_call_f_ownsSelection_c0);
  methods += new qt_gsi::GenericMethod ("pixmap", "@brief Method QPixmap QClipboard::pixmap(QClipboard::Mode mode)\n", true, &_init_f_pixmap_c1934, &_call_f_pixmap_c1934);
  methods += new qt_gsi::GenericMethod ("setImage", "@brief Method void QClipboard::setImage(const QImage &, QClipboard::Mode mode)\n", false, &_init_f_setImage_3703, &_call_f_setImage_3703);
  methods += new qt_gsi::GenericMethod ("setMimeData", "@brief Method void QClipboard::setMimeData(QMimeData *data, QClipboard::Mode mode)\n", false, &_init_f_setMimeData_3299, &_call_f_setMimeData_3299);
  methods += new qt_gsi::GenericMethod ("setPixmap", "@brief Method void QClipboard::setPixmap(const QPixmap &, QClipboard::Mode mode)\n", false, &_init_f_setPixmap_3843, &_call_f_setPixmap_3843);
  methods += new qt_gsi::GenericMethod ("setText", "@brief Method void QClipboard::setText(const QString &, QClipboard::Mode mode)\n", false, &_init_f_setText_3851, &_call_f_setText_3851);
  methods += new qt_gsi::GenericMethod ("supportsFindBuffer", "@brief Method bool QClipboard::supportsFindBuffer()\n", true, &_init_f_supportsFindBuffer_c0, &_call_f_supportsFindBuffer_c0);
  methods += new qt_gsi::GenericMethod ("supportsSelection", "@brief Method bool QClipboard::supportsSelection()\n", true, &_init_f_supportsSelection_c0, &_call_f_supportsSelection_c0);
  methods += new qt_gsi::GenericMethod ("text", "@brief Method QString QClipboard::text(QClipboard::Mode mode)\n", true, &_init_f_text_c1934, &_call_f_text_c1934);
  methods += new qt_gsi::GenericMethod ("text", "@brief Method QString QClipboard::text(QString &subtype, QClipboard::Mode mode)\n", true, &_init_f_text_c3156, &_call_f_text_c3156);
  methods += gsi::qt_signal<const qt_gsi::Converter<QClipboard::Mode>::target_type & > ("changed(QClipboard::Mode)", "changed", gsi::arg("mode"), "@brief Signal declaration for QClipboard::changed(QClipboard::Mode mode)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("dataChanged()", "dataChanged", "@brief Signal declaration for QClipboard::dataChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QClipboard::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("findBufferChanged()", "findBufferChanged", "@brief Signal declaration for QClipboard::findBufferChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("selectionChanged()", "selectionChanged", "@brief Signal declaration for QClipboard::selectionChanged()\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QClipboard::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QClipboard::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QClipboard::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QClipboard::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QClipboard> decl_QClipboard (qtdecl_QObject (), "QClipboard",
  methods_QClipboard (),
  "@qt\n@brief Binding of QClipboard");


GSIQT_PUBLIC gsi::Class<QClipboard> &qtdecl_QClipboard () { return decl_QClipboard; }

}


//  Implementation of the enum wrapper class for QClipboard::Mode
namespace qt_gsi
{

static gsi::Enum<QClipboard::Mode> decl_QClipboard_Mode_Enum ("QClipboard_Mode",
    gsi::enum_const ("Clipboard", QClipboard::Clipboard, "@brief Enum constant QClipboard::Clipboard") +
    gsi::enum_const ("Selection", QClipboard::Selection, "@brief Enum constant QClipboard::Selection") +
    gsi::enum_const ("FindBuffer", QClipboard::FindBuffer, "@brief Enum constant QClipboard::FindBuffer") +
    gsi::enum_const ("LastMode", QClipboard::LastMode, "@brief Enum constant QClipboard::LastMode"),
  "@qt\n@brief This class represents the QClipboard::Mode enum");

static gsi::QFlagsClass<QClipboard::Mode > decl_QClipboard_Mode_Enums ("QClipboard_QFlags_Mode",
  "@qt\n@brief This class represents the QFlags<QClipboard::Mode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QClipboard> inject_QClipboard_Mode_Enum_in_parent (decl_QClipboard_Mode_Enum.defs ());
static gsi::ClassExt<QClipboard> decl_QClipboard_Mode_Enum_as_child (decl_QClipboard_Mode_Enum, "Mode");
static gsi::ClassExt<QClipboard> decl_QClipboard_Mode_Enums_as_child (decl_QClipboard_Mode_Enums, "QFlags_Mode");

}

