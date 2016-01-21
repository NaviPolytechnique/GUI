#include "eandm.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EandM w;
    w.show();

    return a.exec();
}
