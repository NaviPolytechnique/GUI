#include "rpycontrol.h"
#include "ui_rpycontrol.h"

RPYControl::RPYControl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RPYControl)
{
    ui->setupUi(this);
}

RPYControl::~RPYControl()
{
    delete ui;
}

void RPYControl::on_pushButton_clicked()
{
    QStringList RPYTlist=QStringList();
    RPYTlist.append(QString::number(r));
    RPYTlist.append(QString::number(p));
    RPYTlist.append(QString::number(y));
    RPYTlist.append(QString::number(t));
    QString RPYT=RPYTlist.join(",");
    emit sendRPYT(RPYT);
    ui->R->setValue(0);
    ui->P->setValue(0);
    ui->Y->setValue(0);
    ui->T->setValue(0);
}

void RPYControl::on_R_valueChanged(double arg1)
{
    r=arg1;
}

void RPYControl::on_P_valueChanged(double arg1)
{
    p=arg1;
}

void RPYControl::on_Y_valueChanged(double arg1)
{
    y=arg1;
}

void RPYControl::on_T_valueChanged(double arg1)
{
    y=arg1;
}
