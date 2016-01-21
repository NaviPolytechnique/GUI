//Thread.h
//
//
//Created by GG la fripouille on 12/07/2015
//Copyright (c) 2015 GG la fripouille. All rights reserved.
//

#include "Thread.h"


using namespace std;



Thread::Thread(std::auto_ptr<Runnable> runnable_, bool isDetached, Thread::sched_policy policy_, int priority_): runnable(runnable_),detached(isDetached) {

    if(runnable.get()==NULL){
        std::cout <<"Thread creation fail because runnable is null"<<std::endl; exit(-1);
    }
    int status = pthread_attr_init(&threadAttribute);
    if(status != 0){
        std::cout <<"Error initiating thread attribute"<<std::endl; exit(-1);
    }
    status = pthread_attr_setscope(&threadAttribute, PTHREAD_SCOPE_SYSTEM); //permet de specifier que le thread partage les ressources avec tout le système
    if(status != 0){
        std::cout <<"Error setting scope"<<std::endl; exit(-1);
    }
    if(detached){
        status = pthread_attr_setdetachstate(&threadAttribute, PTHREAD_CREATE_DETACHED);//joinable ou non
        if(status != 0){
            std::cout <<"Error setting detached"<<std::endl; exit(-1);
        }
    }

// à partir d'ici : réglage des règles de priorités.
// pour les "policy" SCHED_FIFO et SCHED_RR, le priorité par défaut est la priorité moyenne
// des threads déjà existants, sinon, celle qui est spécifiée.
// pas de priorité pour une "policy" SCHED_OTHER.
    if(policy_== FIFO){
        status = pthread_attr_setinheritsched(&threadAttribute,PTHREAD_EXPLICIT_SCHED);
        status = pthread_attr_setschedpolicy(&threadAttribute, SCHED_FIFO);
        std::cout <<"fifo"<<std::endl;
        if(status != 0){
            std::cout <<"Error setting policy"<<std::endl; exit(-1);
        }

        if(priority_!=0){
        priority.sched_priority = priority_;
        }else{
            int priority_max;
            int priority_min;
            priority_max= sched_get_priority_max(SCHED_FIFO);
            priority_min= sched_get_priority_min(SCHED_FIFO);
            priority.sched_priority=(priority_max+priority_min)/2;

        }
        pthread_attr_setschedparam(&threadAttribute, &priority);
    }
    else if (policy_== RR){
        status = pthread_attr_setinheritsched(&threadAttribute,PTHREAD_EXPLICIT_SCHED);
        status = pthread_attr_setschedpolicy(&threadAttribute, SCHED_RR);
            if(status != 0){
                std::cout <<"Error setting policy"<<std::endl; exit(-1);
            }
            if(priority_!=0){
        priority.sched_priority = priority_;
        }else{
            int priority_max;
            int priority_min;
            priority_max= sched_get_priority_max(SCHED_RR);
            priority_min= sched_get_priority_min(SCHED_RR);
            priority.sched_priority=(priority_max+priority_min)/2;

        }
        pthread_attr_setschedparam(&threadAttribute, &priority);

    }else{
        status = pthread_attr_setschedpolicy(&threadAttribute, SCHED_OTHER);
            if(status != 0){
                std::cout <<"Error setting policy"<<std::endl; exit(-1);
            }
    }




}

void* Thread::startThread(void* pVoid){
    Thread* runnableThread = static_cast<Thread*>(pVoid);
    assert(runnableThread);
    runnableThread->result = runnableThread->runnable->run();
    return runnableThread->result;
}

 Thread::~Thread(){}

void* Thread::join(){

    pthread_join(PthreadThreadID, NULL);
    return 0;
}

void* Thread::start(){
    int status;
    status = pthread_create(&PthreadThreadID, &threadAttribute, Thread::startThread, (void*)this);
    if(status != 0){
        std::cout <<"Error when creating Pthread"<<std::endl; exit(-1);
    }

    status=pthread_attr_destroy(&threadAttribute);
    if(status != 0){
        std::cout <<"Error when destroying thread attribute"<<std::endl; exit(-1);
    }
    return 0;

}
