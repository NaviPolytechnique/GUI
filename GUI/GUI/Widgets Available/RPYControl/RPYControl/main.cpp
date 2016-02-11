#include "rpycontrol.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RPYControl w;
    w.show();

    return a.exec();
}
