#ifndef ATTITUDEMETER_H
#define ATTITUDEMETER_H

#include <QWidget>

namespace Ui {
class AttitudeMeter;
}

class AttitudeMeter : public QWidget
{
    Q_OBJECT

public:
    explicit AttitudeMeter(QWidget *parent = 0);
    ~AttitudeMeter();

private:
    Ui::AttitudeMeter *ui;
};

#endif // ATTITUDEMETER_H
