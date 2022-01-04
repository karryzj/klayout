
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
*  @file gsiDeclQFontInfo.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QFontInfo>
#include <QFont>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QFontInfo

//  Constructor QFontInfo::QFontInfo(const QFont &)


static void _init_ctor_QFontInfo_1801 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFont & > (argspec_0);
  decl->set_return_new<QFontInfo> ();
}

static void _call_ctor_QFontInfo_1801 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFont &arg1 = gsi::arg_reader<const QFont & >() (args, heap);
  ret.write<QFontInfo *> (new QFontInfo (arg1));
}


//  Constructor QFontInfo::QFontInfo(const QFontInfo &)


static void _init_ctor_QFontInfo_2197 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFontInfo & > (argspec_0);
  decl->set_return_new<QFontInfo> ();
}

static void _call_ctor_QFontInfo_2197 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFontInfo &arg1 = gsi::arg_reader<const QFontInfo & >() (args, heap);
  ret.write<QFontInfo *> (new QFontInfo (arg1));
}


// bool QFontInfo::bold()


static void _init_f_bold_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_bold_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFontInfo *)cls)->bold ());
}


// bool QFontInfo::exactMatch()


static void _init_f_exactMatch_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_exactMatch_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFontInfo *)cls)->exactMatch ());
}


// QString QFontInfo::family()


static void _init_f_family_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_family_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFontInfo *)cls)->family ());
}


// bool QFontInfo::fixedPitch()


static void _init_f_fixedPitch_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_fixedPitch_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFontInfo *)cls)->fixedPitch ());
}


// bool QFontInfo::italic()


static void _init_f_italic_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_italic_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFontInfo *)cls)->italic ());
}


// QFontInfo &QFontInfo::operator=(const QFontInfo &)


static void _init_f_operator_eq__2197 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QFontInfo & > (argspec_0);
  decl->set_return<QFontInfo & > ();
}

static void _call_f_operator_eq__2197 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFontInfo &arg1 = gsi::arg_reader<const QFontInfo & >() (args, heap);
  ret.write<QFontInfo & > ((QFontInfo &)((QFontInfo *)cls)->operator= (arg1));
}


// bool QFontInfo::overline()


static void _init_f_overline_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_overline_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFontInfo *)cls)->overline ());
}


// int QFontInfo::pixelSize()


static void _init_f_pixelSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_pixelSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontInfo *)cls)->pixelSize ());
}


// int QFontInfo::pointSize()


static void _init_f_pointSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_pointSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontInfo *)cls)->pointSize ());
}


// double QFontInfo::pointSizeF()


static void _init_f_pointSizeF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_pointSizeF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QFontInfo *)cls)->pointSizeF ());
}


// bool QFontInfo::rawMode()


static void _init_f_rawMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_rawMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFontInfo *)cls)->rawMode ());
}


// bool QFontInfo::strikeOut()


static void _init_f_strikeOut_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_strikeOut_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFontInfo *)cls)->strikeOut ());
}


// QFont::Style QFontInfo::style()


static void _init_f_style_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QFont::Style>::target_type > ();
}

static void _call_f_style_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QFont::Style>::target_type > ((qt_gsi::Converter<QFont::Style>::target_type)qt_gsi::CppToQtAdaptor<QFont::Style>(((QFontInfo *)cls)->style ()));
}


// QFont::StyleHint QFontInfo::styleHint()


static void _init_f_styleHint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QFont::StyleHint>::target_type > ();
}

static void _call_f_styleHint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QFont::StyleHint>::target_type > ((qt_gsi::Converter<QFont::StyleHint>::target_type)qt_gsi::CppToQtAdaptor<QFont::StyleHint>(((QFontInfo *)cls)->styleHint ()));
}


// QString QFontInfo::styleName()


static void _init_f_styleName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_styleName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFontInfo *)cls)->styleName ());
}


// void QFontInfo::swap(QFontInfo &other)


static void _init_f_swap_1502 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QFontInfo & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1502 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFontInfo &arg1 = gsi::arg_reader<QFontInfo & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFontInfo *)cls)->swap (arg1);
}


// bool QFontInfo::underline()


static void _init_f_underline_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_underline_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFontInfo *)cls)->underline ());
}


// int QFontInfo::weight()


