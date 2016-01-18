#include "attitudemeter.h"
#include "ui_attitudemeter.h"

AttitudeMeter::AttitudeMeter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AttitudeMeter)
{
    ui->setupUi(this);



    //init horizon artificiel
    mAttitudeGauge = new QcGaugeWidget;
    mAttitudeGauge->addBackground(99);
    QcBackgroundItem *bkg = mAttitudeGauge->addBackground(92);
    bkg->clearrColors();
    bkg->addColor(0.1,Qt::black);
    bkg->addColor(1.0,Qt::white);
    mAttMeter = mAttitudeGauge->addAttitudeMeter(88);

    mAttitudeNeedle = mAttitudeGauge->addNeedle(70);
    mAttitudeNeedle->setMinDegree(0);
    mAttitudeNeedle->setMaxDegree(180);
    mAttitudeNeedle->setValueRange(0,180);
    mAttitudeNeedle->setCurrentValue(90);
    mAttitudeNeedle->setColor(Qt::white);
    mAttitudeNeedle->setNeedle(QcNeedleItem::AttitudeMeterNeedle);
    mAttitudeGauge->addGlass(80);
    ui->attitudemeter->addWidget(mAttitudeGauge);
}

AttitudeMeter::~AttitudeMeter()
{
    delete ui;
}

void AttitudeMeter::MAJAttitudeMeter(QString DroneStatusMAJ){

    //roll
    QStringList LED=DroneStatusMAJ.split(",");
    QString s1roll=LED[0];
    QStringList s2roll=s1roll.split( ".");
    QString s3roll=s2roll.at(0);
    int roll=s3roll.toInt();
    while (roll<(-180)|| roll > 180 ){
        if (roll<(180)){
            roll+=360;
        }
        else{
            roll-=360;
        }
    }
    mAttitudeNeedle->setCurrentValue(90-roll);
    mAttMeter->setCurrentRoll(roll);

    //pitch
    QString s1pitch=LED[1];
    QStringList s2pitch=s1pitch.split( ".");
    QString s3pitch=s2pitch.at(0);
    int pitch=s3pitch.toInt();
    while (pitch<(-180)|| pitch > 180 ){
        if (pitch<(180)){
            pitch+=360;
        }
        else{
            pitch-=360;
        }
    }
    mAttMeter->setCurrentPitch(pitch);

}


