//
//  Point3D.hpp
//  Drone(Xcode)
//
//  Created by Gallois-Montbrun Grégoire on 25/12/2015.
//  Copyright © 2015 Gallois-Montbrun Grégoire. All rights reserved.
//

// Point de R3 protégé par verrou (threadsafe)

#ifndef Point3D_hpp
#define Point3D_hpp

#include <stdio.h>
#include <pthread.h>


template <typename T> class Point3D{

public:
    
    Point3D<T>(T X_, T Y_, T Z_):X(X_), Y(Y_), Z(Z_){};
    
    
    Point3D<T>(Point3D<T>* p){
        X = p->getX();
        Y = p->getY();
        Z = p->getZ();
    };
    
    
    ~Point3D<T>(){};
    
    
    
    T getX(){
        pthread_mutex_lock(&m_mutex);
        T r = X;
        pthread_mutex_unlock(&m_mutex);
        return r;
    };

    
    T getY(){
        pthread_mutex_lock(&m_mutex);
        T r = Y;
        pthread_mutex_unlock(&m_mutex);
        return r;
    };
    

    T getZ(){
        pthread_mutex_lock(&m_mutex);
        T r = Z;
        pthread_mutex_unlock(&m_mutex);
        return r;
    };

    
    void setX(T X_){
        pthread_mutex_lock(&m_mutex);
        X = X_;
        pthread_mutex_unlock(&m_mutex);
        
    };

    void setY(T Y_){
        pthread_mutex_lock(&m_mutex);
        Y = Y_;
        pthread_mutex_unlock(&m_mutex);
        
    };

    void setZ(T Z_){
        pthread_mutex_lock(&m_mutex);
        Z = Z_;
        pthread_mutex_unlock(&m_mutex);
        
    };
    
    void print(){
        std::cout<<"X= " << getX() <<std::endl;
        std::cout<<"Y= " << getY() <<std::endl;
        std::cout<<"Z= " << getZ() <<std::endl;
    };

    
    //void set(Point3D<T> p);
    
    

private:
    
    pthread_mutex_t m_mutex;
    //pthread_cond_t  m_condv; pourra être utile
    
    T X;
    T Y;
    T Z;
    
    
    
};

#endif /* Point3D_hpp */
