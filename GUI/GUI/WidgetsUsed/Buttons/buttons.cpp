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
