
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
*  @file gsiDeclQTextTable.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextTable>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFrame>
#include <QTextFrameFormat>
#include <QTextTableCell>
#include <QTextTableFormat>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextTable

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QTextTable::staticMetaObject);
}


// void QTextTable::appendColumns(int count)


static void _init_f_appendColumns_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("count");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_appendColumns_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTable *)cls)->appendColumns (arg1);
}


// void QTextTable::appendRows(int count)


static void _init_f_appendRows_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("count");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_appendRows_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTable *)cls)->appendRows (arg1);
}


// QTextTableCell QTextTable::cellAt(int row, int col)


static void _init_f_cellAt_c1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("row");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("col");
  decl->add_arg<int > (argspec_1);
  decl->set_return<QTextTableCell > ();
}

static void _call_f_cellAt_c1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<QTextTableCell > ((QTextTableCell)((QTextTable *)cls)->cellAt (arg1, arg2));
}


// QTextTableCell QTextTable::cellAt(int position)


static void _init_f_cellAt_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("position");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QTextTableCell > ();
}

static void _call_f_cellAt_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QTextTableCell > ((QTextTableCell)((QTextTable *)cls)->cellAt (arg1));
}


// QTextTableCell QTextTable::cellAt(const QTextCursor &c)


static void _init_f_cellAt_c2453 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<const QTextCursor & > (argspec_0);
  decl->set_return<QTextTableCell > ();
}

static void _call_f_cellAt_c2453 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextCursor &arg1 = gsi::arg_reader<const QTextCursor & >() (args, heap);
  ret.write<QTextTableCell > ((QTextTableCell)((QTextTable *)cls)->cellAt (arg1));
}


// int QTextTable::columns()


static void _init_f_columns_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_columns_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextTable *)cls)->columns ());
}


// QTextTableFormat QTextTable::format()


static void _init_f_format_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextTableFormat > ();
}

static void _call_f_format_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextTableFormat > ((QTextTableFormat)((QTextTable *)cls)->format ());
}


// void QTextTable::insertColumns(int pos, int num)


static void _init_f_insertColumns_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("num");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_insertColumns_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTable *)cls)->insertColumns (arg1, arg2);
}


// void QTextTable::insertRows(int pos, int num)


static void _init_f_insertRows_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("num");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_insertRows_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTable *)cls)->insertRows (arg1, arg2);
}


// void QTextTable::mergeCells(int row, int col, int numRows, int numCols)


static void _init_f_mergeCells_2744 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("row");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("col");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("numRows");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("numCols");
  decl->add_arg<int > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_mergeCells_2744 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  int arg4 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTable *)cls)->mergeCells (arg1, arg2, arg3, arg4);
}


// void QTextTable::mergeCells(const QTextCursor &cursor)


static void _init_f_mergeCells_2453 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cursor");
  decl->add_arg<const QTextCursor & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_mergeCells_2453 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextCursor &arg1 = gsi::arg_reader<const QTextCursor & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTable *)cls)->mergeCells (arg1);
}


// void QTextTable::removeColumns(int pos, int num)


static void _init_f_removeColumns_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("num");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_removeColumns_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTable *)cls)->removeColumns (arg1, arg2);
}


// void QTextTable::removeRows(int pos, int num)


static void _init_f_removeRows_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("num");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_removeRows_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTable *)cls)->removeRows (arg1, arg2);
}


// void QTextTable::resize(int rows, int cols)


static void _init_f_resize_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rows");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("cols");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_resize_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTable *)cls)->resize (arg1, arg2);
}


// QTextCursor QTextTable::rowEnd(const QTextCursor &c)


static void _init_f_rowEnd_c2453 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<const QTextCursor & > (argspec_0);
  decl->set_return<QTextCursor > ();
}

static void _call_f_rowEnd_c2453 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextCursor &arg1 = gsi::arg_reader<const QTextCursor & >() (args, heap);
  ret.write<QTextCursor > ((QTextCursor)((QTextTable *)cls)->rowEnd (arg1));
}


// QTextCursor QTextTable::rowStart(const QTextCursor &c)


static void _init_f_rowStart_c2453 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<const QTextCursor & > (argspec_0);
  decl->set_return<QTextCursor > ();
}

static void _call_f_rowStart_c2453 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextCursor &arg1 = gsi::arg_reader<const QTextCursor & >() (args, heap);
  ret.write<QTextCursor > ((QTextCursor)((QTextTable *)cls)->rowStart (arg1));
}


// int QTextTable::rows()


static void _init_f_rows_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_rows_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextTable *)cls)->rows ());
}


// void QTextTable::setFormat(const QTextTableFormat &format)


static void _init_f_setFormat_2920 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QTextTableFormat & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFormat_2920 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextTableFormat &arg1 = gsi::arg_reader<const QTextTableFormat & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTable *)cls)->setFormat (arg1);
}


// void QTextTable::splitCell(int row, int col, int numRows, int numCols)


