#ifndef DRONESTATUS_H
#define DRONESTATUS_H

#include <QObject>
#include <QString>
#include <QStringList>
#include <QMetaType>

class DroneStatus : public QObject
{
    Q_OBJECT

Q_PROPERTY(QString VecteurDroneStatus READ getVecteurDroneStatus WRITE setvaleurED NOTIFY DroneStatusMAJ)
Q_PROPERTY(QString ParametresDrone READ getParametresDrone WRITE setvaleurPD NOTIFY ParametresDroneMAJ)

public:
    explicit DroneStatus(QObject *parent = 0);
    void setvaleurED(const QString NewEtat);
    void setvaleurPD(const QString NewParam);
    QString getVecteurDroneStatus();
    QString getParametresDrone();


signals:
    void DroneStatusMAJ(QString VecteurDroneStatus);
    void ParametresDroneMAJ(QString ParametresDrone);

public slots:
    void ModifierDroneStatus(QString NewEtat);
    void ModifierParametresDrone(QString NewParam);

private:
    QString VecteurDroneStatus;
    QString ParametresDrone;

};

#endif // DRONESTATUS_H
