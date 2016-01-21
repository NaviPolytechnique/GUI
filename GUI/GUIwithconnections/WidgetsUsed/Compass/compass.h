#ifndef COMPASS_H
#define COMPASS_H

#include <QDialog>
#include "../../Source/qcgaugewidget.h"
#include <QFileDialog>
#include <QStringList>
#include <QTimer>


namespace Ui {
class Compass;
}

class Compass : public QDialog
{
    Q_OBJECT

public:
    explicit Compass(QWidget *parent = 0);
    ~Compass();

private slots:
    void MAJCompass(QString DroneStatusMAJ);

private:
    Ui::Compass *ui;


    QcGaugeWidget * mCompassGauge;
    QcNeedleItem *mCompassNeedle;
};

#endif // COMPASS_H
