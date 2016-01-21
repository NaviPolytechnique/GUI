//Thread.h
//
//
//Created by GG la fripouille on 12/07/2015
//Copyright (c) 2015 GG la fripouille. All rights reserved.

#ifndef THREAD_H_INCLUDED
#define THREAD_H_INCLUDED


#include<memory>
#include <iostream>
#include "cstdlib"
#include "assert.h"
#include"Runnable.h"
#include "pthread.h"



//Classe similaire à la classe Thread de JAVA. Permet de lancer des threads en prenant des objets
//pour argument

class Thread{



private :


    pthread_t PthreadThreadID;

    //auto_ptr sert à faire en sorte que l'objet runnable vers lequel pointe runnable soit détruit lors de la destruction de l'objet thread donc du pointeur runnable
    std::auto_ptr<Runnable> runnable;

    //IMPORTANT permet de dire si le thread est joinable ou pas (ie spécifier s'il est indépendant de tous les autres threads)
    //Il est efficace de déclarer un thread detached pour des raisons de mémoires.
    bool detached;

    //Variable contenant les attributs du pthread que l'on va lancer (detached/joinable, règles priorité...)
    pthread_attr_t threadAttribute;

    //Retranscrit la politique de priorité choisie (policy)
    struct sched_param priority;


    const Thread& operator = (const Thread&);

    //pointeur vers ce que retourne la méthode run() de l'objet runnable
    void* result;


    //Cette fonction est un intermédiaire au lancement du pthread
    //fonction static pour répondre aux exigences de la construction d'un pthread
    static void* startThread(void* pVoid);


    public :


    enum sched_policy {FIFO, RR, OTHER};

    //Constructeur
    Thread(std::auto_ptr<Runnable> runnable_, bool isDetached = false, sched_policy policy=OTHER, int priority=0);

    //Destructeur
    virtual ~Thread();

    //Lancement du thread (le thread execute la méthode run() de l'objet runnable)
    void* start();

    //Fonction join(). Le thread appelant attend la terminaison de ce thread.
    void* join();
};


#endif // THREAD_H_INCLUDED
