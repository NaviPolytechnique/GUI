#include "calibration.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calibration w;
    w.show();

    return a.exec();
}
