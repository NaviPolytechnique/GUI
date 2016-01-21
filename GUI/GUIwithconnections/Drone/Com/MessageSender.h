#ifndef MessageSender_Header_h
#define MessageSender_Header_h

#include <string>
#include<sstream>

#include "../Drone/Drone.h"
#include "Communication.h"
#include "../Thread/Runnable.h"
#include "Communication.h"
#include "Message.h"





class Drone;
class Communication;

extern int mSenderThread;

class MessageSender : public Runnable{
  
public:
  
  
  MessageSender(Communication* moduleCom_, Drone* drone_);
  ~MessageSender();
  
  void start();
  void* run();
  
  std::string messagetoStr(Message* msg);
  
  static uint32_t Adler32(std::string msg_str);
  
private:
  
  Communication* moduleCom;
  Drone* drone;
  int* comId;
  int* currentMsgId;
};
#endif