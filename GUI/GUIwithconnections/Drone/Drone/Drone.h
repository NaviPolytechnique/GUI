#ifndef Drone_Header_h
#define Drone_Header_h

#include <iostream>
#include <string>
#include <pthread.h>

#include "../Thread/ThreadStruct.h"
#include "../Com/Communication.h"
#include "../Utils/Point3D.hpp"
#include "../Com/Message.h"
#include "../Utils/Listener.h"
#include "../Thread/Thread.h"
#include "../Utils/BlockingQueue.h"
#include "../Com/MessageChecker.h"
#include "../../mainwindow.h"

#include <unistd.h>






//--------------------Code du Drone-------------------------------------------//


class Communication;
class IMU;
class EKF;
class Autopilot;
class MainWindow;

class Drone {
  
  
  public:
    
    Drone(MainWindow* window_);
    ~Drone();
    
//********Fonctions d'initialisation*******//
    void start();
    void startCom();
    void startAutoPilot();
    void startEKF();
    
    void readConfig();
    void readThreadConfig();
    
    
    void startThread(Runnable* runnable, int id);


//********Fonctions "carrefours" entre modules*******//
    void sendMsg(Message* msg);
    
//********Actions définies*******//
    void shutOff();
    
    int* getComId();
    
//********Modification de la config*******//
    //void changeConfig(char[] change)

//********Accès/modification des paramètres d'état*******//
    Point3D<int>* getPos();
    Point3D<int>* getSpeed();
    Point3D<int>* getTarget();
    Point3D<int>* getAngles();
    Point3D<int>* getAnglesTarget();
    Point3D<int>* getPosIncr();
    Point3D<int>* getSpeedIncr();
    Point3D<int>* getAngleIncr();
    int* getAlt();
    int* getAltIncr();
    int* getCharge();
    int* getChargeIncr();
  
    void setPos(int x, int y, int z);
    void setTarget(int x, int y, int z);
    void setAnglesTarget(int x, int y, int z);
    void setSpeed(int vx, int vy, int vz);
    void setAngles(int a, int b, int c);
    void setAlt(int z);
    void setPosIncr(int x, int y, int z);
    void setSpeedIncr(int vx, int vy, int vz);
    void setAngleIncr(int a, int b, int c);
    void setAltIncr(int z);
    void setCharge(int c);
    void setChargeIncr(int c);

    void setHome(int x, int y, int z);
    Point3D<int>* getHome();
/*******************************************************/
    
  private:
    

    MainWindow* window;
    pthread_mutex_t m_mutex;
    pthread_cond_t  m_condv;
    
    

    ThreadStruct* threadList[20];
    
//********Modules*******//
    Communication* moduleCom;

 

    
//********Paramètres d'état*******//
    Point3D<int>* target;
    Point3D<int>* anglestarget;
    Point3D<int>* pos;
    Point3D<int>* speed;
    Point3D<int>* angles;
    Point3D<int>* posincr;
    Point3D<int>* speedincr;
    Point3D<int>* angleincr;

    Point3D<int>* home;

    pthread_mutex_t alt_mutex;
    int* alt;
    pthread_mutex_t altincr_mutex;
    int* altincr;
    
    pthread_mutex_t charge_mutex;
    int* charge;
    pthread_mutex_t chargeincr_mutex;
    int* chargeincr;

};

#endif

  
