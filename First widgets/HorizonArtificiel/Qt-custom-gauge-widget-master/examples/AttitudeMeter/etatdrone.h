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
    void setvaleurED(QVector<QString> NewEtat);
    void setvaleurPD(QVector<QString> NewParam);

signals:
    void EtatDroneMAJ(void);
    void ParametreDroneMAJ(void);
    void EtatConnection(void);

public slots:
    void ModifierEtatDrone(void);
    void ModifierParametresDrone(void);

private:
    QVector<QString> VecteurEtatDrone;
    QVector<QString> ParametresDrone;

};

#endif // ETATDRONE_H
