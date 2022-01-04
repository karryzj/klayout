
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
*  @file gsiDeclQTextListFormat.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextListFormat>
#include <QBrush>
#include <QColor>
#include <QPen>
#include <QTextBlockFormat>
#include <QTextCharFormat>
#include <QTextFormat>
#include <QTextFrameFormat>
#include <QTextImageFormat>
#include <QTextLength>
#include <QTextTableCellFormat>
#include <QTextTableFormat>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextListFormat

//  Constructor QTextListFormat::QTextListFormat()


static void _init_ctor_QTextListFormat_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextListFormat> ();
}

static void _call_ctor_QTextListFormat_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextListFormat *> (new QTextListFormat ());
}


// int QTextListFormat::indent()


static void _init_f_indent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_indent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextListFormat *)cls)->indent ());
}


// bool QTextListFormat::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextListFormat *)cls)->isValid ());
}


// QString QTextListFormat::numberPrefix()


static void _init_f_numberPrefix_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_numberPrefix_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTextListFormat *)cls)->numberPrefix ());
}


// QString QTextListFormat::numberSuffix()


static void _init_f_numberSuffix_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_numberSuffix_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTextListFormat *)cls)->numberSuffix ());
}


// void QTextListFormat::setIndent(int indent)


static void _init_f_setIndent_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("indent");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setIndent_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextListFormat *)cls)->setIndent (arg1);
}


// void QTextListFormat::setNumberPrefix(const QString &numberPrefix)


static void _init_f_setNumberPrefix_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("numberPrefix");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNumberPrefix_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextListFormat *)cls)->setNumberPrefix (arg1);
}


// void QTextListFormat::setNumberSuffix(const QString &numberSuffix)


static void _init_f_setNumberSuffix_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("numberSuffix");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNumberSuffix_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextListFormat *)cls)->setNumberSuffix (arg1);
}


// void QTextListFormat::setStyle(QTextListFormat::Style style)


static void _init_f_setStyle_2612 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("style");
  decl->add_arg<const qt_gsi::Converter<QTextListFormat::Style>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setStyle_2612 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QTextListFormat::Style>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QTextListFormat::Style>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextListFormat *)cls)->setStyle (qt_gsi::QtToCppAdaptor<QTextListFormat::Style>(arg1).cref());
}


// QTextListFormat::Style QTextListFormat::style()


static void _init_f_style_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QTextListFormat::Style>::target_type > ();
}

static void _call_f_style_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QTextListFormat::Style>::target_type > ((qt_gsi::Converter<QTextListFormat::Style>::target_type)qt_gsi::CppToQtAdaptor<QTextListFormat::Style>(((QTextListFormat *)cls)->style ()));
}



namespace gsi
{

static gsi::Methods methods_QTextListFormat () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextListFormat::QTextListFormat()\nThis method creates an object of class QTextListFormat.", &_init_ctor_QTextListFormat_0, &_call_ctor_QTextListFormat_0);
  methods += new qt_gsi::GenericMethod (":indent", "@brief Method int QTextListFormat::indent()\n", true, &_init_f_indent_c0, &_call_f_indent_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QTextListFormat::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod (":numberPrefix", "@brief Method QString QTextListFormat::numberPrefix()\n", true, &_init_f_numberPrefix_c0, &_call_f_numberPrefix_c0);
  methods += new qt_gsi::GenericMethod (":numberSuffix", "@brief Method QString QTextListFormat::numberSuffix()\n", true, &_init_f_numberSuffix_c0, &_call_f_numberSuffix_c0);
  methods += new qt_gsi::GenericMethod ("setIndent|indent=", "@brief Method void QTextListFormat::setIndent(int indent)\n", false, &_init_f_setIndent_767, &_call_f_setIndent_767);
  methods += new qt_gsi::GenericMethod ("setNumberPrefix|numberPrefix=", "@brief Method void QTextListFormat::setNumberPrefix(const QString &numberPrefix)\n", false, &_init_f_setNumberPrefix_2025, &_call_f_setNumberPrefix_2025);
  methods += new qt_gsi::GenericMethod ("setNumberSuffix|numberSuffix=", "@brief Method void QTextListFormat::setNumberSuffix(const QString &numberSuffix)\n", false, &_init_f_setNumberSuffix_2025, &_call_f_setNumberSuffix_2025);
  methods += new qt_gsi::GenericMethod ("setStyle|style=", "@brief Method void QTextListFormat::setStyle(QTextListFormat::Style style)\n", false, &_init_f_setStyle_2612, &_call_f_setStyle_2612);
  methods += new qt_gsi::GenericMethod (":style", "@brief Method QTextListFormat::Style QTextListFormat::style()\n", true, &_init_f_style_c0, &_call_f_style_c0);
  return methods;
}

gsi::Class<QTextFormat> &qtdecl_QTextFormat ();

gsi::Class<QTextListFormat> decl_QTextListFormat (qtdecl_QTextFormat (), "QtGui", "QTextListFormat",
  methods_QTextListFormat (),
  "@qt\n@brief Binding of QTextListFormat");


GSI_QTGUI_PUBLIC gsi::Class<QTextListFormat> &qtdecl_QTextListFormat () { return decl_QTextListFormat; }

}


//  Implementation of the enum wrapper class for QTextListFormat::Style
namespace qt_gsi
{

static gsi::Enum<QTextListFormat::Style> decl_QTextListFormat_Style_Enum ("QtGui", "QTextListFormat_Style",
    gsi::enum_const ("ListDisc", QTextListFormat::ListDisc, "@brief Enum constant QTextListFormat::ListDisc") +
    gsi::enum_const ("ListCircle", QTextListFormat::ListCircle, "@brief Enum constant QTextListFormat::ListCircle") +
    gsi::enum_const ("ListSquare", QTextListFormat::ListSquare, "@brief Enum constant QTextListFormat::ListSquare") +
    gsi::enum_const ("ListDecimal", QTextListFormat::ListDecimal, "@brief Enum constant QTextListFormat::ListDecimal") +
    gsi::enum_const ("ListLowerAlpha", QTextListFormat::ListLowerAlpha, "@brief Enum constant QTextListFormat::ListLowerAlpha") +
    gsi::enum_const ("ListUpperAlpha", QTextListFormat::ListUpperAlpha, "@brief Enum constant QTextListFormat::ListUpperAlpha") +
    gsi::enum_const ("ListLowerRoman", QTextListFormat::ListLowerRoman, "@brief Enum constant QTextListFormat::ListLowerRoman") +
    gsi::enum_const ("ListUpperRoman", QTextListFormat::ListUpperRoman, "@brief Enum constant QTextListFormat::ListUpperRoman") +
    gsi::enum_const ("ListStyleUndefined", QTextListFormat::ListStyleUndefined, "@brief Enum constant QTextListFormat::ListStyleUndefined"),
  "@qt\n@brief This class represents the QTextListFormat::Style enum");

static gsi::QFlagsClass<QTextListFormat::Style > decl_QTextListFormat_Style_Enums ("QtGui", "QTextListFormat_QFlags_Style",
  "@qt\n@brief This class represents the QFlags<QTextListFormat::Style> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTextListFormat> inject_QTextListFormat_Style_Enum_in_parent (decl_QTextListFormat_Style_Enum.defs ());
static gsi::ClassExt<QTextListFormat> decl_QTextListFormat_Style_Enum_as_child (decl_QTextListFormat_Style_Enum, "Style");
static gsi::ClassExt<QTextListFormat> decl_QTextListFormat_Style_Enums_as_child (decl_QTextListFormat_Style_Enums, "QFlags_Style");

}

