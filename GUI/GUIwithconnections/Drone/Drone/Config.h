#ifndef Config_Header_h
#define Config_Header_h

//---------------------Variables Globales de Configuration--------------------//


//********Fichiers de Config*******//



//********Ports*******//
//char* Radio = "/dev/tty.usbserial-AL01838T";
char* Radio = "/dev/tty.usbserial-AH029CVJ";

char* IMUport = "/dev/ttyUSB1";


//********Threads*******//
int mCheckerThread = 0;
int xbeeListenerThread = 1;
int mProcessorThread = 2;
int mSenderThread = 3;
int pingProcessorThread = 4;
int eKFthread = 5;
int autoPilotThread = 6;

//********Paramètres PID*******//







#endif