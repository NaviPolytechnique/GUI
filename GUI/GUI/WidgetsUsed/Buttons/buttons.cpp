#include "buttons.h"
#include "ui_buttons.h"

Buttons::Buttons(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Buttons)
{
    ui->setupUi(this);
}

Buttons::~Buttons()
{
    delete ui;
}

void Buttons::on_Takeoff_clicked()
{
    emit TakeOff();
}

void Buttons::on_Land_clicked()
{
    emit Land();
}

void Buttons::on_EmStp_clicked()
{
    emit EmergencyStop();
}

void Buttons::on_CbIMU_clicked()
{
    emit CalibrateIMU();
}

void Buttons::on_IMU_clicked()
{
    emit IMU();
}

void Buttons::on_Pilot_clicked()
{
    emit Pilot();
}

void Buttons::on_StartAll_clicked()
{
    emit IMU();
    emit Pilot();
}


void Buttons::on_Kill_clicked()
{
    emit Kill();
}
