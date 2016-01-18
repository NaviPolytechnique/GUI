#include "inputcommands.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InputCommands w;
    w.show();

    return a.exec();
}
