#-------------------------------------------------
#
# Project created by QtCreator 2016-01-19T21:23:00
#
#-------------------------------------------------

QT       += core gui widgets
CONFIG   += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = GUIwithconnections
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Source/qcgaugewidget.cpp \
    WidgetsUsed/AttitudeMeter/attitudemeter.cpp \
    WidgetsUsed/Buttons/buttons.cpp \
    WidgetsUsed/Compass/compass.cpp \
    WidgetsUsed/EandM/eandm.cpp \
    WidgetsUsed/InputCommands/inputcommands.cpp \
    dronestatus.cpp \
    lecturefichiertexte.cpp \
    readinput.cpp \
    threadreadinput.cpp \
    Drone/Com/Communication.cpp \
    Drone/Com/Message.cpp \
    Drone/Com/MessageChecker.cpp \
    Drone/Com/MessageProcessor.cpp \
    Drone/Com/MessageSender.cpp \
    Drone/Drone/Drone.cpp \
    Drone/Drone/StateChecker.cpp \
    Drone/Serial/Serial.cpp \
    Drone/Thread/Thread.cpp \
    Drone/Thread/ThreadStruct.cpp \
    Drone/Utils/Listener.cpp \
    Drone/Utils/Point3D.cpp \
    WidgetsUsed/DroneSettings/dronesettings.cpp \
    WidgetsUsed/Gps/gps.cpp \
    WidgetsUsed/XYZWidget/qcustomplot.cpp \
    WidgetsUsed/XYZWidget/xyzwidget.cpp \
    WidgetsUsed/ZCursor/zcursor.cpp

HEADERS  += mainwindow.h \
    Source/qcgaugewidget.h \
    WidgetsUsed/AttitudeMeter/attitudemeter.h \
    WidgetsUsed/Buttons/buttons.h \
    WidgetsUsed/Compass/compass.h \
    WidgetsUsed/EandM/eandm.h \
    WidgetsUsed/InputCommands/inputcommands.h \
    dronestatus.h \
    lecturefichiertexte.h \
    readinput.h \
    threadreadinput.h \
    Drone/Com/ComException.h \
    Drone/Com/Communication.h \
    Drone/Com/Message.h \
    Drone/Com/MessageChecker.h \
    Drone/Com/MessageProcessor.h \
    Drone/Com/MessageSender.h \
    Drone/Drone/Config.h \
    Drone/Drone/Drone.h \
    Drone/Drone/StateChecker.h \
    Drone/Serial/serial_exception/serial_exception.hpp \
    Drone/Serial/Serial.h \
    Drone/serial_exception/serial_exception.hpp \
    Drone/Thread/Runnable.h \
    Drone/Thread/Thread.h \
    Drone/Thread/ThreadStruct.h \
    Drone/Utils/BlockingQueue.h \
    Drone/Utils/Listener.h \
    Drone/Utils/Point3D.hpp \
    WidgetsUsed/DroneSettings/dronesettings.h \
    WidgetsUsed/Gps/gps.h \
    WidgetsUsed/XYZWidget/qcustomplot.h \
    WidgetsUsed/XYZWidget/xyzwidget.h \
    WidgetsUsed/ZCursor/zcursor.h

FORMS    += mainwindow.ui \
    WidgetsUsed/AttitudeMeter/attitudemeter.ui \
    WidgetsUsed/Buttons/buttons.ui \
    WidgetsUsed/Compass/compass.ui \
    WidgetsUsed/EandM/eandm.ui \
    WidgetsUsed/InputCommands/inputcommands.ui \
    WidgetsUsed/DroneSettings/dronesettings.ui \
    WidgetsUsed/Gps/gps.ui \
    WidgetsUsed/XYZWidget/xyzwidget.ui \
    WidgetsUsed/ZCursor/zcursor.ui
