#-------------------------------------------------
#
# Project created by QtCreator 2014-11-08T02:31:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AttitudeMeter
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../../source/qcgaugewidget.cpp \
    readinput.cpp \
    lecturefichiertexte.cpp \
    threadreadinput.cpp \
    dronestatus.cpp

HEADERS  += mainwindow.h \
    ../../source/qcgaugewidget.h \
    readinput.h \
    lecturefichiertexte.h \
    threadreadinput.h \
    dronestatus.h

FORMS    += mainwindow.ui
