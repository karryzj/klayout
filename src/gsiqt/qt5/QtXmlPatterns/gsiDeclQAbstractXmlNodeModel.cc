
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
*  @file gsiDeclQAbstractXmlNodeModel.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractXmlNodeModel>
#include <QAbstractXmlReceiver>
#include <QSourceLocation>
#include <QUrl>
#include <QXmlName>
#include <QXmlNodeModelIndex>
#include "gsiQt.h"
#include "gsiQtXmlPatternsCommon.h"
#include "gsiDeclQtXmlPatternsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAbstractXmlNodeModel

// QUrl QAbstractXmlNodeModel::baseUri(const QXmlNodeModelIndex &ni)


static void _init_f_baseUri_c3090 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ni");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  decl->set_return<QUrl > ();
}

static void _call_f_baseUri_c3090 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  ret.write<QUrl > ((QUrl)((QAbstractXmlNodeModel *)cls)->baseUri (arg1));
}


// QXmlNodeModelIndex::DocumentOrder QAbstractXmlNodeModel::compareOrder(const QXmlNodeModelIndex &ni1, const QXmlNodeModelIndex &ni2)


static void _init_f_compareOrder_c6072 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ni1");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("ni2");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_1);
  decl->set_return<qt_gsi::Converter<QXmlNodeModelIndex::DocumentOrder>::target_type > ();
}

static void _call_f_compareOrder_c6072 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  const QXmlNodeModelIndex &arg2 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  ret.write<qt_gsi::Converter<QXmlNodeModelIndex::DocumentOrder>::target_type > ((qt_gsi::Converter<QXmlNodeModelIndex::DocumentOrder>::target_type)qt_gsi::CppToQtAdaptor<QXmlNodeModelIndex::DocumentOrder>(((QAbstractXmlNodeModel *)cls)->compareOrder (arg1, arg2)));
}


// void QAbstractXmlNodeModel::copyNodeTo(const QXmlNodeModelIndex &node, QAbstractXmlReceiver *const receiver, const QFlags<QAbstractXmlNodeModel::NodeCopySetting> &)


static void _init_f_copyNodeTo_c11827 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("node");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("receiver");
  decl->add_arg<QAbstractXmlReceiver *const > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("arg3");
  decl->add_arg<const QFlags<QAbstractXmlNodeModel::NodeCopySetting> & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_copyNodeTo_c11827 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  QAbstractXmlReceiver *const arg2 = gsi::arg_reader<QAbstractXmlReceiver *const >() (args, heap);
  const QFlags<QAbstractXmlNodeModel::NodeCopySetting> &arg3 = gsi::arg_reader<const QFlags<QAbstractXmlNodeModel::NodeCopySetting> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlNodeModel *)cls)->copyNodeTo (arg1, arg2, arg3);
}


// QUrl QAbstractXmlNodeModel::documentUri(const QXmlNodeModelIndex &ni)


static void _init_f_documentUri_c3090 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ni");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  decl->set_return<QUrl > ();
}

static void _call_f_documentUri_c3090 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  ret.write<QUrl > ((QUrl)((QAbstractXmlNodeModel *)cls)->documentUri (arg1));
}


// QXmlNodeModelIndex QAbstractXmlNodeModel::elementById(const QXmlName &NCName)


static void _init_f_elementById_c2084 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("NCName");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<QXmlNodeModelIndex > ();
}

static void _call_f_elementById_c2084 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = gsi::arg_reader<const QXmlName & >() (args, heap);
  ret.write<QXmlNodeModelIndex > ((QXmlNodeModelIndex)((QAbstractXmlNodeModel *)cls)->elementById (arg1));
}


// bool QAbstractXmlNodeModel::isDeepEqual(const QXmlNodeModelIndex &ni1, const QXmlNodeModelIndex &ni2)


