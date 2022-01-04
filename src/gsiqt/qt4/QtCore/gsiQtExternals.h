
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

/*
  External declarations for for Qt bindings

  DO NOT EDIT THIS FILE. 
  This file has been created automatically
*/

#if !defined(HDR_gsiQtCoreExternals)
#define HDR_gsiQtCoreExternals

#include "gsiClass.h"
#include "gsiQtCoreCommon.h"

class QAbstractItemModel;

namespace tl { template <> struct type_traits<QAbstractItemModel> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QAbstractItemModel> &qtdecl_QAbstractItemModel (); }

class QAbstractListModel;

namespace tl { template <> struct type_traits<QAbstractListModel> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QAbstractListModel> &qtdecl_QAbstractListModel (); }

class QAbstractTableModel;

namespace tl { template <> struct type_traits<QAbstractTableModel> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QAbstractTableModel> &qtdecl_QAbstractTableModel (); }

class QBasicTimer;

namespace tl { template <> struct type_traits<QBasicTimer> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QBasicTimer> &qtdecl_QBasicTimer (); }

class QBuffer;

namespace tl { template <> struct type_traits<QBuffer> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QBuffer> &qtdecl_QBuffer (); }

class QByteArrayMatcher;

namespace tl { template <> struct type_traits<QByteArrayMatcher> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QByteArrayMatcher> &qtdecl_QByteArrayMatcher (); }

class QChildEvent;

namespace tl { template <> struct type_traits<QChildEvent> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QChildEvent> &qtdecl_QChildEvent (); }

class QCoreApplication;

namespace tl { template <> struct type_traits<QCoreApplication> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QCoreApplication> &qtdecl_QCoreApplication (); }

class QCryptographicHash;

namespace tl { template <> struct type_traits<QCryptographicHash> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QCryptographicHash> &qtdecl_QCryptographicHash (); }

class QDataStream;

namespace tl { template <> struct type_traits<QDataStream> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QDataStream> &qtdecl_QDataStream (); }

class QDate;

namespace tl { template <> struct type_traits<QDate> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QDate> &qtdecl_QDate (); }

class QDateTime;

namespace tl { template <> struct type_traits<QDateTime> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QDateTime> &qtdecl_QDateTime (); }

class QDir;

namespace tl { template <> struct type_traits<QDir> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QDir> &qtdecl_QDir (); }

class QDynamicPropertyChangeEvent;

namespace tl { template <> struct type_traits<QDynamicPropertyChangeEvent> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QDynamicPropertyChangeEvent> &qtdecl_QDynamicPropertyChangeEvent (); }

class QEasingCurve;

namespace tl { template <> struct type_traits<QEasingCurve> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QEasingCurve> &qtdecl_QEasingCurve (); }

class QEvent;

namespace tl { template <> struct type_traits<QEvent> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QEvent> &qtdecl_QEvent (); }

class QEventLoop;

namespace tl { template <> struct type_traits<QEventLoop> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QEventLoop> &qtdecl_QEventLoop (); }

struct QFactoryInterface;

namespace tl { template <> struct type_traits<QFactoryInterface> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QFactoryInterface> &qtdecl_QFactoryInterface (); }

class QFile;

namespace tl { template <> struct type_traits<QFile> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QFile> &qtdecl_QFile (); }

class QFileInfo;

namespace tl { template <> struct type_traits<QFileInfo> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QFileInfo> &qtdecl_QFileInfo (); }

class QFileSystemWatcher;

namespace tl { template <> struct type_traits<QFileSystemWatcher> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QFileSystemWatcher> &qtdecl_QFileSystemWatcher (); }

class QIODevice;

namespace tl { template <> struct type_traits<QIODevice> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QIODevice> &qtdecl_QIODevice (); }

class QLibrary;

namespace tl { template <> struct type_traits<QLibrary> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QLibrary> &qtdecl_QLibrary (); }

class QLibraryInfo;

namespace tl { template <> struct type_traits<QLibraryInfo> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QLibraryInfo> &qtdecl_QLibraryInfo (); }

class QLine;

namespace tl { template <> struct type_traits<QLine> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QLine> &qtdecl_QLine (); }

class QLineF;

namespace tl { template <> struct type_traits<QLineF> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QLineF> &qtdecl_QLineF (); }

class QLocale;

namespace tl { template <> struct type_traits<QLocale> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QLocale> &qtdecl_QLocale (); }

class QMargins;

namespace tl { template <> struct type_traits<QMargins> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMargins> &qtdecl_QMargins (); }

class QMetaClassInfo;

namespace tl { template <> struct type_traits<QMetaClassInfo> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMetaClassInfo> &qtdecl_QMetaClassInfo (); }

class QMetaEnum;

namespace tl { template <> struct type_traits<QMetaEnum> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMetaEnum> &qtdecl_QMetaEnum (); }

class QMetaMethod;

namespace tl { template <> struct type_traits<QMetaMethod> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMetaMethod> &qtdecl_QMetaMethod (); }

struct QMetaObject;

namespace tl { template <> struct type_traits<QMetaObject> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMetaObject> &qtdecl_QMetaObject (); }

class QMetaProperty;

namespace tl { template <> struct type_traits<QMetaProperty> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMetaProperty> &qtdecl_QMetaProperty (); }

class QMetaType;

namespace tl { template <> struct type_traits<QMetaType> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMetaType> &qtdecl_QMetaType (); }

class QMimeData;

