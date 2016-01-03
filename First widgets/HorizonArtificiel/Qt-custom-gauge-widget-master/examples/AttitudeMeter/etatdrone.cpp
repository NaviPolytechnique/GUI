#include "etatdrone.h"

EtatDrone::EtatDrone(QObject *parent) : QObject(parent)
{
    VecteurEtatDrone= QString();
    ParametresDrone= QString();
    connect(parent, SIGNAL(LigneLu(QString)), this, SLOT(ModifierEtatDrone(QString)));
}

void EtatDrone::setvaleurED(const QString NewEtat){
     VecteurEtatDrone=NewEtat;
}

void EtatDrone::setvaleurPD(const QString NewParam){
    ParametresDrone=NewParam;
}

void EtatDrone::ModifierEtatDrone(QString NewEtat){
    setvaleurED(NewEtat);
    emit EtatDroneMAJ(VecteurEtatDrone);
}

void EtatDrone::ModifierParametresDrone(QString NewParam){
    setvaleurPD(NewParam);
    emit ParametresDroneMAJ(ParametresDrone);
}
QString EtatDrone::getVecteurEtatDrone(){
    return VecteurEtatDrone;
}
QString EtatDrone::getParametresDrone(){
    return ParametresDrone;
}
