#include "attitudemeter.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AttitudeMeter w;
    w.show();

    return a.exec();
}
