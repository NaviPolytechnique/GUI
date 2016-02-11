#include "batterygauge.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BatteryGauge w;
    w.show();

    return a.exec();
}
