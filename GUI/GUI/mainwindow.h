#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include "WidgetsUsed/Buttons/buttons.h"
#include "WidgetsUsed/EandM/eandm.h"
#include "WidgetsUsed/InputCommands/inputcommands.h"
#include "WidgetsUsed/AttitudeMeter/attitudemeter.h"
#include "WidgetsUsed/Compass/compass.h"
#include "dronestatus.h"
#include "threadreadinput.h"


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

private slots:


private:
    Ui::MainWindow *ui;

    DroneStatus *dronestatus;
    AttitudeMeter *widgetattitudemeter;
    InputCommands *widgetinputcommands;
    EandM *widgeteandm ;
    Buttons *widgetcontrol;
    Compass *widgetcompass;
    ThreadReadInput *thread;
};

#endif // MAINWINDOW_H