static void _init_f_isDeepEqual_c6072 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ni1");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("ni2");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_isDeepEqual_c6072 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  const QXmlNodeModelIndex &arg2 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  ret.write<bool > ((bool)((QAbstractXmlNodeModel *)cls)->isDeepEqual (arg1, arg2));
}


// QXmlNodeModelIndex::NodeKind QAbstractXmlNodeModel::kind(const QXmlNodeModelIndex &ni)


static void _init_f_kind_c3090 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ni");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  decl->set_return<qt_gsi::Converter<QXmlNodeModelIndex::NodeKind>::target_type > ();
}

static void _call_f_kind_c3090 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  ret.write<qt_gsi::Converter<QXmlNodeModelIndex::NodeKind>::target_type > ((qt_gsi::Converter<QXmlNodeModelIndex::NodeKind>::target_type)qt_gsi::CppToQtAdaptor<QXmlNodeModelIndex::NodeKind>(((QAbstractXmlNodeModel *)cls)->kind (arg1)));
}


// QXmlName QAbstractXmlNodeModel::name(const QXmlNodeModelIndex &ni)


static void _init_f_name_c3090 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ni");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  decl->set_return<QXmlName > ();
}

static void _call_f_name_c3090 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  ret.write<QXmlName > ((QXmlName)((QAbstractXmlNodeModel *)cls)->name (arg1));
}


// QVector<QXmlName> QAbstractXmlNodeModel::namespaceBindings(const QXmlNodeModelIndex &n)


static void _init_f_namespaceBindings_c3090 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  decl->set_return<QVector<QXmlName> > ();
}

static void _call_f_namespaceBindings_c3090 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  ret.write<QVector<QXmlName> > ((QVector<QXmlName>)((QAbstractXmlNodeModel *)cls)->namespaceBindings (arg1));
}


// qint16 QAbstractXmlNodeModel::namespaceForPrefix(const QXmlNodeModelIndex &ni, const qint16 prefix)


static void _init_f_namespaceForPrefix_c4660 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ni");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("prefix");
  decl->add_arg<const qint16 > (argspec_1);
  decl->set_return<qint16 > ();
}

static void _call_f_namespaceForPrefix_c4660 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  const qint16 arg2 = gsi::arg_reader<const qint16 >() (args, heap);
  ret.write<qint16 > ((qint16)((QAbstractXmlNodeModel *)cls)->namespaceForPrefix (arg1, arg2));
}


// QVector<QXmlNodeModelIndex> QAbstractXmlNodeModel::nodesByIdref(const QXmlName &NCName)


static void _init_f_nodesByIdref_c2084 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("NCName");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<QVector<QXmlNodeModelIndex> > ();
}

static void _call_f_nodesByIdref_c2084 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = gsi::arg_reader<const QXmlName & >() (args, heap);
  ret.write<QVector<QXmlNodeModelIndex> > ((QVector<QXmlNodeModelIndex>)((QAbstractXmlNodeModel *)cls)->nodesByIdref (arg1));
}


// QXmlNodeModelIndex QAbstractXmlNodeModel::root(const QXmlNodeModelIndex &n)


static void _init_f_root_c3090 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  decl->set_return<QXmlNodeModelIndex > ();
}

static void _call_f_root_c3090 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  ret.write<QXmlNodeModelIndex > ((QXmlNodeModelIndex)((QAbstractXmlNodeModel *)cls)->root (arg1));
}


// void QAbstractXmlNodeModel::sendNamespaces(const QXmlNodeModelIndex &n, QAbstractXmlReceiver *const receiver)


static void _init_f_sendNamespaces_c6182 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("receiver");
  decl->add_arg<QAbstractXmlReceiver *const > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_sendNamespaces_c6182 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  QAbstractXmlReceiver *const arg2 = gsi::arg_reader<QAbstractXmlReceiver *const >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractXmlNodeModel *)cls)->sendNamespaces (arg1, arg2);
}


// QSourceLocation QAbstractXmlNodeModel::sourceLocation(const QXmlNodeModelIndex &index)


