#include "dronesettings.h"
#include "ui_dronesettings.h"

DroneSettings::DroneSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DroneSettings)
{
    ui->setupUi(this);
}

DroneSettings::~DroneSettings()
{
    delete ui;
}

void DroneSettings::on_pushButton_clicked()
{
    close();
}
