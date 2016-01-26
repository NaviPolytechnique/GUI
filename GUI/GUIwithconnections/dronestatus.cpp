#include "dronestatus.h"

DroneStatus::DroneStatus(QObject *parent) : QObject(parent)
{
    VecteurDroneStatus= QString();
    ParametresDrone= QString();

}

void DroneStatus::setvaleurED(const QString NewEtat){
     VecteurDroneStatus=NewEtat;
}

void DroneStatus::setvaleurPD(const QString NewParam){
    ParametresDrone=NewParam;
}

void DroneStatus::ModifierDroneStatus(QString NewEtat){
    setvaleurED(NewEtat);
    emit DroneStatusMAJ(VecteurDroneStatus);
}

void DroneStatus::ModifierParametresDrone(QString NewParam){
    setvaleurPD(NewParam);
    emit ParametresDroneMAJ(ParametresDrone);
}
QString DroneStatus::getVecteurDroneStatus(){
    return VecteurDroneStatus;
}
QString DroneStatus::getParametresDrone(){
    return ParametresDrone;
}



