#ifndef ATTITUDEMETER_H
#define ATTITUDEMETER_H

#include <QWidget>
#include "../../Source/qcgaugewidget.h"
#include <QFileDialog>
#include <QStringList>
#include "readinput.h"
#include "dronestatus.h"
#include "threadreadinput.h"
#include <QTimer>
#include <QVector>
#include <QMetaType>

namespace Ui {
class AttitudeMeter;
}

class AttitudeMeter : public QWidget
{
    Q_OBJECT

public:
    explicit AttitudeMeter(QWidget *parent = 0);
    ~AttitudeMeter();

signals:
    void LigneLu(QString Str );

private slots:
    void MAJIHM(QString DroneStatusMAJ);

private:
    Ui::AttitudeMeter *ui;

    DroneStatus *dronestatus;
    QcGaugeWidget *mAttitudeGauge;
    QcNeedleItem *mAttitudeNeedle;
    QcAttitudeMeter *mAttMeter;
};

#endif // ATTITUDEMETER_H