static void _init_f_sourceLocation_c3090 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  decl->set_return<QSourceLocation > ();
}

static void _call_f_sourceLocation_c3090 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  ret.write<QSourceLocation > ((QSourceLocation)((QAbstractXmlNodeModel *)cls)->sourceLocation (arg1));
}


// QString QAbstractXmlNodeModel::stringValue(const QXmlNodeModelIndex &n)


static void _init_f_stringValue_c3090 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<const QXmlNodeModelIndex & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_stringValue_c3090 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlNodeModelIndex &arg1 = gsi::arg_reader<const QXmlNodeModelIndex & >() (args, heap);
  ret.write<QString > ((QString)((QAbstractXmlNodeModel *)cls)->stringValue (arg1));
}



namespace gsi
{

static gsi::Methods methods_QAbstractXmlNodeModel () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("baseUri", "@brief Method QUrl QAbstractXmlNodeModel::baseUri(const QXmlNodeModelIndex &ni)\n", true, &_init_f_baseUri_c3090, &_call_f_baseUri_c3090);
  methods += new qt_gsi::GenericMethod ("compareOrder", "@brief Method QXmlNodeModelIndex::DocumentOrder QAbstractXmlNodeModel::compareOrder(const QXmlNodeModelIndex &ni1, const QXmlNodeModelIndex &ni2)\n", true, &_init_f_compareOrder_c6072, &_call_f_compareOrder_c6072);
  methods += new qt_gsi::GenericMethod ("copyNodeTo", "@brief Method void QAbstractXmlNodeModel::copyNodeTo(const QXmlNodeModelIndex &node, QAbstractXmlReceiver *const receiver, const QFlags<QAbstractXmlNodeModel::NodeCopySetting> &)\n", true, &_init_f_copyNodeTo_c11827, &_call_f_copyNodeTo_c11827);
  methods += new qt_gsi::GenericMethod ("documentUri", "@brief Method QUrl QAbstractXmlNodeModel::documentUri(const QXmlNodeModelIndex &ni)\n", true, &_init_f_documentUri_c3090, &_call_f_documentUri_c3090);
  methods += new qt_gsi::GenericMethod ("elementById", "@brief Method QXmlNodeModelIndex QAbstractXmlNodeModel::elementById(const QXmlName &NCName)\n", true, &_init_f_elementById_c2084, &_call_f_elementById_c2084);
  methods += new qt_gsi::GenericMethod ("isDeepEqual?", "@brief Method bool QAbstractXmlNodeModel::isDeepEqual(const QXmlNodeModelIndex &ni1, const QXmlNodeModelIndex &ni2)\n", true, &_init_f_isDeepEqual_c6072, &_call_f_isDeepEqual_c6072);
  methods += new qt_gsi::GenericMethod ("kind", "@brief Method QXmlNodeModelIndex::NodeKind QAbstractXmlNodeModel::kind(const QXmlNodeModelIndex &ni)\n", true, &_init_f_kind_c3090, &_call_f_kind_c3090);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QXmlName QAbstractXmlNodeModel::name(const QXmlNodeModelIndex &ni)\n", true, &_init_f_name_c3090, &_call_f_name_c3090);
  methods += new qt_gsi::GenericMethod ("namespaceBindings", "@brief Method QVector<QXmlName> QAbstractXmlNodeModel::namespaceBindings(const QXmlNodeModelIndex &n)\n", true, &_init_f_namespaceBindings_c3090, &_call_f_namespaceBindings_c3090);
  methods += new qt_gsi::GenericMethod ("namespaceForPrefix", "@brief Method qint16 QAbstractXmlNodeModel::namespaceForPrefix(const QXmlNodeModelIndex &ni, const qint16 prefix)\n", true, &_init_f_namespaceForPrefix_c4660, &_call_f_namespaceForPrefix_c4660);
  methods += new qt_gsi::GenericMethod ("nodesByIdref", "@brief Method QVector<QXmlNodeModelIndex> QAbstractXmlNodeModel::nodesByIdref(const QXmlName &NCName)\n", true, &_init_f_nodesByIdref_c2084, &_call_f_nodesByIdref_c2084);
  methods += new qt_gsi::GenericMethod ("root", "@brief Method QXmlNodeModelIndex QAbstractXmlNodeModel::root(const QXmlNodeModelIndex &n)\n", true, &_init_f_root_c3090, &_call_f_root_c3090);
  methods += new qt_gsi::GenericMethod ("sendNamespaces", "@brief Method void QAbstractXmlNodeModel::sendNamespaces(const QXmlNodeModelIndex &n, QAbstractXmlReceiver *const receiver)\n", true, &_init_f_sendNamespaces_c6182, &_call_f_sendNamespaces_c6182);
  methods += new qt_gsi::GenericMethod ("sourceLocation", "@brief Method QSourceLocation QAbstractXmlNodeModel::sourceLocation(const QXmlNodeModelIndex &index)\n", true, &_init_f_sourceLocation_c3090, &_call_f_sourceLocation_c3090);
  methods += new qt_gsi::GenericMethod ("stringValue", "@brief Method QString QAbstractXmlNodeModel::stringValue(const QXmlNodeModelIndex &n)\n", true, &_init_f_stringValue_c3090, &_call_f_stringValue_c3090);
  return methods;
}

