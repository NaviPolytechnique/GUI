#ifndef BUTTONS_H
#define BUTTONS_H

#include <QDialog>

namespace Ui {
class Buttons;
}

class Buttons : public QDialog
{
    Q_OBJECT

public:
    explicit Buttons(QWidget *parent = 0);
    ~Buttons();
signals:
    void TakeOff();
    void Land();
    void EmergencyStop();
    void CalibrateIMU();
    void IMU();
    void Pilot();
    void Kill();

private slots:
    void on_Takeoff_clicked();

    void on_Land_clicked();

    void on_EmStp_clicked();

    void on_CbIMU_clicked();

    void on_IMU_clicked();

    void on_Pilot_clicked();

    void on_StartAll_clicked();

    void on_Kill_clicked();

private:
    Ui::Buttons *ui;
};

#endif // BUTTONS_H
