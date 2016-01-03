#ifndef ETATDRONE_H
#define ETATDRONE_H

#include <QObject>
#include <QString>
#include <QStringList>
#include <QMetaType>

class EtatDrone : public QObject
{
    Q_OBJECT

Q_PROPERTY(QString VecteurEtatDrone READ getVecteurEtatDrone WRITE setvaleurED NOTIFY EtatDroneMAJ)
Q_PROPERTY(QString ParametresDrone READ getParametresDrone WRITE setvaleurPD NOTIFY ParametresDroneMAJ)

public:
    explicit EtatDrone(QObject *parent = 0);
    void setvaleurED(const QString NewEtat);
    void setvaleurPD(const QString NewParam);
    QString getVecteurEtatDrone();
    QString getParametresDrone();


signals:
    void EtatDroneMAJ(QString VecteurEtatDrone);
    void ParametresDroneMAJ(QString ParametresDrone);

public slots:
    void ModifierEtatDrone(QString NewEtat);
    void ModifierParametresDrone(QString NewParam);

private:
    QString VecteurEtatDrone;
    QString ParametresDrone;

};

#endif // ETATDRONE_H
