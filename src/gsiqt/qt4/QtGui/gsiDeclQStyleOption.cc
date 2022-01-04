
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
*  @file gsiDeclQStyleOption.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOption

//  Constructor QStyleOption::QStyleOption(int version, int type)


static void _init_ctor_QStyleOption_1426 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("version", true, "QStyleOption::Version");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("type", true, "QStyleOption::SO_Default");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QStyleOption> ();
}

static void _call_ctor_QStyleOption_1426 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (QStyleOption::Version, heap);
  int arg2 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (QStyleOption::SO_Default, heap);
  ret.write<QStyleOption *> (new QStyleOption (arg1, arg2));
}


//  Constructor QStyleOption::QStyleOption(const QStyleOption &other)


static void _init_ctor_QStyleOption_2556 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOption & > (argspec_0);
  decl->set_return_new<QStyleOption> ();
}

static void _call_ctor_QStyleOption_2556 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOption &arg1 = gsi::arg_reader<const QStyleOption & >() (args, heap);
  ret.write<QStyleOption *> (new QStyleOption (arg1));
}


// void QStyleOption::init(const QWidget *w)


static void _init_f_init_2010 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<const QWidget * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_init_2010 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QWidget *arg1 = gsi::arg_reader<const QWidget * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStyleOption *)cls)->init (arg1);
}


// void QStyleOption::initFrom(const QWidget *w)


static void _init_f_initFrom_2010 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<const QWidget * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_initFrom_2010 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QWidget *arg1 = gsi::arg_reader<const QWidget * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QStyleOption *)cls)->initFrom (arg1);
}


// QStyleOption &QStyleOption::operator=(const QStyleOption &other)


static void _init_f_operator_eq__2556 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOption & > (argspec_0);
  decl->set_return<QStyleOption & > ();
}

static void _call_f_operator_eq__2556 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOption &arg1 = gsi::arg_reader<const QStyleOption & >() (args, heap);
  ret.write<QStyleOption & > ((QStyleOption &)((QStyleOption *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOption () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOption::QStyleOption(int version, int type)\nThis method creates an object of class QStyleOption.", &_init_ctor_QStyleOption_1426, &_call_ctor_QStyleOption_1426);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOption::QStyleOption(const QStyleOption &other)\nThis method creates an object of class QStyleOption.", &_init_ctor_QStyleOption_2556, &_call_ctor_QStyleOption_2556);
  methods += new qt_gsi::GenericMethod ("init", "@brief Method void QStyleOption::init(const QWidget *w)\n", false, &_init_f_init_2010, &_call_f_init_2010);
  methods += new qt_gsi::GenericMethod ("initFrom", "@brief Method void QStyleOption::initFrom(const QWidget *w)\n", false, &_init_f_initFrom_2010, &_call_f_initFrom_2010);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QStyleOption &QStyleOption::operator=(const QStyleOption &other)\n", false, &_init_f_operator_eq__2556, &_call_f_operator_eq__2556);
  return methods;
}

gsi::Class<QStyleOption> decl_QStyleOption ("QtGui", "QStyleOption",
  methods_QStyleOption (),
  "@qt\n@brief Binding of QStyleOption");


GSI_QTGUI_PUBLIC gsi::Class<QStyleOption> &qtdecl_QStyleOption () { return decl_QStyleOption; }

}

