#ifndef MESSAGECHECKER_HEADER_H
#define MESSAGECHECKER_HEADER_H

#include <iostream>
#include <string>
#include <vector>
#include <stdint.h>
#include<exception>
#include "../Drone/Drone.h"
#include "Communication.h"
#include "../Utils/Listener.h"
#include "../Utils/BlockingQueue.h"
#include "../Thread/ThreadStruct.h"
#include "Message.h"
#include "MessageChecker.h"
#include "ComException.h"


// $;checksum;idcom;idmsg;type;content\r\n

class Drone;
class Communication;


extern int mCheckerThread; 

const int MOD_ADLER = 251;
//extern std::string messageType[];

class MessageChecker : public Runnable {
  
 public :
   MessageChecker(Communication* moduleCom_, Drone* drone_);
   ~MessageChecker();
   void start();
   void* run();
   
   int addMsgToProcess(std::vector<std::string>* msg_tab);
   
   static int isValid(char* msg, std::vector<std::string>* msg_tab);
   static uint32_t Adler32(char* msg, size_t len);
   static int decompose(std::string str, std::vector<std::string>* buffer);
   

  private :
    
    Communication* moduleCom;
    
    Drone* drone;
    
};

#endif
