#-------------------------------------------------
#
# Project created by QtCreator 2016-01-19T01:21:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += printsupport

TARGET = XYZWidget
TEMPLATE = app


SOURCES += main.cpp\
        xyzwidget.cpp \
    qcustomplot.cpp \
    readinput.cpp

HEADERS  += xyzwidget.h \
    qcustomplot.h \
    readinput.h

FORMS    += xyzwidget.ui
