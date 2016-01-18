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
    WidgetsUsed/Buttons/buttons.cpp \
    WidgetsUsed/EandM/eandm.cpp \
    WidgetsUsed/InputCommands/inputcommands.cpp \
    dronestatus.cpp \
    lecturefichiertexte.cpp \
    readinput.cpp \
    threadreadinput.cpp \
    Drone(Xcode)/Com/Communication.cpp \
    Drone(Xcode)/Com/Message.cpp \
    Drone(Xcode)/Com/MessageChecker.cpp \
    Drone(Xcode)/Com/MessageProcessor.cpp \
    Drone(Xcode)/Com/MessageSender.cpp \
    Drone(Xcode)/Com/PingProcessor.cpp \
    Drone(Xcode)/Drone/Drone.cpp \
    Drone(Xcode)/Drone/StateChecker.cpp \
    Drone(Xcode)/Navi_Exception/INS_Exception.cpp \
    Drone(Xcode)/Navi_Exception/Pilot_Exception.cpp \
    Drone(Xcode)/Navi_Exception/System_Exception.cpp \
    Drone(Xcode)/Serial/Serial.cpp \
    Drone(Xcode)/Thread/Thread.cpp \
    Drone(Xcode)/Thread/ThreadStruct.cpp \
    Drone(Xcode)/Utils/Listener.cpp \
    Drone(Xcode)/Utils/Point3D.cpp \
    Drone(Xcode)/main.cpp

HEADERS  += mainwindow.h \
    WidgetsUsed/Buttons/buttons.h \
    Source/qcgaugewidget.h \
    WidgetsUsed/EandM/eandm.h \
    WidgetsUsed/InputCommands/inputcommands.h \
    dronestatus.h \
    lecturefichiertexte.h \
    readinput.h \
    threadreadinput.h \
    Drone(Xcode)/Com/ComException.h \
    Drone(Xcode)/Com/Communication.h \
    Drone(Xcode)/Com/Message.h \
    Drone(Xcode)/Com/MessageChecker.h \
    Drone(Xcode)/Com/MessageProcessor.h \
    Drone(Xcode)/Com/MessageSender.h \
    Drone(Xcode)/Com/PingProcessor.h \
    Drone(Xcode)/Drone/Config.h \
    Drone(Xcode)/Drone/Drone.h \
    Drone(Xcode)/Drone/StateChecker.h \
    Drone(Xcode)/Navi_Exception/INS_Exception.hpp \
    Drone(Xcode)/Navi_Exception/Pilot_Exception.hpp \
    Drone(Xcode)/Navi_Exception/System_Exception.hpp \
    Drone(Xcode)/Serial/serial_exception/serial_exception.hpp \
    Drone(Xcode)/Serial/Serial.h \
    Drone(Xcode)/serial_exception/serial_exception.hpp \
    Drone(Xcode)/Thread/Runnable.h \
    Drone(Xcode)/Thread/Thread.h \
    Drone(Xcode)/Thread/ThreadStruct.h \
    Drone(Xcode)/Utils/BlockingQueue.h \
    Drone(Xcode)/Utils/Listener.h \
    Drone(Xcode)/Utils/Point3D.hpp

FORMS    += mainwindow.ui WidgetsUsed/Buttons/buttons.ui WidgetsUsed/EandM/eandm.ui WidgetsUsed/InputCommands/inputcommands.ui

RESOURCES += \
    images.qrc
