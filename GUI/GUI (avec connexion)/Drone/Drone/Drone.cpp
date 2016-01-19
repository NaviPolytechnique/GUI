
#include "Drone.h"




Drone::Drone(){
  
  target =  new Point3D<uint16_t>(0, 0, 0);
  pos =  new Point3D<uint16_t>(0, 0, 0);
  angles =  new Point3D<uint16_t>(0, 0, 0);
  speed =  new Point3D<uint16_t>(0, 0, 0);
  posincr =  new Point3D<uint16_t>(0, 0, 0);
  angleincr =  new Point3D<uint16_t>(0, 0, 0);
  speedincr =  new Point3D<uint16_t>(0, 0, 0);
  alt = new uint16_t(0);
  altincr = new uint16_t(0.);
  charge = new uint16_t(0);
  chargeincr = new uint16_t (0);
    
  pthread_mutex_init(&m_mutex, NULL);
  pthread_cond_init(&m_condv, NULL);
  
  pthread_mutex_init(&alt_mutex, NULL);
  pthread_mutex_init(&altincr_mutex, NULL);
  
  
  
  threadList[0]=new ThreadStruct("mpr",2,1,Thread::FIFO);
  threadList[1]=new ThreadStruct("xbee",2,1,Thread::FIFO);
  threadList[2]=new ThreadStruct("mProcessor",2,1,Thread::FIFO);
  threadList[3]=new ThreadStruct("mSender",2,1,Thread::FIFO);
  threadList[4]=new ThreadStruct("pingProcessor",2,1,Thread::FIFO);
};

Drone::~Drone(){};


void Drone::start(){
       
  startCom();
  
  pthread_mutex_lock(&m_mutex);
  pthread_cond_wait(&m_condv, &m_mutex);
  pthread_mutex_unlock(&m_mutex);
  std::cout <<"killing"<<std::endl;
  
};

void Drone::startCom(){
    moduleCom = new Communication(this);
    moduleCom->start();
    
};






void Drone::startThread(Runnable* runnable, int id){
  threadList[id]->start(runnable);
};


void Drone::shutOff(){
  pthread_mutex_lock(&m_mutex);
  pthread_cond_signal(&m_condv);
  pthread_mutex_unlock(&m_mutex);
};

int* Drone::getComId(){
  return new int(0);
};


Point3D<uint16_t>* Drone::getPos(){
    return pos;
};

Point3D<uint16_t>* Drone::getSpeed(){
    return speed;
};

Point3D<uint16_t>* Drone::getTarget(){
    return target;
};

Point3D<uint16_t>* Drone::getAngles(){
    return angles;
};


Point3D<uint16_t>* Drone::getPosIncr(){
    return posincr;
};

Point3D<uint16_t>* Drone::getSpeedIncr(){
    return speedincr;
};


Point3D<uint16_t>* Drone::getAngleIncr(){
    return angleincr;
};


uint16_t* Drone::getAlt(){
    pthread_mutex_lock(&alt_mutex);
    uint16_t* r = alt;
    pthread_mutex_unlock(&alt_mutex);
    return r;
};

uint16_t* Drone::getCharge(){
    pthread_mutex_lock(&charge_mutex);
    uint16_t* r = charge;
    pthread_mutex_unlock(&charge_mutex);
    return r;
};

uint16_t* Drone::getAltIncr(){
    pthread_mutex_lock(&altincr_mutex);
    uint16_t* r = altincr;
    pthread_mutex_unlock(&altincr_mutex);
    return r;
};

uint16_t* Drone::getChargeIncr(){
    pthread_mutex_lock(&chargeincr_mutex);
    uint16_t* r = chargeincr;
    pthread_mutex_unlock(&chargeincr_mutex);
    return r;
};

void Drone::setPos(uint16_t x, uint16_t y, uint16_t z){
    pos->setX(x);
    pos->setY(y);
    pos->setZ(z);
    pos->print();
};

void Drone::setTarget(uint16_t x, uint16_t y, uint16_t z){
    target->setX(x);
    target->setY(y);
    target->setZ(z);
    target->print();
};

void Drone::setSpeed(uint16_t vx, uint16_t vy, uint16_t vz){
    speed->setX(vx);
    speed->setY(vy);
    speed->setZ(vz);
    speed->print();
};

void Drone::setAngles(uint16_t a, uint16_t b, uint16_t c){
    angles->setX(a);
    angles->setY(b);
    angles->setZ(c);
    angles->print();
};

void Drone::setAlt(uint16_t z){
    pthread_mutex_lock(&alt_mutex);
    *alt = z;
    std::cout<<"alt= "<<*alt<<std::endl;
    pthread_mutex_unlock(&alt_mutex);
    
};

void Drone::setCharge(uint16_t c){
    pthread_mutex_lock(&charge_mutex);
    *charge = c;
    std::cout<<"charge= "<<*charge<<std::endl;
    pthread_mutex_unlock(&charge_mutex);
};


void Drone::setPosIncr(uint16_t x, uint16_t y, uint16_t z){
    posincr->setX(x);
    posincr->setY(y);
    posincr->setZ(z);
    posincr->print();
};


void Drone::setSpeedIncr(uint16_t vx, uint16_t vy, uint16_t vz){
    speedincr->setX(vx);
    speedincr->setY(vy);
    speedincr->setZ(vz);
    speedincr->print();
};

void Drone::setAngleIncr(uint16_t a, uint16_t b, uint16_t c){
    angleincr->setX(a);
    angleincr->setY(b);
    angleincr->setZ(c);
    angleincr->print();
};

void Drone::setAltIncr(uint16_t z){
    pthread_mutex_lock(&altincr_mutex);
    *altincr = z;
    std::cout<<"altincr = "<<*altincr<<std::endl;
    pthread_mutex_unlock(&altincr_mutex);
};

void Drone::setChargeIncr(uint16_t c){
    pthread_mutex_lock(&chargeincr_mutex);
    *chargeincr = c;
    std::cout<<"chargeincr= "<<*chargeincr<<std::endl;
    pthread_mutex_unlock(&chargeincr_mutex);
};



/*#Pily : voir quels messages envoyer: 
 CONTROL;land
 CONTROL;takeoff
 CONTROL;kill
 SYSTEM;calibrIMU
 SYSTEM;startIMU
 SYSTEM;startPilot
 SYSTEM;startAll
 SYSTEM;stopIMU
 SYSTEM;stopPilot
 CONTROL;EmergencyStop
 CONFIG;paramètre;valeur
 CONTROL;setTarget;x;y;z
 
 les boutons appellent drone->sendMsg(new Message(...))
 
 */



void Drone::sendMsg(Message* msg){
    moduleCom->addtsMsg(msg);
};