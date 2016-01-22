#include "inputcommands.h"
#include "ui_inputcommands.h"

InputCommands::InputCommands(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InputCommands)
{
    ui->setupUi(this);

}

InputCommands::~InputCommands()
{
    delete ui;
}

void InputCommands::on_pushButton_clicked()
{
    emit SendCommand(ui->inputcommands->toPlainText());
    ui->inputcommands->clear();
}
