#ifndef INPUTCOMMANDS_H
#define INPUTCOMMANDS_H

#include <QDialog>

namespace Ui {
class InputCommands;
}

class InputCommands : public QDialog
{
    Q_OBJECT

public:
    explicit InputCommands(QWidget *parent = 0);
    ~InputCommands();

private:
    Ui::InputCommands *ui;
};

#endif // INPUTCOMMANDS_H
