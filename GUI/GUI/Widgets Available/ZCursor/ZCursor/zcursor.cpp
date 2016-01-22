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
    ui->zslider->setRange(0,10);
    ui->zslider->setSliderPosition(0);
    rmin=0;
    rmax=10;

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
    zcurrent = list.at(5).toDouble();
    ui->lcdzcurrent->display(zcurrent);
}

void ZCursor::setNewZTarget(int i)
{
    ztarget=i;
    if(ztarget<0){
        ztarget=0;
    }
    ui->lcdztarget->display(ztarget);

    if (ztarget==rmin && rmin!=0){
        rmin-=10;
        rmax-=10;

        ui->zslider->setRange(rmin,rmax);
        ui->zslider->setSliderPosition(rmax-1);
    }
    if (ztarget==rmax){
        rmin+=10;
        rmax+=10;

        ui->zslider->setRange(rmin,rmax);
        ui->zslider->setSliderPosition(rmin+1);
    }

}

