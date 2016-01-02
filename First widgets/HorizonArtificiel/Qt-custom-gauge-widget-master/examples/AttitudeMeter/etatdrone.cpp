#include "etatdrone.h"

EtatDrone::EtatDrone(QObject *parent) : QObject(parent)
{
    VecteurEtatDrone=new QVector<QString>(10,"0");
    ParametresDrone=new QVector<QString>(4,"0");
    connect(parent, SIGNAL(LigneLu(QVector<QString>)), this, SLOT(ModifierEtatDrone(QVector<String>)));
}

void EtatDrone::setvaleurED(const QVector<QString> NewEtat){
    for (int i=0;i<10;i++){
        VecteurEtatDrone->replace(i,NewEtat.at(i));
    }
}

void EtatDrone::setvaleurPD(const QVector<QString> NewParam){
    for (int i=0;i<4;i++){
        ParametresDrone->replace(i,NewParam.at(i));
    }
}

void EtatDrone::ModifierEtatDrone(QVector<QString> NewEtat){
    setvaleurED(NewEtat);
    emit EtatDroneMAJ(VecteurEtatDrone);
}

void EtatDrone::ModifierParametresDrone(QVector<QString> NewParam){
    setvaleurPD(NewParam);
    emit ParametresDroneMAJ(ParametresDrone);
}
