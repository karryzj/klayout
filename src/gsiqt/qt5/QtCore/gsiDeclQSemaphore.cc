
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
*  @file gsiDeclQSemaphore.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSemaphore>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSemaphore

//  Constructor QSemaphore::QSemaphore(int n)


static void _init_ctor_QSemaphore_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n", true, "0");
  decl->add_arg<int > (argspec_0);
  decl->set_return_new<QSemaphore> ();
}

static void _call_ctor_QSemaphore_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  ret.write<QSemaphore *> (new QSemaphore (arg1));
}


// void QSemaphore::acquire(int n)


static void _init_f_acquire_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n", true, "1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_acquire_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (1, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSemaphore *)cls)->acquire (arg1);
}


// int QSemaphore::available()


static void _init_f_available_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_available_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSemaphore *)cls)->available ());
}


// void QSemaphore::release(int n)


static void _init_f_release_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n", true, "1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_release_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (1, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSemaphore *)cls)->release (arg1);
}


// bool QSemaphore::tryAcquire(int n)


static void _init_f_tryAcquire_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n", true, "1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_tryAcquire_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (1, heap);
  ret.write<bool > ((bool)((QSemaphore *)cls)->tryAcquire (arg1));
}


// bool QSemaphore::tryAcquire(int n, int timeout)


static void _init_f_tryAcquire_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("timeout");
  decl->add_arg<int > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_tryAcquire_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<bool > ((bool)((QSemaphore *)cls)->tryAcquire (arg1, arg2));
}



namespace gsi
{

static gsi::Methods methods_QSemaphore () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSemaphore::QSemaphore(int n)\nThis method creates an object of class QSemaphore.", &_init_ctor_QSemaphore_767, &_call_ctor_QSemaphore_767);
  methods += new qt_gsi::GenericMethod ("acquire", "@brief Method void QSemaphore::acquire(int n)\n", false, &_init_f_acquire_767, &_call_f_acquire_767);
  methods += new qt_gsi::GenericMethod ("available", "@brief Method int QSemaphore::available()\n", true, &_init_f_available_c0, &_call_f_available_c0);
  methods += new qt_gsi::GenericMethod ("release", "@brief Method void QSemaphore::release(int n)\n", false, &_init_f_release_767, &_call_f_release_767);
  methods += new qt_gsi::GenericMethod ("tryAcquire", "@brief Method bool QSemaphore::tryAcquire(int n)\n", false, &_init_f_tryAcquire_767, &_call_f_tryAcquire_767);
  methods += new qt_gsi::GenericMethod ("tryAcquire", "@brief Method bool QSemaphore::tryAcquire(int n, int timeout)\n", false, &_init_f_tryAcquire_1426, &_call_f_tryAcquire_1426);
  return methods;
}

gsi::Class<QSemaphore> decl_QSemaphore ("QtCore", "QSemaphore",
  methods_QSemaphore (),
  "@qt\n@brief Binding of QSemaphore");


GSI_QTCORE_PUBLIC gsi::Class<QSemaphore> &qtdecl_QSemaphore () { return decl_QSemaphore; }

}