static void _init_f_weight_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_weight_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QFontInfo *)cls)->weight ());
}



namespace gsi
{

static gsi::Methods methods_QFontInfo () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFontInfo::QFontInfo(const QFont &)\nThis method creates an object of class QFontInfo.", &_init_ctor_QFontInfo_1801, &_call_ctor_QFontInfo_1801);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFontInfo::QFontInfo(const QFontInfo &)\nThis method creates an object of class QFontInfo.", &_init_ctor_QFontInfo_2197, &_call_ctor_QFontInfo_2197);
  methods += new qt_gsi::GenericMethod ("bold", "@brief Method bool QFontInfo::bold()\n", true, &_init_f_bold_c0, &_call_f_bold_c0);
  methods += new qt_gsi::GenericMethod ("exactMatch", "@brief Method bool QFontInfo::exactMatch()\n", true, &_init_f_exactMatch_c0, &_call_f_exactMatch_c0);
  methods += new qt_gsi::GenericMethod ("family", "@brief Method QString QFontInfo::family()\n", true, &_init_f_family_c0, &_call_f_family_c0);
  methods += new qt_gsi::GenericMethod ("fixedPitch", "@brief Method bool QFontInfo::fixedPitch()\n", true, &_init_f_fixedPitch_c0, &_call_f_fixedPitch_c0);
  methods += new qt_gsi::GenericMethod ("italic", "@brief Method bool QFontInfo::italic()\n", true, &_init_f_italic_c0, &_call_f_italic_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QFontInfo &QFontInfo::operator=(const QFontInfo &)\n", false, &_init_f_operator_eq__2197, &_call_f_operator_eq__2197);
  methods += new qt_gsi::GenericMethod ("overline", "@brief Method bool QFontInfo::overline()\n", true, &_init_f_overline_c0, &_call_f_overline_c0);
  methods += new qt_gsi::GenericMethod ("pixelSize", "@brief Method int QFontInfo::pixelSize()\n", true, &_init_f_pixelSize_c0, &_call_f_pixelSize_c0);
  methods += new qt_gsi::GenericMethod ("pointSize", "@brief Method int QFontInfo::pointSize()\n", true, &_init_f_pointSize_c0, &_call_f_pointSize_c0);
  methods += new qt_gsi::GenericMethod ("pointSizeF", "@brief Method double QFontInfo::pointSizeF()\n", true, &_init_f_pointSizeF_c0, &_call_f_pointSizeF_c0);
  methods += new qt_gsi::GenericMethod ("rawMode", "@brief Method bool QFontInfo::rawMode()\n", true, &_init_f_rawMode_c0, &_call_f_rawMode_c0);
  methods += new qt_gsi::GenericMethod ("strikeOut", "@brief Method bool QFontInfo::strikeOut()\n", true, &_init_f_strikeOut_c0, &_call_f_strikeOut_c0);
  methods += new qt_gsi::GenericMethod ("style", "@brief Method QFont::Style QFontInfo::style()\n", true, &_init_f_style_c0, &_call_f_style_c0);
  methods += new qt_gsi::GenericMethod ("styleHint", "@brief Method QFont::StyleHint QFontInfo::styleHint()\n", true, &_init_f_styleHint_c0, &_call_f_styleHint_c0);
  methods += new qt_gsi::GenericMethod ("styleName", "@brief Method QString QFontInfo::styleName()\n", true, &_init_f_styleName_c0, &_call_f_styleName_c0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QFontInfo::swap(QFontInfo &other)\n", false, &_init_f_swap_1502, &_call_f_swap_1502);
  methods += new qt_gsi::GenericMethod ("underline", "@brief Method bool QFontInfo::underline()\n", true, &_init_f_underline_c0, &_call_f_underline_c0);
  methods += new qt_gsi::GenericMethod ("weight", "@brief Method int QFontInfo::weight()\n", true, &_init_f_weight_c0, &_call_f_weight_c0);
  return methods;
}

gsi::Class<QFontInfo> decl_QFontInfo ("QtGui", "QFontInfo",
  methods_QFontInfo (),
  "@qt\n@brief Binding of QFontInfo");


GSI_QTGUI_PUBLIC gsi::Class<QFontInfo> &qtdecl_QFontInfo () { return decl_QFontInfo; }

}

