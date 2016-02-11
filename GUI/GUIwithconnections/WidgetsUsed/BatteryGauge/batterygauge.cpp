#include "batterygauge.h"
#include "ui_batterygauge.h"

BatteryGauge::BatteryGauge(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BatteryGauge)
{
    ui->setupUi(this);



}

BatteryGauge::~BatteryGauge()
{
    delete ui;
}

void BatteryGauge::on_batterygauge_valueChanged(int nValue)
{
    ui->batterygauge->setValue(nValue);

    QString myStyleSheet = " QProgressBar::chunk {"
    " background-color: ";
    if(25 >= nValue)
    {
        myStyleSheet.append("red;");
    }
    else if(75 >= nValue)
    {
        myStyleSheet.append("yellow;");
    }
    else
    {
        myStyleSheet.append("green;");
    }
    myStyleSheet.append("     width: 10px;"\
                        "     margin: 0.5px;"\
                        " }");
    ui->batterygauge->setStyleSheet(myStyleSheet);
}

void BatteryGauge::MAJBattery(QString DroneStatusMAJ)
{
    QStringList list=DroneStatusMAJ.split(",");
    on_batterygauge_valueChanged(list.at(10).toInt());

}
