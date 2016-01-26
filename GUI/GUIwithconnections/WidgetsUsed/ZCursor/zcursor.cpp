#include "zcursor.h"
#include "ui_zcursor.h"

ZCursor::ZCursor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZCursor)
{
    ui->setupUi(this);


    //set slider
    ui->zslider->setTickPosition(QSlider::TicksBothSides);


    ui->zslider->setTracking(true);
    ui->zslider->setRange(0,100);
    ui->zslider->setSliderPosition(0);
    rmin=0;
    rmax=100;
    ztarget=0;

    //set lcd



    connect(ui->zslider,SIGNAL(valueChanged(int)),this,SLOT(setNewZTarget(int)));


}

ZCursor::~ZCursor()
{
    delete ui;
}


void ZCursor::MAJZCursor(QString DroneStatusMAJ)
{
    QStringList list=DroneStatusMAJ.split(",");
    zcurrent = list.at(9).toDouble();
    ui->lcdzcurrent->display(zcurrent);
}

void ZCursor::setNewZTarget(int i)
{
    zcursor=i;
    if(zcursor<0){
        zcursor=0;
    }
    ztarget=(double)zcursor/100;
    ui->lcdztarget->display(ztarget);

    if (zcursor==rmin && rmin!=0){
        rmin-=100;
        rmax-=100;
        ui->zslider->setRange(rmin,rmax);
        ui->zslider->setSliderPosition(rmax-1);
    }
    if (zcursor==rmax){
        rmin+=100;
        rmax+=100;
        ui->zslider->setRange(rmin,rmax);
        ui->zslider->setSliderPosition(rmin+1);
    }

}

