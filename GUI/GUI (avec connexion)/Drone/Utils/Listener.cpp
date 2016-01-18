#include "Listener.h"

using namespace std;

Listener::Listener(const char* portname, BlockingQueue<char*>* queue_):recvd(queue_){
    serialport = new Serial(portname, 9600);
}

Listener::Listener(const char* portname, BlockingQueue<char*>* queue_, int baud_rate):recvd(queue_){
    serialport = new Serial(portname, baud_rate);
}

Listener::~Listener(){}



void* Listener::run(){
  char* line = new char[512];
  while(true){
    int status = serialport->readLine(line);
    recvd->add(line);
  }
    delete [] line;
    return 0;
}


void Listener::start(){
    Thread *th;
    th = new Thread(std::auto_ptr<Runnable>(this),false,Thread::FIFO,2);
    th->start();

}

void Listener::write(char* msg){
  serialport->writeString(msg);
}