namespace tl { template <> struct type_traits<QMimeData> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMimeData> &qtdecl_QMimeData (); }

class QModelIndex;

namespace tl { template <> struct type_traits<QModelIndex> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QModelIndex> &qtdecl_QModelIndex (); }

class QMutex;

namespace tl { template <> struct type_traits<QMutex> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMutex> &qtdecl_QMutex (); }

class QObject;

namespace tl { template <> struct type_traits<QObject> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QObject> &qtdecl_QObject (); }

class QPersistentModelIndex;

namespace tl { template <> struct type_traits<QPersistentModelIndex> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QPersistentModelIndex> &qtdecl_QPersistentModelIndex (); }

class QPluginLoader;

namespace tl { template <> struct type_traits<QPluginLoader> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QPluginLoader> &qtdecl_QPluginLoader (); }

class QPoint;

namespace tl { template <> struct type_traits<QPoint> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QPoint> &qtdecl_QPoint (); }

class QPointF;

namespace tl { template <> struct type_traits<QPointF> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QPointF> &qtdecl_QPointF (); }

class QProcess;

namespace tl { template <> struct type_traits<QProcess> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QProcess> &qtdecl_QProcess (); }

class QProcessEnvironment;

namespace tl { template <> struct type_traits<QProcessEnvironment> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QProcessEnvironment> &qtdecl_QProcessEnvironment (); }

class QReadLocker;

namespace tl { template <> struct type_traits<QReadLocker> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QReadLocker> &qtdecl_QReadLocker (); }

class QReadWriteLock;

namespace tl { template <> struct type_traits<QReadWriteLock> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QReadWriteLock> &qtdecl_QReadWriteLock (); }

class QRect;

namespace tl { template <> struct type_traits<QRect> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QRect> &qtdecl_QRect (); }

class QRectF;

namespace tl { template <> struct type_traits<QRectF> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QRectF> &qtdecl_QRectF (); }

class QRegExp;

namespace tl { template <> struct type_traits<QRegExp> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QRegExp> &qtdecl_QRegExp (); }

class QResource;

namespace tl { template <> struct type_traits<QResource> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QResource> &qtdecl_QResource (); }

class QSemaphore;

namespace tl { template <> struct type_traits<QSemaphore> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSemaphore> &qtdecl_QSemaphore (); }

class QSettings;

namespace tl { template <> struct type_traits<QSettings> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSettings> &qtdecl_QSettings (); }

class QSignalMapper;

namespace tl { template <> struct type_traits<QSignalMapper> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSignalMapper> &qtdecl_QSignalMapper (); }

class QSize;

namespace tl { template <> struct type_traits<QSize> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSize> &qtdecl_QSize (); }

class QSizeF;

namespace tl { template <> struct type_traits<QSizeF> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSizeF> &qtdecl_QSizeF (); }

class QSocketNotifier;

namespace tl { template <> struct type_traits<QSocketNotifier> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSocketNotifier> &qtdecl_QSocketNotifier (); }

class QStringMatcher;

namespace tl { template <> struct type_traits<QStringMatcher> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QStringMatcher> &qtdecl_QStringMatcher (); }

class QSysInfo;

namespace tl { template <> struct type_traits<QSysInfo> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSysInfo> &qtdecl_QSysInfo (); }

class QSystemLocale;

namespace tl { template <> struct type_traits<QSystemLocale> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSystemLocale> &qtdecl_QSystemLocale (); }

class QTemporaryFile;

namespace tl { template <> struct type_traits<QTemporaryFile> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTemporaryFile> &qtdecl_QTemporaryFile (); }

class QTextCodec;

namespace tl { template <> struct type_traits<QTextCodec> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
  typedef tl::false_tag has_public_destructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTextCodec> &qtdecl_QTextCodec (); }

class QTextDecoder;

namespace tl { template <> struct type_traits<QTextDecoder> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTextDecoder> &qtdecl_QTextDecoder (); }

class QTextEncoder;

namespace tl { template <> struct type_traits<QTextEncoder> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTextEncoder> &qtdecl_QTextEncoder (); }

class QTextStream;

namespace tl { template <> struct type_traits<QTextStream> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTextStream> &qtdecl_QTextStream (); }

class QThread;

namespace tl { template <> struct type_traits<QThread> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QThread> &qtdecl_QThread (); }

class QTime;

namespace tl { template <> struct type_traits<QTime> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTime> &qtdecl_QTime (); }

class QTimeLine;

namespace tl { template <> struct type_traits<QTimeLine> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTimeLine> &qtdecl_QTimeLine (); }

class QTimer;

namespace tl { template <> struct type_traits<QTimer> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTimer> &qtdecl_QTimer (); }

class QTimerEvent;

namespace tl { template <> struct type_traits<QTimerEvent> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTimerEvent> &qtdecl_QTimerEvent (); }

class QTranslator;

namespace tl { template <> struct type_traits<QTranslator> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTranslator> &qtdecl_QTranslator (); }

class QUrl;

namespace tl { template <> struct type_traits<QUrl> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QUrl> &qtdecl_QUrl (); }

class QWaitCondition;

namespace tl { template <> struct type_traits<QWaitCondition> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QWaitCondition> &qtdecl_QWaitCondition (); }

class QWriteLocker;

namespace tl { template <> struct type_traits<QWriteLocker> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QWriteLocker> &qtdecl_QWriteLocker (); }


#define QT_EXTERNAL_BASE(X) gsi::qtdecl_##X(),

#endif

