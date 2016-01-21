//
//  Point3D.cpp
//  Drone(Xcode)
//
//  Created by Gallois-Montbrun Grégoire on 25/12/2015.
//  Copyright © 2015 Gallois-Montbrun Grégoire. All rights reserved.
//

/*
#include "Point3D.hpp"


Point3D::Point3D(float X_, float Y_, float Z_):X(X_), Y(Y_), Z(Z_){};

Point3D::Point3D(Point3D* p){
    X = p->getX();
    Y = p->getY();
    Z = p->getZ();
};

Point3D::Point3D(){
    X=0;
    Y=0;
    Z=0;
};


void Point3D::setX(float X_){
    pthread_mutex_lock(&m_mutex);
    X = X_;
    pthread_mutex_unlock(&m_mutex);
};

void Point3D::setY(float Y_){
    pthread_mutex_lock(&m_mutex);
    Y = Y_;
    pthread_mutex_unlock(&m_mutex);

};

void Point3D::setZ(float Z_){
    pthread_mutex_lock(&m_mutex);
    Z = Z_;
    pthread_mutex_unlock(&m_mutex);

};

float Point3D::getX(){
    pthread_mutex_lock(&m_mutex);
    float r = X;
    pthread_mutex_unlock(&m_mutex);
    return r;
};

float Point3D::getY(){
    pthread_mutex_lock(&m_mutex);
    float r = Y;
    pthread_mutex_unlock(&m_mutex);
    return r;
};

float Point3D::getZ(){
    pthread_mutex_lock(&m_mutex);
    float r = Z;
    pthread_mutex_unlock(&m_mutex);
    return r;
};*/