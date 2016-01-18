//
//Runnable.h
//
//
//Created by GG la fripouille on 12/07/2015
//Copyright (c) 2015 GG la fripouille. All rights reserved.

#ifndef RUNNABLE_H_INCLUDED
#define RUNNABLE_H_INCLUDED


//Abstract class, quite similar to the Runnable interface in JAVA.

class Runnable{
public:
    virtual void* run(){ return 0;};
    virtual ~Runnable(){} ;
};


#endif // RUNNABLE_H_INCLUDED
