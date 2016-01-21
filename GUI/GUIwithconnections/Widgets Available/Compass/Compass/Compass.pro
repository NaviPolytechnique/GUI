#-------------------------------------------------
#
# Project created by QtCreator 2016-01-19T01:18:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Compass
TEMPLATE = app


SOURCES += main.cpp\
        compass.cpp \
    ../../Source/qcgaugewidget.cpp

HEADERS  += compass.h \
    ../../Source/qcgaugewidget.h

FORMS    += compass.ui
