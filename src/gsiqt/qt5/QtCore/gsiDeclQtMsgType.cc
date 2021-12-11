
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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
*  @file gsiDeclQtMsgType.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QtMsgType>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// enum QtMsgType


//  Implementation of the enum wrapper class for ::QtMsgType
namespace qt_gsi
{

static gsi::Enum<QtMsgType> decl_QtMsgType_Enum ("QtCore", "QtMsgType",
    gsi::enum_const ("QtDebugMsg", QtDebugMsg, "@brief Enum constant QtDebugMsg") +
    gsi::enum_const ("QtWarningMsg", QtWarningMsg, "@brief Enum constant QtWarningMsg") +
    gsi::enum_const ("QtCriticalMsg", QtCriticalMsg, "@brief Enum constant QtCriticalMsg") +
    gsi::enum_const ("QtFatalMsg", QtFatalMsg, "@brief Enum constant QtFatalMsg") +
    gsi::enum_const ("QtInfoMsg", QtInfoMsg, "@brief Enum constant QtInfoMsg") +
    gsi::enum_const ("QtSystemMsg", QtSystemMsg, "@brief Enum constant QtSystemMsg"),
  "@qt\n@brief This class represents the QtMsgType enum");

static gsi::QFlagsClass<QtMsgType > decl_QtMsgType_Enums ("QtCore", "QFlags_QtMsgType",
  "@qt\n@brief This class represents the QFlags<QtMsgType> flag set");

}

