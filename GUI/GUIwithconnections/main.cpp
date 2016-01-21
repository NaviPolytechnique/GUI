#include "mainwindow.h"
#include <QApplication>


//---------------------Variables Globales de Configuration--------------------//


//********Fichiers de Config*******//



//********Ports*******//
//char* Radio = "/dev/tty.usbserial-AL01838T";
char* Radio = "/dev/ttyUSB0";

char* IMUport = "/dev/ttyUSB1";


//********Threads*******//
int mCheckerThread = 0;
int xbeeListenerThread = 1;
int mProcessorThread = 2;
int mSenderThread = 3;
int pingProcessorThread = 4;
int eKFthread = 5;
int autoPilotThread = 6;



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    a.exec();
    std::cout<<"fin"<<std::endl;
    return 0;
}
