#ifndef Message_H_INCLUDED
#define Message_H_INCLUDED

#include<string>



class Message{
  
  
public:
  
  
  enum msg_type {SYSTEM, CONTROL, EMERGENCY, PING, PINGANSWER, CONFIG, EXCEPTION, TARGET, HOME};
   
  Message(Message::msg_type type_, std::string content_, int id_);
  ~Message();
  msg_type getType();
  std::string* getContent();
  int* getId();
  
 
  
  
private:
  
  std::string* content;
  int* id;
  Message::msg_type type;
}; 


#endif