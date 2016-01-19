#include "xyzwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    XyzWidget w;
    w.show();

    return a.exec();
}
