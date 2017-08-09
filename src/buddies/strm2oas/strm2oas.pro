
include($$PWD/../../klayout.pri)

TEMPLATE = app

TARGET = strm2oas
DESTDIR = $$OUT_PWD/../..

SOURCES = strm2oas.cc

INCLUDEPATH += ../../tl ../../db ../../gsi
DEPENDPATH += ../../tl ../../db ../../gsi
LIBS += -L$$DESTDIR -lklayout_tl -lklayout_db -lklayout_gsi
