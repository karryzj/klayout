
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
*  @file gsiDeclQXmlNodeModelIndex.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlNodeModelIndex>
#include <QAbstractXmlNodeModel>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlNodeModelIndex

//  Constructor QXmlNodeModelIndex::QXmlNodeModelIndex()


static void _init_ctor_QXmlNodeModelIndex_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlNodeModelIndex> ();
}

static void _call_ctor_QXmlNodeModelIndex_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlNodeModelIndex *> (new QXmlNodeModelIndex ());
}


//  Constructor QXmlNodeModelIndex::QXmlNodeModelIndex(const QXmlNodeModelIndex &other)


static void _init_ctor_QXmlNodeModelIndex_3090 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  decl->set_return_new<QXmlNodeModelIndex> ();
}

static void _call_ctor_QXmlNodeModelIndex_3090 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = args.read<const QXmlNodeModelIndex & > (heap);
  ret.write<QXmlNodeModelIndex *> (new QXmlNodeModelIndex (arg1));
}


// qint64 QXmlNodeModelIndex::additionalData()


static void _init_f_additionalData_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_additionalData_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QXmlNodeModelIndex *)cls)->additionalData ());
}


// qint64 QXmlNodeModelIndex::data()


static void _init_f_data_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_data_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QXmlNodeModelIndex *)cls)->data ());
}


// void *QXmlNodeModelIndex::internalPointer()


static void _init_f_internalPointer_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void * > ();
}

static void _call_f_internalPointer_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<void * > ((void *)((QXmlNodeModelIndex *)cls)->internalPointer ());
}


// bool QXmlNodeModelIndex::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlNodeModelIndex *)cls)->isNull ());
}


// const QAbstractXmlNodeModel *QXmlNodeModelIndex::model()


static void _init_f_model_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QAbstractXmlNodeModel * > ();
}

static void _call_f_model_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QAbstractXmlNodeModel * > ((const QAbstractXmlNodeModel *)((QXmlNodeModelIndex *)cls)->model ());
}


// bool QXmlNodeModelIndex::operator!=(const QXmlNodeModelIndex &other)


static void _init_f_operator_excl__eq__c3090 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3090 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = args.read<const QXmlNodeModelIndex & > (heap);
  ret.write<bool > ((bool)((QXmlNodeModelIndex *)cls)->operator!= (arg1));
}


// bool QXmlNodeModelIndex::operator==(const QXmlNodeModelIndex &other)


static void _init_f_operator_eq__eq__c3090 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3090 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = args.read<const QXmlNodeModelIndex & > (heap);
  ret.write<bool > ((bool)((QXmlNodeModelIndex *)cls)->operator== (arg1));
}


// void QXmlNodeModelIndex::reset()


static void _init_f_reset_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_reset_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlNodeModelIndex *)cls)->reset ();
}



namespace gsi
{

static gsi::Methods methods_QXmlNodeModelIndex () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlNodeModelIndex::QXmlNodeModelIndex()\nThis method creates an object of class QXmlNodeModelIndex.", &_init_ctor_QXmlNodeModelIndex_0, &_call_ctor_QXmlNodeModelIndex_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlNodeModelIndex::QXmlNodeModelIndex(const QXmlNodeModelIndex &other)\nThis method creates an object of class QXmlNodeModelIndex.", &_init_ctor_QXmlNodeModelIndex_3090, &_call_ctor_QXmlNodeModelIndex_3090);
  methods += new qt_gsi::GenericMethod ("additionalData", "@brief Method qint64 QXmlNodeModelIndex::additionalData()\n", true, &_init_f_additionalData_c0, &_call_f_additionalData_c0);
  methods += new qt_gsi::GenericMethod ("data", "@brief Method qint64 QXmlNodeModelIndex::data()\n", true, &_init_f_data_c0, &_call_f_data_c0);
  methods += new qt_gsi::GenericMethod ("internalPointer", "@brief Method void *QXmlNodeModelIndex::internalPointer()\n", true, &_init_f_internalPointer_c0, &_call_f_internalPointer_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QXmlNodeModelIndex::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("model", "@brief Method const QAbstractXmlNodeModel *QXmlNodeModelIndex::model()\n", true, &_init_f_model_c0, &_call_f_model_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QXmlNodeModelIndex::operator!=(const QXmlNodeModelIndex &other)\n", true, &_init_f_operator_excl__eq__c3090, &_call_f_operator_excl__eq__c3090);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QXmlNodeModelIndex::operator==(const QXmlNodeModelIndex &other)\n", true, &_init_f_operator_eq__eq__c3090, &_call_f_operator_eq__eq__c3090);
  methods += new qt_gsi::GenericMethod ("reset", "@brief Method void QXmlNodeModelIndex::reset()\n", false, &_init_f_reset_0, &_call_f_reset_0);
  return methods;
}