static void _init_f_splitCell_2744 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("row");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("col");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("numRows");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("numCols");
  decl->add_arg<int > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_splitCell_2744 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  int arg4 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTable *)cls)->splitCell (arg1, arg2, arg3, arg4);
}


// static QString QTextTable::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QTextTable::tr (arg1, arg2, arg3));
}


// static QString QTextTable::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QTextTable::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QTextTable () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("appendColumns", "@brief Method void QTextTable::appendColumns(int count)\n", false, &_init_f_appendColumns_767, &_call_f_appendColumns_767);
  methods += new qt_gsi::GenericMethod ("appendRows", "@brief Method void QTextTable::appendRows(int count)\n", false, &_init_f_appendRows_767, &_call_f_appendRows_767);
  methods += new qt_gsi::GenericMethod ("cellAt", "@brief Method QTextTableCell QTextTable::cellAt(int row, int col)\n", true, &_init_f_cellAt_c1426, &_call_f_cellAt_c1426);
  methods += new qt_gsi::GenericMethod ("cellAt", "@brief Method QTextTableCell QTextTable::cellAt(int position)\n", true, &_init_f_cellAt_c767, &_call_f_cellAt_c767);
  methods += new qt_gsi::GenericMethod ("cellAt", "@brief Method QTextTableCell QTextTable::cellAt(const QTextCursor &c)\n", true, &_init_f_cellAt_c2453, &_call_f_cellAt_c2453);
  methods += new qt_gsi::GenericMethod ("columns", "@brief Method int QTextTable::columns()\n", true, &_init_f_columns_c0, &_call_f_columns_c0);
  methods += new qt_gsi::GenericMethod (":format", "@brief Method QTextTableFormat QTextTable::format()\n", true, &_init_f_format_c0, &_call_f_format_c0);
  methods += new qt_gsi::GenericMethod ("insertColumns", "@brief Method void QTextTable::insertColumns(int pos, int num)\n", false, &_init_f_insertColumns_1426, &_call_f_insertColumns_1426);
  methods += new qt_gsi::GenericMethod ("insertRows", "@brief Method void QTextTable::insertRows(int pos, int num)\n", false, &_init_f_insertRows_1426, &_call_f_insertRows_1426);
  methods += new qt_gsi::GenericMethod ("mergeCells", "@brief Method void QTextTable::mergeCells(int row, int col, int numRows, int numCols)\n", false, &_init_f_mergeCells_2744, &_call_f_mergeCells_2744);
  methods += new qt_gsi::GenericMethod ("mergeCells", "@brief Method void QTextTable::mergeCells(const QTextCursor &cursor)\n", false, &_init_f_mergeCells_2453, &_call_f_mergeCells_2453);
  methods += new qt_gsi::GenericMethod ("removeColumns", "@brief Method void QTextTable::removeColumns(int pos, int num)\n", false, &_init_f_removeColumns_1426, &_call_f_removeColumns_1426);
  methods += new qt_gsi::GenericMethod ("removeRows", "@brief Method void QTextTable::removeRows(int pos, int num)\n", false, &_init_f_removeRows_1426, &_call_f_removeRows_1426);
  methods += new qt_gsi::GenericMethod ("resize", "@brief Method void QTextTable::resize(int rows, int cols)\n", false, &_init_f_resize_1426, &_call_f_resize_1426);
  methods += new qt_gsi::GenericMethod ("rowEnd", "@brief Method QTextCursor QTextTable::rowEnd(const QTextCursor &c)\n", true, &_init_f_rowEnd_c2453, &_call_f_rowEnd_c2453);
  methods += new qt_gsi::GenericMethod ("rowStart", "@brief Method QTextCursor QTextTable::rowStart(const QTextCursor &c)\n", true, &_init_f_rowStart_c2453, &_call_f_rowStart_c2453);
  methods += new qt_gsi::GenericMethod ("rows", "@brief Method int QTextTable::rows()\n", true, &_init_f_rows_c0, &_call_f_rows_c0);
  methods += new qt_gsi::GenericMethod ("setFormat|format=", "@brief Method void QTextTable::setFormat(const QTextTableFormat &format)\n", false, &_init_f_setFormat_2920, &_call_f_setFormat_2920);
  methods += new qt_gsi::GenericMethod ("splitCell", "@brief Method void QTextTable::splitCell(int row, int col, int numRows, int numCols)\n", false, &_init_f_splitCell_2744, &_call_f_splitCell_2744);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QTextTable::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QTextTable::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QTextTable::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QTextTable::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QTextFrame> &qtdecl_QTextFrame ();

qt_gsi::QtNativeClass<QTextTable> decl_QTextTable (qtdecl_QTextFrame (), "QtGui", "QTextTable_Native",
  methods_QTextTable (),
  "@hide\n@alias QTextTable");

GSI_QTGUI_PUBLIC gsi::Class<QTextTable> &qtdecl_QTextTable () { return decl_QTextTable; }

}


