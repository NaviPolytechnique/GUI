#include "zcursor.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ZCursor w;
    w.show();

    return a.exec();
}
