#-------------------------------------------------
#
# Project created by QtCreator 2016-10-18T16:03:32
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_maxunittest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_maxunittest.cpp \
    ../MaxApplication/maxfinder.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    ../MaxApplication/maxfinder.h
