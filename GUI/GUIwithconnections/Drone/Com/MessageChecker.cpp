#include "MessageChecker.h"

using namespace std;

MessageChecker::MessageChecker(Communication* moduleCom_, Drone* drone_) : moduleCom(moduleCom_), drone(drone_){}


MessageChecker::~MessageChecker(){}


void MessageChecker::start(){
     drone->startThread(this, mCheckerThread);
}

void* MessageChecker::run(){
    char* msg;
    while(true){
        try{
            msg = moduleCom->rMsgPop();
            //std::cout<<"msg reçu :" << msg <<std::endl;
            vector<string> msg_tab(6);
            int j = MessageChecker::isValid(msg, &msg_tab);
            //std::cout<<msg<<std::endl;
            if(j){
                //std::cout<<"valide"<<std::endl;
                int i = addMsgToProcess(&msg_tab);
                if(i==0){
                    //std::cout<<"wrong message type"<<std::endl;
                    throw ComException(std::string("Wrong message type") + std::string(msg), 1);
                }
                else{
                    //std::cout<<"message added to to treat queue"<<std::endl;
                }
            }else{
                //std::cout<<"message non valide"<<std::endl;
                
            }
        }catch(ComException e){
            moduleCom->launchException(e);
        }
        /*std::cout<<msg<<std::endl;
         const char* kill = "kill\r\n";
         std::cout<<strcmp(msg, kill)<<std::endl;
         
         if(!strcmp(msg, kill)){
         drone->shutOff();
         }*/
    }
    return 0;
}

int MessageChecker::isValid(char* msg, std::vector<std::string>* msg_tab){
  /*
  char* beggining=...
  if(strcmp(beginning,"$")){
    std::cout<<"Mauvais début, on renvoie une demande"<<std::endl;
  }else{
    std::cout<<"bon début"<<std::endl;
  }
  
  pch = strtok(NULL, ";");
  std::cout<<msg<<" msg1"<<std::endl;
  std::cout<<pch<<" pch1"<<std::endl;
  unsigned int checksum = Adler*/
  
  
  
  string wholeMsg(msg);
  int decomposition;
  decomposition = MessageChecker::decompose(wholeMsg, msg_tab);
  

  
  if(decomposition != 0){
    if((*msg_tab)[0].compare("$")!=0){
      std::cout<<"mauvais début"<<std::endl;
      throw ComException(std::string("$ missing") + std::string(msg), 1);
      return 0;
    }
  
    string string_to_Check;
    char* char_to_Check;
    int computed_checksum;
    int received_checksum;
    
    string_to_Check = (*msg_tab)[2]+";"+(*msg_tab)[3]+";"+(*msg_tab)[4]+";"+(*msg_tab)[5]; //reconstruction pour vérifier le checksum
    size_t len = string_to_Check.size();
    char_to_Check = (char*)string_to_Check.c_str();
    computed_checksum = MessageChecker::Adler32(char_to_Check, len);
    received_checksum = atoi((char*)(*msg_tab)[1].c_str());
    
    //std::cout<<"checksum :"<< computed_checksum<<std::endl;
    
    if(computed_checksum!=received_checksum){
      std::cout<<"erreur de checksum"<<std::endl;
      throw ComException(std::string("Wrong checksum") + std::string(msg), 2);
      return 0;
    } 
  }
  else{
    //std::cout<<"mal passé"<<std::endl;
    throw ComException(std::string("Wrong syntax") + std::string(msg), 1);
    return 0; 
  }
  return 1;
}

int MessageChecker::addMsgToProcess(std::vector<std::string>* msg_tab){
  Message* msg;
  std::string type((*msg_tab)[4]);
  int id;
  id = atoi((char*)(*msg_tab)[3].c_str());
  if(!type.compare("SYSTEM")){
    msg = new Message(Message::SYSTEM, (*msg_tab)[5], id);
  }else if(!type.compare("EMERGENCY")){
    msg = new Message(Message::EMERGENCY, (*msg_tab)[5], id);
  }else if(!type.compare("CONTROL")){
   msg = new Message(Message::CONTROL, (*msg_tab)[5], id);
  }else if(!type.compare("PING")){
    //std::cout<<"c'est un ping"<<std::endl;
    msg = new Message(Message::PING, (*msg_tab)[5], id);
  }else if(!type.compare("PINGANSWER")){
    msg = new Message(Message::PINGANSWER, (*msg_tab)[5], id);
  }else if(!type.compare("CONFIG")){
      msg = new Message(Message::CONFIG, (*msg_tab)[5], id);
  }else if(!type.compare("EXCEPTION")){
    msg = new Message(Message::EXCEPTION, (*msg_tab)[5], id);
  }else if(!type.compare("HOME")){
    msg = new Message(Message::HOME, (*msg_tab)[5], id);
  }else if(!type.compare("TARGET")){
    msg = new Message(Message::TARGET, (*msg_tab)[5], id);
  }else{
    return 0;
  }
  moduleCom->addttMsg(msg);
  return 1;
}

uint32_t MessageChecker::Adler32(char* msg, size_t len){

  uint16_t a=1, b=0;
  size_t index;
  for(index = 0; index<len;++index){
    a = (a+msg[index]) % MOD_ADLER;
    b = (b+a) % MOD_ADLER;
  }
  return (b<<8)|a;
}

int MessageChecker::decompose(string str, std::vector<std::string>* buffer){
  std::size_t pos =1;
  std::size_t len;
  std::size_t found;
  string a;
  
  found =str.find(";", pos);
  for(int i = 0; i<5;i++){
    
    if(found!=std::string::npos){
      len = found-pos+1;
      a =str.substr(found-len,len);
      (*buffer)[i]= a;
      pos += len + 1;
      found =str.find(";", pos);
      
    }else{
      return 0;
    }
    
  }
  found =str.find("\r\n", pos);
  if(found!=std::string::npos){
    len = found-pos+1;
    a =str.substr(found-len,len);
    (*buffer)[5]= a;
  }else{
    return 0;
  }
  return 1;
  
}

