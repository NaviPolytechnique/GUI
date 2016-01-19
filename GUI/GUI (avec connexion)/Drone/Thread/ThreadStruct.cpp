
#include "ThreadStruct.h"


using namespace std;

ThreadStruct::ThreadStruct(char* name_, int priority_, int cpu_, Thread::sched_policy policy_):name(name), priority(priority_), cpu(cpu_), policy(policy_){};

ThreadStruct::~ThreadStruct(){};

void ThreadStruct::start(Runnable* runnable_){
  thread = new Thread(std::auto_ptr<Runnable>(runnable_),false,policy,priority);
  thread->start();
};


