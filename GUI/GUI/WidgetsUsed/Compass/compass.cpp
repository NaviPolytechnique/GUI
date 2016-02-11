#include "compass.h"
#include "ui_compass.h"

Compass::Compass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Compass)
{
    ui->setupUi(this);
    mCompassGauge = new QcGaugeWidget;

    mCompassGauge->addBackground(79);
    QcBackgroundItem *bkg1 = mCompassGauge->addBackground(72);
    bkg1->clearrColors();
    bkg1->addColor(0.1,Qt::black);
    bkg1->addColor(1.0,Qt::white);

    QcBackgroundItem *bkg2 = mCompassGauge->addBackground(68);
    bkg2->clearrColors();
    bkg2->addColor(0.1,Qt::white);
    bkg2->addColor(1.0,Qt::black);

    QcLabelItem *w = mCompassGauge->addLabel(60);
    w->setText("W");
    w->setAngle(0);
    w->setColor(Qt::white);

    QcLabelItem *n = mCompassGauge->addLabel(60);
    n->setText("N");
    n->setAngle(90);
    n->setColor(Qt::white);

    QcLabelItem *e = mCompassGauge->addLabel(60);
    e->setText("E");
    e->setAngle(180);
    e->setColor(Qt::white);

    QcLabelItem *s = mCompassGauge->addLabel(60);
    s->setText("S");
    s->setAngle(270);
    s->setColor(Qt::white);

    QcDegreesItem *deg = mCompassGauge->addDegrees(50);
    deg->setStep(5);
    deg->setMaxDegree(270);
    deg->setMinDegree(-75);
    deg->setColor(Qt::white);
    mCompassNeedle = mCompassGauge->addNeedle(60);
    mCompassNeedle->setNeedle(QcNeedleItem::CompassNeedle);
    mCompassNeedle->setValueRange(0,360);
    mCompassNeedle->setMaxDegree(360);
    mCompassNeedle->setMinDegree(0);
    mCompassGauge->addBackground(6);
    mCompassGauge->addGlass(68);
    ui->compass->addWidget(mCompassGauge);

}

void Compass::MAJCompass(QString DroneStatusMAJ){

    //roll
    QStringList LED=DroneStatusMAJ.split(",");
    QString s1yaw=LED[2];
    QStringList s2yaw=s1yaw.split( ".");
    QString s3yaw=s2yaw.at(0);
    int yaw=s3yaw.toInt();
    while (yaw<(-90)|| yaw > 270 ){
        if (yaw<(-90)){
            yaw+=360;
        }
        else{
            yaw-=360;
        }
    }
    mCompassNeedle->setCurrentValue(yaw+90);
}
Compass::~Compass()
{
    delete ui;
}
