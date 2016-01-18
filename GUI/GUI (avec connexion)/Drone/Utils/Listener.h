#ifndef LISTENER_HEADER_H
#define LISTENER_HEADER_H

#include<iostream>
#include "../Serial/Serial.h"
#include "../Thread/Runnable.h"
#include "../Utils/BlockingQueue.h"
#include "../Thread/Thread.h"





class Listener : public Runnable{
  
public : 
  Listener(const char* portname, BlockingQueue<char*>* queue_);
    Listener(const char* portname, BlockingQueue<char*>* queue_, int baud_rate);
  ~Listener();
  void* run();
  void start();
  
  void write(char* msg);
  
private : 
  Serial* serialport;
  BlockingQueue<char*>* recvd;
  
  
};

#endif