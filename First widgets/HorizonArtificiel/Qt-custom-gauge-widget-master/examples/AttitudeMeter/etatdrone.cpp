#include "etatdrone.h"

EtatDrone::EtatDrone(QObject *parent) : QObject(parent)
{
    VecteurEtatDrone=new QVector(10,"0");
    ParametresDrone=new QVector(4,"0");
}

void EtatDrone::setvaleurED(QVector<QString> NewEtat){
    for (int i=0;i<10;i++){
        this->VecteurEtatDrone.at(i)=NewEtat.at(i);
    }
}

void EtatDrone::setvaleurPD(QVector<QString> NewParam){
    for (int i=0;i<10;i++){
        this->ParametresDrone.at(i)=NewParam.at(i);
    }
}


signals:
    void EtatDroneMAJ(void);
    void ParametreDroneMAJ(void);
    void EtatConnection(void);

public slots:
    void ModifierEtatDrone(void);
    void ModifierParametresDrone(void);



};
