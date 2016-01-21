#ifndef MessageProcessor_Header_h
#define MessageProcessor_Header_h


#include "../Thread/Runnable.h"
#include "Message.h"
#include "../Drone/Drone.h"
#include "Communication.h"
#include "mainwindow.h"
#include <string.h>
#include <vector>
#include "../../mainwindow.h"
#include <QString>


extern int mProcessorThread;

class Communication;
class Drone;
class MainWindow;

class MessageProcessor : public Runnable{
  

public:
  
  MessageProcessor(Communication* moduleCom_, Drone* drone, MainWindow* window_);
  ~MessageProcessor();
  
  void start();
  void* run();
  void treatMsg(Message* msg);
    
  void decompose(std::string* msg, std::string delimiter, std::vector<std::string> * vect );
  
private:
  
  MainWindow* window;
  Communication* moduleCom;
  Drone* drone;
};

#endif