class QTextTable_Adaptor : public QTextTable, public qt_gsi::QtObjectBase
{
public:

  virtual ~QTextTable_Adaptor();

  //  [adaptor ctor] QTextTable::QTextTable(QTextDocument *doc)
  QTextTable_Adaptor(QTextDocument *doc) : QTextTable(doc)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QTextTable::isSignalConnected(const QMetaMethod &signal)
  bool fp_QTextTable_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QTextTable::isSignalConnected(signal);
  }

  //  [expose] int QTextTable::receivers(const char *signal)
  int fp_QTextTable_receivers_c1731 (const char *signal) const {
    return QTextTable::receivers(signal);
  }

  //  [expose] QObject *QTextTable::sender()
  QObject * fp_QTextTable_sender_c0 () const {
    return QTextTable::sender();
  }

  //  [expose] int QTextTable::senderSignalIndex()
  int fp_QTextTable_senderSignalIndex_c0 () const {
    return QTextTable::senderSignalIndex();
  }

  //  [emitter impl] void QTextTable::destroyed(QObject *)
  void emitter_QTextTable_destroyed_1302(QObject *arg1)
  {
    emit QTextTable::destroyed(arg1);
  }

  //  [adaptor impl] bool QTextTable::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QTextTable::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QTextTable_Adaptor, bool, QEvent *>(&QTextTable_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QTextTable::event(arg1);
    }
  }

  //  [adaptor impl] bool QTextTable::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QTextTable::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QTextTable_Adaptor, bool, QObject *, QEvent *>(&QTextTable_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QTextTable::eventFilter(arg1, arg2);
    }
  }

  //  [emitter impl] void QTextTable::objectNameChanged(const QString &objectName)
  void emitter_QTextTable_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QTextTable::objectNameChanged(const QString &objectName)'");
  }

  //  [adaptor impl] void QTextTable::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QTextTable::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QTextTable_Adaptor, QChildEvent *>(&QTextTable_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QTextTable::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QTextTable::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QTextTable::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QTextTable_Adaptor, QEvent *>(&QTextTable_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QTextTable::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QTextTable::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QTextTable::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QTextTable_Adaptor, const QMetaMethod &>(&QTextTable_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QTextTable::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QTextTable::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QTextTable::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QTextTable_Adaptor, QTimerEvent *>(&QTextTable_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QTextTable::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QTextTable_Adaptor::~QTextTable_Adaptor() { }

//  Constructor QTextTable::QTextTable(QTextDocument *doc) (adaptor class)

static void _init_ctor_QTextTable_Adaptor_1955 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("doc");
  decl->add_arg<QTextDocument * > (argspec_0);
  decl->set_return_new<QTextTable_Adaptor> ();
}

static void _call_ctor_QTextTable_Adaptor_1955 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTextDocument *arg1 = gsi::arg_reader<QTextDocument * >() (args, heap);
  ret.write<QTextTable_Adaptor *> (new QTextTable_Adaptor (arg1));
}


// void QTextTable::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTable_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextTable_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QTextTable::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTable_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextTable_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QTextTable::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ((QTextTable_Adaptor *)cls)->emitter_QTextTable_destroyed_1302 (arg1);
}


// void QTextTable::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTable_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextTable_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QTextTable::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QTextTable_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextTable_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QTextTable::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QTextTable_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextTable_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QTextTable::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QTextTable_Adaptor *)cls)->fp_QTextTable_isSignalConnected_c2394 (arg1));
}


// emitter void QTextTable::objectNameChanged(const QString &objectName)

static void _init_emitter_objectNameChanged_4567 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("objectName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_objectNameChanged_4567 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QTextTable_Adaptor *)cls)->emitter_QTextTable_objectNameChanged_4567 (arg1);
}


// exposed int QTextTable::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QTextTable_Adaptor *)cls)->fp_QTextTable_receivers_c1731 (arg1));
}


// exposed QObject *QTextTable::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QTextTable_Adaptor *)cls)->fp_QTextTable_sender_c0 ());
}


// exposed int QTextTable::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextTable_Adaptor *)cls)->fp_QTextTable_senderSignalIndex_c0 ());
}


// void QTextTable::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTable_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextTable_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QTextTable> &qtdecl_QTextTable ();

static gsi::Methods methods_QTextTable_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextTable::QTextTable(QTextDocument *doc)\nThis method creates an object of class QTextTable.", &_init_ctor_QTextTable_Adaptor_1955, &_call_ctor_QTextTable_Adaptor_1955);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QTextTable::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QTextTable::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QTextTable::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QTextTable::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QTextTable::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QTextTable::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QTextTable::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QTextTable::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QTextTable::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QTextTable::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QTextTable::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QTextTable::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QTextTable_Adaptor> decl_QTextTable_Adaptor (qtdecl_QTextTable (), "QtGui", "QTextTable",
  methods_QTextTable_Adaptor (),
  "@qt\n@brief Binding of QTextTable");

}

