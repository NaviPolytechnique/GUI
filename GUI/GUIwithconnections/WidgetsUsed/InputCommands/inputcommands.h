#ifndef INPUTCOMMANDS_H
#define INPUTCOMMANDS_H

#include <QWidget>
#include <QKeyEvent>
#include <QMessageBox>
#include <QTextEdit>


namespace Ui {
class InputCommands;
}

class InputCommands : public QWidget
{
    Q_OBJECT

public:
    explicit InputCommands(QWidget *parent = 0);
    ~InputCommands();


signals:
    void SendCommand(QString);

private slots:




    void on_pushButton_clicked();

private:
    Ui::InputCommands *ui;

};

#endif // INPUTCOMMANDS_H
