#include "inputcommands.h"
#include "ui_inputcommands.h"

InputCommands::InputCommands(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputCommands)
{
    ui->setupUi(this);
}

InputCommands::~InputCommands()
{
    delete ui;
}
