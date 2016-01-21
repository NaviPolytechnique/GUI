#ifndef THREADSTRUCT_H_INCLUDED
#define THREADSTRUCT_H_INCLUDED

#include "Thread.h"
#include <iostream>

class ThreadStruct{
  
 public :
   
   ThreadStruct(char* name_, int priority_, int cpu_, Thread::sched_policy policy_);
   ~ThreadStruct();
   void start(Runnable* runnable_);
   
 
  private :
    
    int priority;
    int cpu;
    char* name;
    Thread::sched_policy policy; 
    Thread* thread;
  
};

#endif