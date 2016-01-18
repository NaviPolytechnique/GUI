#-------------------------------------------------
#
# Project created by QtCreator 2016-01-10T18:08:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AttitudeMeter
TEMPLATE = app


SOURCES += main.cpp\
        attitudemeter.cpp \
    ../../Source/qcgaugewidget.cpp


HEADERS  += attitudemeter.h \
    ../../Source/qcgaugewidget.h

FORMS    += attitudemeter.ui
