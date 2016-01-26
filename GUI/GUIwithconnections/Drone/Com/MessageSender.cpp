#include "MessageSender.h"


MessageSender::MessageSender(Communication* moduleCom_, Drone* drone_): drone(drone_),moduleCom(moduleCom_){
  comId = drone->getComId();
    currentMsgId= new int(0);
}

MessageSender::~MessageSender(){}

void MessageSender::start(){
  drone->startThread(this, mSenderThread);
  /*Message* msg = new Message(Message::SYSTEM, "Hello I'm Navi !", 0);
  moduleCom->addtsMsg(msg);*/
}


void* MessageSender::run(){
  Message* msg;
  std::string msg_str;
  uint32_t checksum;
  while(true){
    msg=moduleCom->tsMsgPop();
    msg_str = messagetoStr(msg);
    *currentMsgId = *currentMsgId + 1;
    checksum = MessageSender::Adler32(msg_str);
    
    std::stringstream ss;				//pas efficace apparemment
    ss<<checksum;
    msg_str = "$;"+ss.str()+";"+msg_str+"\r\n";
    std::cout<<" envoi du message : "<<msg_str<<std::endl;
    moduleCom->sendStr((char*)msg_str.c_str());
    delete msg;
  }
    return 0;
}

std::string MessageSender::messagetoStr(Message* msg){
  Message::msg_type type = msg->getType();
  std::string content = *(msg->getContent());
  std::stringstream ss;
  ss<<*comId;
  ss<<";";
  ss<<*currentMsgId;
  ss<<";";
  
  if(type==Message::SYSTEM){
    ss<<"SYSTEM;";
  }else if(type == Message::EMERGENCY){
    ss<<"EMERGENCY;";
  }else if(type==Message::CONTROL){
    ss<<"CONTROL;" ;
  }else if(type==Message::PING){
    ss<<"PING;";
  }else if(type==Message::PINGANSWER){
    ss<<"PINGANSWER;";
  }else if(type==Message::EXCEPTION){
      ss<<"EXCEPTION;";
  }else if(type==Message::CONFIG){
      ss<<"CONFIG;";
  }else if(type==Message::HOME){
      ss<<"HOME;";
  }else if(type==Message::TARGET){
      ss<<"TARGET;";
  }
  
  ss<<content;
  return ss.str();
  
}

uint32_t MessageSender::Adler32(std::string str){
  size_t len = str.size();
  char* str_char = (char*)str.c_str();
  uint32_t a=1, b=0;
  size_t index;
  for(index = 0; index<len;++index){
    a = (a+str_char[index]) % MOD_ADLER;
    b = (b+a) % MOD_ADLER;
  }
  
  return (b<<16)|a;
  
}
