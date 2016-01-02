#ifndef ETATDRONE_H
#define ETATDRONE_H

#include <QObject>
#include <QVector>
#include <QString>

class EtatDrone : public QObject
{
    Q_OBJECT

Q_PROPERTY(QVector<QString> VecteurEtatDrone READ VecteurEtatDrone WRITE setvaleurED NOTIFY EtatDroneMAJ)
Q_PROPERTY(QVector<QString> ParametresDrone READ ParametresDrone WRITE setvaleurPD NOTIFY ParametresDroneMAJ)

public:
    explicit EtatDrone(QObject *parent = 0);
    void setvaleurED(const QVector<QString> NewEtat);
    void setvaleurPD(const QVector<QString> NewParam);

signals:
    void EtatDroneMAJ(QVector<QString> *VecteurEtatDrone);
    void ParametresDroneMAJ(QVector<QString> *ParametresDrone);

public slots:
    void ModifierEtatDrone(QVector<QString> NewEtat);
    void ModifierParametresDrone(QVector<QString> NewParam);

private:
    QVector<QString> *VecteurEtatDrone;
    QVector<QString> *ParametresDrone;

};

#endif // ETATDRONE_H
