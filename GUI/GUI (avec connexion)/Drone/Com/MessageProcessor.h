#ifndef MessageProcessor_Header_h
#define MessageProcessor_Header_h


#include "../Thread/Runnable.h"
#include "Message.h"
#include "../Drone/Drone.h"
#include "Communication.h"
#include <string.h>
#include <vector>


extern int mProcessorThread;

class Communication;
class Drone;

class MessageProcessor : public Runnable {
  
public:
  
  MessageProcessor(Communication* moduleCom_, Drone* drone);
  ~MessageProcessor();
  
  void start();
  void* run();
  void treatMsg(Message* msg);
    
  void decompose(std::string* msg, std::string delimiter, std::vector<std::string> * vect );
  
private:
  
  Communication* moduleCom;
  Drone* drone;
};

#endif