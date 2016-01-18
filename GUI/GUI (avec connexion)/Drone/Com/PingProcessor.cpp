#include "PingProcessor.h"


PingProcessor::PingProcessor(Communication* moduleCom_, Drone* drone_): moduleCom(moduleCom_), drone(drone_) {
  id = new int(1);
  for(int k = 0; k<10; k++){
    waiting[k]=-1;
  }
    
    pos = drone->getPos();
    target = drone->getTarget();
    speed = drone->getSpeed();
    angles = drone->getAngles();
    charge = drone->getCharge();
    posincr = drone->getPosIncr();
    speedincr = drone->getSpeedIncr();
    angleincr = drone->getAngleIncr();
    chargeincr = drone->getChargeIncr();
    
}

PingProcessor::~PingProcessor(){
  delete drone;
  delete moduleCom;
}

void PingProcessor::start(){
  drone->startThread(this, pingProcessorThread);
  Message* msg = new Message(Message::SYSTEM, "pingProcessor", 0);
  moduleCom->addttMsg(msg);
  
}


void* PingProcessor::run(){
    int i = 0;
    //régler le i adéquat
  while(true){
      if(i==10){
          std::stringstream ss;
          ss<<*id;
          ss<<";";
          ss<<"r";
          ss<<";";
          ss<<pos->getX();
          ss<<";";
          ss<<pos->getY();
          ss<<";";
          ss<<pos->getZ();
          ss<<";";
          ss<<*alt;
          ss<<";";
          ss<<speed->getX();
          ss<<";";
          ss<<speed->getY();
          ss<<";";
          ss<<speed->getZ();
          ss<<";";
          ss<<angles->getX();
          ss<<";";
          ss<<angles->getY();
          ss<<";";
          ss<<angles->getZ();
          ss<<";";
          ss<<*charge;
          ss<<";";
          std::string message = ss.str();
          Message* msg = new Message(Message::PING, message, 0);
          moduleCom->addtsMsg(msg);
          waitAnswer(*id);
          *id = *id+1;
          sleep(1);
      }else{
          std::stringstream ss;
          ss<<*id;
          ss<<";";
          ss<<"i";
          ss<<";";
          ss<<posincr->getX();
          ss<<";";
          ss<<posincr->getY();
          ss<<";";
          ss<<posincr->getZ();
          ss<<";";
          ss<<*altincr;
          ss<<";";
          ss<<speedincr->getX();
          ss<<";";
          ss<<speedincr->getY();
          ss<<";";
          ss<<speedincr->getZ();
          ss<<";";
          ss<<angleincr->getX();
          ss<<";";
          ss<<angleincr->getY();
          ss<<";";
          ss<<angleincr->getZ();
          ss<<";";
          ss<<*chargeincr;
          ss<<";";
          std::string message = ss.str();
          Message* msg = new Message(Message::PING, message, 0);
          moduleCom->addtsMsg(msg);
          waitAnswer(*id);
          *id = *id+1;
          sleep(1);

      }
  }
    return 0;
}

void PingProcessor::waitAnswer(int i){
  
  pthread_mutex_lock(&waiting_mutex);
  for(int k =0; k<10; k++){
    if(waiting[k] == -1){
      waiting[k] = i;
      pthread_mutex_unlock(&waiting_mutex);
      return; 
    }
  }
  pthread_mutex_unlock(&waiting_mutex);
  std::cout<<"Communication lost, emergency stop !"<< std::endl;
}

void PingProcessor::registerAnswer(int i){
  for(int k = 0; k<10; k++){
    if(waiting[k]<=i){
      waiting[k] = -1;
    }
  }
}
