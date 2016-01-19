#include "compass.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Compass w;
    w.show();

    return a.exec();
}
