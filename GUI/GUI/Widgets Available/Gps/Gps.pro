#-------------------------------------------------
#
# Project created by QtCreator 2016-01-19T23:15:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += printsupport


TARGET = Gps
TEMPLATE = app


SOURCES += main.cpp\
        gps.cpp \
    readinput.cpp

HEADERS  += gps.h \
    readinput.h

FORMS    += gps.ui