gsi::Class<QAbstractXmlNodeModel> decl_QAbstractXmlNodeModel ("QtXmlPatterns", "QAbstractXmlNodeModel",
  methods_QAbstractXmlNodeModel (),
  "@qt\n@brief Binding of QAbstractXmlNodeModel");


GSI_QTXMLPATTERNS_PUBLIC gsi::Class<QAbstractXmlNodeModel> &qtdecl_QAbstractXmlNodeModel () { return decl_QAbstractXmlNodeModel; }

}


//  Implementation of the enum wrapper class for QAbstractXmlNodeModel::NodeCopySetting
namespace qt_gsi
{

static gsi::Enum<QAbstractXmlNodeModel::NodeCopySetting> decl_QAbstractXmlNodeModel_NodeCopySetting_Enum ("QtXmlPatterns", "QAbstractXmlNodeModel_NodeCopySetting",
    gsi::enum_const ("InheritNamespaces", QAbstractXmlNodeModel::InheritNamespaces, "@brief Enum constant QAbstractXmlNodeModel::InheritNamespaces") +
    gsi::enum_const ("PreserveNamespaces", QAbstractXmlNodeModel::PreserveNamespaces, "@brief Enum constant QAbstractXmlNodeModel::PreserveNamespaces"),
  "@qt\n@brief This class represents the QAbstractXmlNodeModel::NodeCopySetting enum");

static gsi::QFlagsClass<QAbstractXmlNodeModel::NodeCopySetting > decl_QAbstractXmlNodeModel_NodeCopySetting_Enums ("QtXmlPatterns", "QAbstractXmlNodeModel_QFlags_NodeCopySetting",
  "@qt\n@brief This class represents the QFlags<QAbstractXmlNodeModel::NodeCopySetting> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAbstractXmlNodeModel> inject_QAbstractXmlNodeModel_NodeCopySetting_Enum_in_parent (decl_QAbstractXmlNodeModel_NodeCopySetting_Enum.defs ());
static gsi::ClassExt<QAbstractXmlNodeModel> decl_QAbstractXmlNodeModel_NodeCopySetting_Enum_as_child (decl_QAbstractXmlNodeModel_NodeCopySetting_Enum, "NodeCopySetting");
static gsi::ClassExt<QAbstractXmlNodeModel> decl_QAbstractXmlNodeModel_NodeCopySetting_Enums_as_child (decl_QAbstractXmlNodeModel_NodeCopySetting_Enums, "QFlags_NodeCopySetting");

}

