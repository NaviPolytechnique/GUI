#ifndef RPYCONTROL_H
#define RPYCONTROL_H

#include <QDialog>

namespace Ui {
class RPYControl;
}

class RPYControl : public QDialog
{
    Q_OBJECT

public:
    explicit RPYControl(QWidget *parent = 0);
    ~RPYControl();

signals:
    void sendRPYT(QString);

private slots:
    void on_pushButton_clicked();

    void on_R_valueChanged(double arg1);

    void on_P_valueChanged(double arg1);

    void on_Y_valueChanged(double arg1);

    void on_T_valueChanged(double arg1);

private:
    Ui::RPYControl *ui;
    double r;
    double p;
    double y;
    double t;
};

#endif // RPYCONTROL_H
