#include "MessageProcessor.h"



MessageProcessor::MessageProcessor(Communication* moduleCom_, Drone* drone_, MainWindow* window_): moduleCom(moduleCom_),
    drone(drone_),window(window_){}

MessageProcessor::~MessageProcessor(){}

void MessageProcessor::start(){
  drone->startThread(this, mProcessorThread);
}

void* MessageProcessor::run(){
    while(true){
        Message * msg= moduleCom->ttMsgPop();
        treatMsg(msg);
        delete msg;
    }
    return 0;
}


void MessageProcessor::decompose(std::string* msg, std::string delimiter, std::vector<std::string> * vect ){
    std::size_t pos = 1;
    std::size_t oldpos = 0;
    std::string param;
    

    
    pos = msg->find(delimiter);
    
    if(pos==std::string::npos){
        vect->push_back(*msg);
    }else{
        while( pos != std::string::npos ) {
            param = msg->substr(oldpos, pos-oldpos);
            vect->push_back(param);
            oldpos = pos+1;
            pos = msg->find(delimiter, oldpos);
        }
    }

}

void MessageProcessor::treatMsg(Message* msg){

    std::string* content =msg->getContent();
    std::vector<std::string> vect;
    std::string delimiter = ";";
    
    
    
    decompose(content, delimiter, &vect);
    
    
    size_t size = vect.size();
    
    int i =0;
    
    
    if(msg->getType()==Message::SYSTEM){
        std::string content = vect[0];
            /*if (!content.compare("kill")){  //pour le drone
                    drone->shutOff();
            }*/
        window->popup(QString::fromStdString(content));
        
            //appeler une fonction qui actualise la partie système de l'interface et qui affiche des messages du genre : taking off, landing... (#Pily)
    }
    
    if(msg->getType()==Message::EXCEPTION){
        //appeler une fonction qui actualise la partie exception
        
    }
    
    
            
        
    if(msg->getType()==Message::PING){
            std::cout<<"ping"<<std::endl;
            Message* msg = new Message(Message::PINGANSWER, vect[0], 0);
            moduleCom->addtsMsg(msg);

            if(!vect[1].compare("r")){
                std::cout<<"normal"<<std::endl;
                drone->setPos(::atoi(vect[2].c_str()), ::atoi(vect[3].c_str()), ::atoi(vect[4].c_str()));
                drone->setSpeed(::atoi(vect[6].c_str()), ::atoi(vect[7].c_str()), ::atoi(vect[8].c_str()));
                drone->setAngles(::atoi(vect[9].c_str()), ::atoi(vect[10].c_str()), ::atoi(vect[11].c_str()));
                drone->setAlt(::atoi(vect[5].c_str()));
                drone->setCharge(::atoi(vect[12].c_str()));
            }else if (!vect[1].compare("i")){
                std::cout<<"increment"<<std::endl;
                drone->setPosIncr(::atoi(vect[2].c_str()), ::atoi(vect[3].c_str()), ::atoi(vect[4].c_str()));
                drone->setSpeedIncr(::atoi(vect[6].c_str()), ::atoi(vect[7].c_str()), ::atoi(vect[8].c_str()));
                drone->setAngleIncr(::atoi(vect[9].c_str()), ::atoi(vect[10].c_str()), ::atoi(vect[11].c_str()));
                drone->setAltIncr(::atoi(vect[5].c_str()));
                drone->setChargeIncr(::atoi(vect[12].c_str()));
            }
    }

    
}

    
    //--------------DRONE--------------------//
    /*if(msg->getType()==Message::SYSTEM){
      if(!content->compare("kill")){
        drone->shutOff();
      }
    }
    if(msg->getType()==Message::PINGANSWER){
        std::string delimiter = ";";
        std::string  id_str = content->substr(0, content->find(delimiter));
        int id = atoi(id_str.c_str());
        moduleCom->registerAnswer(id);
    }
  
    if(msg->getType()== Message::CONTROL){
        std::string delimiter = ";";
        std::size_t pos = 0 ;
        std::size_t oldpos = 0;
        pos = content->find(delimiter);
        std::string  ordre = content->substr(oldpos, pos);
        if(!ordre.compare("target")){
            //X
            oldpos = pos;
            pos = content->find(delimiter);
            std::string x_str = content->substr(oldpos, pos);
            //Y
            oldpos = pos;
            pos = content->find(delimiter);
            std::string y_str = content->substr(oldpos, pos);
            //Z
            oldpos = pos;
            pos = content->find(delimiter);
            std::string z_str = content->substr(oldpos, pos);
            
            drone->setTarget(::atoi(x_str.c_str()), ::atoi(y_str.c_str()), ::atoi(z_str.c_str()));
        }
    }
    if(msg->getType()==Message::CONFIG){
        
    }
   //--------------ORDI------------------------//
    if(msg->getType()==Message::PING){
      std::size_t pos = 0 ;
      std::size_t oldpos = 0;
      std::string delimiter = ";";
        
      std::cout<<"interprétation"<<std::endl;
      pos = content->find(delimiter);
      
      
      //id ping
      std::string  id_str = content->substr(oldpos, pos);
      Message* msg = new Message(Message::PINGANSWER, id_str, 0);
      moduleCom->addtsMsg(msg);
      
        std::cout<<*content<<std::endl;
      //incrément ou pas
      oldpos = pos+1;
      pos = content->find(delimiter, oldpos);
      std::string type = content->substr(oldpos , pos-oldpos);
        std::cout<<"pos :"<< pos<<std::endl;
        std::cout<<"type : "<< type<<std::endl;
      //X
      oldpos = pos+1;
      pos = content->find(delimiter, oldpos);
      std::string x_str = content->substr(oldpos,  pos-oldpos);
        std::cout<<"pos :"<< pos<<std::endl;
      std::cout<<"x : "<< x_str <<std::endl;
      //Y
      oldpos = pos+1;
      pos = content->find(delimiter, oldpos);
      std::string y_str = content->substr(oldpos,  pos-oldpos);
        std::cout<<"pos :"<< pos<<std::endl;
      std::cout<<"y : "<< y_str<<std::endl;
      //Z
      oldpos = pos+1;
      pos = content->find(delimiter, oldpos);
      std::string z_str = content->substr(oldpos,  pos-oldpos);
        std::cout<<"pos :"<< pos<<std::endl;
        std::cout<<"z : "<< z_str<<std::endl;
      //alt
      oldpos = pos+1;
      pos = content->find(delimiter, oldpos);
      std::string alt_str = content->substr(oldpos,  pos-oldpos);
        std::cout<<"pos :"<< pos<<std::endl;
      std::cout<<"alt : "<< alt_str<<std::endl;
      //VX
      oldpos = pos+1;
      pos = content->find(delimiter, oldpos);
      std::string vx_str = content->substr(oldpos,  pos-oldpos);
        std::cout<<"pos :"<< pos<<std::endl;
        std::cout<<"vx : "<< vx_str<<std::endl;
      //VY
      oldpos = pos+1;
      pos = content->find(delimiter, oldpos);
      std::string vy_str = content->substr(oldpos,  pos-oldpos);
        std::cout<<"pos :"<< pos<<std::endl;
        std::cout<<"vy : "<< vy_str<<std::endl;
      //VZ
      oldpos = pos+1;
      pos = content->find(delimiter, oldpos);
      std::string vz_str = content->substr(oldpos,  pos-oldpos);
        std::cout<<"pos :"<< pos<<std::endl;
        std::cout<<"vz : "<< vz_str<<std::endl;
        
      //alpha
      oldpos = pos+1;
      pos = content->find(delimiter, oldpos);
      std::string ax_str = content->substr(oldpos,  pos-oldpos);
        std::cout<<"pos :"<< pos<<std::endl;
        std::cout<<"ax : "<< ax_str<<std::endl;
      //beta
      oldpos = pos+1;
      pos = content->find(delimiter, oldpos);
      std::string ay_str = content->substr(oldpos,  pos-oldpos);
        std::cout<<"pos :"<< pos<<std::endl;
        std::cout<<"ay : "<< ay_str<<std::endl;
      //gamma
      oldpos = pos+1;
      pos = content->find(delimiter, oldpos);
      std::string az_str = content->substr(oldpos,  pos-oldpos);
        std::cout<<"pos :"<< pos<<std::endl;
        std::cout<<"az : "<< az_str<<std::endl;
      //charge
      oldpos = pos +1;
      pos = content->find(delimiter, oldpos);
      std::string charge_str = content->substr(oldpos,  pos-oldpos);
        std::cout<<"pos :"<< pos<<std::endl;
      std::cout<<"charge : "<< charge_str<<std::endl;
      
        std::cout<<"actualisation"<<std::endl;*/
      
      /*if(!type.compare("r")){
          std::cout<<"normal"<<std::endl;
          drone->setPos(::atoi(x_str.c_str()), ::atoi(y_str.c_str()), ::atoi(z_str.c_str()));
          drone->setSpeed(::atoi(vx_str.c_str()), ::atoi(vy_str.c_str()), ::atoi(vz_str.c_str()));
          drone->setAngles(::atoi(ax_str.c_str()), ::atoi(ay_str.c_str()), ::atoi(az_str.c_str()));
          drone->setAlt(::atoi(alt_str.c_str()));
          drone->setCharge(::atoi(charge_str.c_str()));*/
      /*}else if (!type.compare("i")){
          std::cout<<"increment"<<std::endl;
          drone->setPosIncr(::atoi(x_str.c_str()), ::atoi(y_str.c_str()), ::atoi(z_str.c_str()));
          drone->setSpeedIncr(::atoi(vx_str.c_str()), ::atoi(vy_str.c_str()), ::atoi(vz_str.c_str()));
          drone->setAngleIncr(::atoi(ax_str.c_str()), ::atoi(ay_str.c_str()), ::atoi(az_str.c_str()));
          drone->setAltIncr(::atoi(alt_str.c_str()));*/
          //drone->setChargeIncr(::atoi(charge_str.c_str()));
      //}
    
  //}
