#include "zcursor.h"
#include "ui_zcursor.h"

ZCursor::ZCursor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZCursor)
{
    ui->setupUi(this);


    //set slider
    zslider = new QSlider(Qt::Vertical,this);
    zslider->setTickPosition(QSlider::TicksBothSides);
    zslider->setMaximum(100);
    zslider->setSliderPosition(50);
    zslider->setTracking(true);

    //set lcd
    lcdztarget = new QLCDNumber(this);
    lcdzcurrent = new QLCDNumber(this);
    lcdzcurrent->display(0);
    lcdztarget->display(0);

    QLabel *currentlabel = new QLabel("Current z",this);
    QLabel *targetlabel = new QLabel("Targetted z",this);


    connect(zslider,SIGNAL(valueChanged(int)),this,SLOT(setNewZTarget(int)));
    connect(zslider,SIGNAL(sliderReleased()),this,SLOT(setValueslot()));

    ui->gridLayout->addWidget(lcdzcurrent,0,0);
    ui->gridLayout->addWidget(currentlabel,0,1);
    ui->gridLayout->addWidget(lcdztarget,1,0);
    ui->gridLayout->addWidget(targetlabel,1,1);
    ui->zcursor->addWidget(zslider,1,Qt::AlignCenter);


}

ZCursor::~ZCursor()
{
    delete ui;
}

void ZCursor::setValueslot()
{
    //zslider->setValue(zslider->sliderPosition());
    zslider->setSliderPosition(50);
    zslider->update();
}

void ZCursor::MAJZCursor(QString DroneStatusMAJ)
{
    QStringList list=DroneStatusMAJ.split(",");
    zcurrent = list.at(5).toDouble();
    lcdzcurrent->display(zcurrent);
}

void ZCursor::setNewZTarget(int i)
{
    ztarget+= i-50 ;
    lcdztarget->display(ztarget);
}
