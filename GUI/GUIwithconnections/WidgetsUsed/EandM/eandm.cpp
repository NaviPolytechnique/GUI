#include "eandm.h"
#include "ui_eandm.h"

EandM::EandM(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EandM)
{
    ui->setupUi(this);
}

EandM::~EandM()
{
    delete ui;
}

void EandM::NewException(QString exception){
    ui->exceptions->append(exception);
}

void EandM::NewSystemMsg(QString SystemMsg){
    ui->system->append(SystemMsg);
}
