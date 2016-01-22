#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QString>
#include "WidgetsUsed/Buttons/buttons.h"
#include "WidgetsUsed/EandM/eandm.h"
#include "WidgetsUsed/InputCommands/inputcommands.h"
#include "WidgetsUsed/AttitudeMeter/attitudemeter.h"
#include "WidgetsUsed/Compass/compass.h"
#include "WidgetsUsed/ZCursor/zcursor.h"
#include "dronestatus.h"
#include "threadreadinput.h"
#include "WidgetsUsed/Gps/gps.h"
#include "WidgetsUsed/XYZWidget/xyzwidget.h"
#include "WidgetsUsed/XYZWidget/qcustomplot.h"

//com drone
#include <iostream>
#include "Drone/Drone/Drone.h"
#include "Drone/Com/Message.h"

class Drone;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



signals:
    void LigneLu(QString Str );
    void SystemMsg(QString message);
    void Exception(QString message);

private slots:
    void TakeOff();
    void Land();
    void EmergencyStop();
    void CalibrateIMU();
    void IMU();
    void Pilot();
    //void StartAll();
    void Kill();

private:
    Ui::MainWindow *ui;

    DroneStatus *dronestatus;
    AttitudeMeter *widgetattitudemeter;
    InputCommands *widgetinputcommands;
    EandM *widgeteandm ;
    Buttons *widgetcontrol;
    Compass *widgetcompass;
    ZCursor *widgetzcursor;
    Gps *widgetmap;
    XyzWidget *widgetxyzwidget;

    Drone *d;

};

#endif // MAINWINDOW_H
