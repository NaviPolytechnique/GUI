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
    WidgetsUsed/Compass/compass.cpp \
    Drone/Com/Communication.cpp \
    Drone/Com/Message.cpp \
    Drone/Com/MessageChecker.cpp \
    Drone/Com/MessageProcessor.cpp \
    Drone/Com/MessageSender.cpp \
    Drone/Com/PingProcessor.cpp \
    Drone/Drone/Drone.cpp \
    Drone/Drone/StateChecker.cpp \
    Drone/Navi_Exception/INS_Exception.cpp \
    Drone/Navi_Exception/Pilot_Exception.cpp \
    Drone/Navi_Exception/System_Exception.cpp \
    Drone/Serial/Serial.cpp \
    Drone/Thread/Thread.cpp \
    Drone/Thread/ThreadStruct.cpp \
    Drone/Utils/Listener.cpp \
    Drone/Utils/Point3D.cpp

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
    WidgetsUsed/Compass/compass.h \
    Drone/Com/ComException.h \
    Drone/Com/Communication.h \
    Drone/Com/Message.h \
    Drone/Com/MessageChecker.h \
    Drone/Com/MessageProcessor.h \
    Drone/Com/MessageSender.h \
    Drone/Com/PingProcessor.h \
    Drone/Drone/Config.h \
    Drone/Drone/Drone.h \
    Drone/Drone/StateChecker.h \
    Drone/Navi_Exception/INS_Exception.hpp \
    Drone/Navi_Exception/Pilot_Exception.hpp \
    Drone/Navi_Exception/System_Exception.hpp \
    Drone/Serial/serial_exception/serial_exception.hpp \
    Drone/Serial/Serial.h \
    Drone/serial_exception/serial_exception.hpp \
    Drone/Thread/Runnable.h \
    Drone/Thread/Thread.h \
    Drone/Thread/ThreadStruct.h \
    Drone/Utils/BlockingQueue.h \
    Drone/Utils/Listener.h \
    Drone/Utils/Point3D.hpp

FORMS    += mainwindow.ui \
    WidgetsUsed/Buttons/buttons.ui \
    WidgetsUsed/EandM/eandm.ui \
    WidgetsUsed/InputCommands/inputcommands.ui \
    WidgetsUsed/AttitudeMeter/attitudemeter.ui \
    WidgetsUsed/Compass/compass.ui

RESOURCES += \
    images.qrc
