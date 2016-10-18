QT += core
QT -= gui

CONFIG += c++11

TARGET = MaxApplication
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    maxfinder.cpp

HEADERS += \
    maxfinder.h
