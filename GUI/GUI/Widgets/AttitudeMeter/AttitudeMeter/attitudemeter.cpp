#include "attitudemeter.h"
#include "ui_attitudemeter.h"

AttitudeMeter::AttitudeMeter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AttitudeMeter)
{
    ui->setupUi(this);

    //init etat drone
    dronestatus=new DroneStatus(this);
    connect(dronestatus, SIGNAL(DroneStatusMAJ(QString)), this, SLOT(MAJIHM(QString)));

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
    ui->verticalLayout->addWidget(mAttitudeGauge);
}

AttitudeMeter::~AttitudeMeter()
{
    delete ui;
}

