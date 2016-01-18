#include "eandm.h"
#include "ui_eandm.h"

EandM::EandM(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EandM)
{
    ui->setupUi(this);
    connect(parent, SIGNAL(MessageSystem(QString)), this, SLOT(printMessageSystem(QString));)
}

EandM::~EandM()
{
    delete ui;
}
/*
void EandM::write(){
    std::cin>>

}

void EandM::on_textBrowser_2_textChanged()
{
    std::cin>>
}
*/
