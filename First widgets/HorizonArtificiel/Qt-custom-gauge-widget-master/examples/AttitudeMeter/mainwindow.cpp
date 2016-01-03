/***************************************************************************
**                                                                        **
**  QcGauge, for instrumentation, and real time data measurement          **
**  visualization widget for Qt.                                          **
**  Copyright (C) 2015 Hadj Tahar Berrima                                 **
**                                                                        **
**  This program is free software: you can redistribute it and/or modify  **
**  it under the terms of the GNU Lesser General Public License as        **
**  published by the Free Software Foundation, either version 3 of the    **
**  License, or (at your option) any later version.                       **
**                                                                        **
**  This program is distributed in the hope that it will be useful,       **
**  but WITHOUT ANY WARRANTY; without even the implied warranty of        **
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         **
**  GNU Lesser General Public License for more details.                   **
**                                                                        **
**  You should have received a copy of the GNU Lesser General Public      **
**  License along with this program.                                      **
**  If not, see http://www.gnu.org/licenses/.                             **
**                                                                        **
****************************************************************************
**           Author:  Hadj Tahar Berrima                                  **
**           Website: http://pytricity.com/                               **
**           Contact: berrima_tahar@yahoo.com                             **
**           Date:    1 dec 2014                                          **
**           Version:  1.0                                                **
****************************************************************************/

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //init etat drone

    etatdrone=new EtatDrone(this);
    connect(etatdrone, SIGNAL(EtatDroneMAJ(QString)), this, SLOT(MAJIHM(QString)));


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

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    QString namerpy = QFileDialog::getOpenFileName(this, tr("Open RPY"),"",tr("Text files (*.txt)"));
    readInput rpy=readInput(namerpy);
    int i=0;
    QStringList lignelu=QStringList();
    QString Str;
    while(i<10000){
        QStringList list=rpy.readRPY();
        lignelu+=list.at(0);
        lignelu+=list.at(1);
        Str=lignelu.join(",");
        emit LigneLu(Str);
        lignelu.removeAt(1);
        lignelu.removeAt(0);

        QCoreApplication::processEvents();
        i++;
    }
}

void MainWindow::MAJIHM(QString EtatDroneMAJ){

    //roll
    QStringList LED=EtatDroneMAJ.split(",");
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
