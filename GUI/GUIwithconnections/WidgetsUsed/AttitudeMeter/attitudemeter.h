#ifndef ATTITUDEMETER_H
#define ATTITUDEMETER_H

#include <QWidget>
#include "../../Source/qcgaugewidget.h"
#include <QFileDialog>
#include <QStringList>
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

private slots:
    void MAJAttitudeMeter(QString DroneStatusMAJ);

private:
    Ui::AttitudeMeter *ui;

    QcGaugeWidget *mAttitudeGauge;
    QcNeedleItem *mAttitudeNeedle;
    QcAttitudeMeter *mAttMeter;
};

#endif // ATTITUDEMETER_H