gsi::Class<QXmlNodeModelIndex> decl_QXmlNodeModelIndex ("QXmlNodeModelIndex",
  methods_QXmlNodeModelIndex (),
  "@qt\n@brief Binding of QXmlNodeModelIndex");


GSIQT_PUBLIC gsi::Class<QXmlNodeModelIndex> &qtdecl_QXmlNodeModelIndex () { return decl_QXmlNodeModelIndex; }

}


//  Implementation of the enum wrapper class for QXmlNodeModelIndex::DocumentOrder
namespace qt_gsi
{

static gsi::Enum<QXmlNodeModelIndex::DocumentOrder> decl_QXmlNodeModelIndex_DocumentOrder_Enum ("QXmlNodeModelIndex_DocumentOrder",
    gsi::enum_const ("Precedes", QXmlNodeModelIndex::Precedes, "@brief Enum constant QXmlNodeModelIndex::Precedes") +
    gsi::enum_const ("Is", QXmlNodeModelIndex::Is, "@brief Enum constant QXmlNodeModelIndex::Is") +
    gsi::enum_const ("Follows", QXmlNodeModelIndex::Follows, "@brief Enum constant QXmlNodeModelIndex::Follows"),
  "@qt\n@brief This class represents the QXmlNodeModelIndex::DocumentOrder enum");

static gsi::QFlagsClass<QXmlNodeModelIndex::DocumentOrder > decl_QXmlNodeModelIndex_DocumentOrder_Enums ("QXmlNodeModelIndex_QFlags_DocumentOrder",
  "@qt\n@brief This class represents the QFlags<QXmlNodeModelIndex::DocumentOrder> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QXmlNodeModelIndex> inject_QXmlNodeModelIndex_DocumentOrder_Enum_in_parent (decl_QXmlNodeModelIndex_DocumentOrder_Enum.defs ());
static gsi::ClassExt<QXmlNodeModelIndex> decl_QXmlNodeModelIndex_DocumentOrder_Enum_as_child (decl_QXmlNodeModelIndex_DocumentOrder_Enum, "DocumentOrder");
static gsi::ClassExt<QXmlNodeModelIndex> decl_QXmlNodeModelIndex_DocumentOrder_Enums_as_child (decl_QXmlNodeModelIndex_DocumentOrder_Enums, "QFlags_DocumentOrder");

}


//  Implementation of the enum wrapper class for QXmlNodeModelIndex::NodeKind
namespace qt_gsi
{

static gsi::Enum<QXmlNodeModelIndex::NodeKind> decl_QXmlNodeModelIndex_NodeKind_Enum ("QXmlNodeModelIndex_NodeKind",
    gsi::enum_const ("Attribute", QXmlNodeModelIndex::Attribute, "@brief Enum constant QXmlNodeModelIndex::Attribute") +
    gsi::enum_const ("Comment", QXmlNodeModelIndex::Comment, "@brief Enum constant QXmlNodeModelIndex::Comment") +
    gsi::enum_const ("Document", QXmlNodeModelIndex::Document, "@brief Enum constant QXmlNodeModelIndex::Document") +
    gsi::enum_const ("Element", QXmlNodeModelIndex::Element, "@brief Enum constant QXmlNodeModelIndex::Element") +
    gsi::enum_const ("Namespace", QXmlNodeModelIndex::Namespace, "@brief Enum constant QXmlNodeModelIndex::Namespace") +
    gsi::enum_const ("ProcessingInstruction", QXmlNodeModelIndex::ProcessingInstruction, "@brief Enum constant QXmlNodeModelIndex::ProcessingInstruction") +
    gsi::enum_const ("Text", QXmlNodeModelIndex::Text, "@brief Enum constant QXmlNodeModelIndex::Text"),
  "@qt\n@brief This class represents the QXmlNodeModelIndex::NodeKind enum");

static gsi::QFlagsClass<QXmlNodeModelIndex::NodeKind > decl_QXmlNodeModelIndex_NodeKind_Enums ("QXmlNodeModelIndex_QFlags_NodeKind",
  "@qt\n@brief This class represents the QFlags<QXmlNodeModelIndex::NodeKind> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QXmlNodeModelIndex> inject_QXmlNodeModelIndex_NodeKind_Enum_in_parent (decl_QXmlNodeModelIndex_NodeKind_Enum.defs ());
static gsi::ClassExt<QXmlNodeModelIndex> decl_QXmlNodeModelIndex_NodeKind_Enum_as_child (decl_QXmlNodeModelIndex_NodeKind_Enum, "NodeKind");
static gsi::ClassExt<QXmlNodeModelIndex> decl_QXmlNodeModelIndex_NodeKind_Enums_as_child (decl_QXmlNodeModelIndex_NodeKind_Enums, "QFlags_NodeKind");

}

