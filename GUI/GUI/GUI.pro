#-------------------------------------------------
#
# Project created by QtCreator 2016-01-10T16:21:09
#
#-------------------------------------------------

QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Source/qcgaugewidget.cpp \
    dronestatus.cpp \
    lecturefichiertexte.cpp \
    readinput.cpp \
    threadreadinput.cpp \
    WidgetsUsed/AttitudeMeter/attitudemeter.cpp \
    WidgetsUsed/Buttons/buttons.cpp \
    WidgetsUsed/EandM/eandm.cpp \
    WidgetsUsed/InputCommands/inputcommands.cpp \
    WidgetsUsed/Compass/compass.cpp

HEADERS  += mainwindow.h \
    Source/qcgaugewidget.h \
    dronestatus.h \
    lecturefichiertexte.h \
    readinput.h \
    threadreadinput.h \
    WidgetsUsed/AttitudeMeter/attitudemeter.h \
    WidgetsUsed/Buttons/buttons.h \
    WidgetsUsed/EandM/eandm.h \
    WidgetsUsed/InputCommands/inputcommands.h \
    WidgetsUsed/Compass/compass.h

FORMS    += mainwindow.ui \
    WidgetsUsed/Buttons/buttons.ui \
    WidgetsUsed/EandM/eandm.ui \
    WidgetsUsed/InputCommands/inputcommands.ui \
    WidgetsUsed/AttitudeMeter/attitudemeter.ui \
    WidgetsUsed/Compass/compass.ui

RESOURCES += \
    images.qrc
