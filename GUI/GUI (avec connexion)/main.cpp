#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "Drone/Drone/Drone.h"
#include "Drone/Drone/Config.h"

int main(int argc, char *argv[])
{

    Drone *d = new Drone();
    d->start();

    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();

    return a.exec();
}
