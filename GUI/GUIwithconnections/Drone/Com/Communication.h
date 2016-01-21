#ifndef Communication_Header_h
#define Communication_Header_h


#include "../Utils/BlockingQueue.h"
#include "MessageChecker.h"
#include "../Utils/Listener.h"
#include "../Drone/Drone.h"
#include "Message.h"
#include "MessageProcessor.h"
#include "MessageSender.h"
#include "PingProcessor.h"
#include "ComException.h"
#include "../../mainwindow.h"

#include<exception>

extern char* Radio;

class Drone;
class MessageChecker;
class MessageProcessor;
class MessageSender;
class PingProcessor;
class ComException;
class MainWindow;


class Communication{
  
public :
  
  Communication(Drone* drone_, MainWindow* window_);
  ~Communication();
  void start();
  void stop();
  
  char* rMsgPop();
  Message* ttMsgPop();
  void addttMsg(Message* msg);
  void addtsMsg(Message* msg);
  Message* tsMsgPop();
  char* pingPop();
  
  void sendStr(char* str);
  
  void registerAnswer(int id);
  
  void launchException(ComException e);
    
    
private :
  
  MainWindow* window;
  Drone* drone;
  
  BlockingQueue<char*>* rMsg;
  BlockingQueue<Message*>* tsMsg;
  BlockingQueue<Message*>* ttMsg;
  BlockingQueue<char*>* ping;
  
  MessageChecker* rMsgChecker; 
  MessageSender* msgSender;
  
  Listener* rMsgListener;
  
  MessageProcessor* msgProcessor;
  PingProcessor* pingProcessor;
  
  
  
};
#endif
