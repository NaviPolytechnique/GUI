#ifndef ZCURSOR_H
#define ZCURSOR_H

#include <QWidget>
#include <QSlider>
#include <QLCDNumber>
#include <QLabel>

namespace Ui {
class ZCursor;
}

class ZCursor : public QWidget
{
    Q_OBJECT

public:
    explicit ZCursor(QWidget *parent = 0);
    ~ZCursor();

signals:
    void SendZTarget(double);

private slots:
    void MAJZCursor(QString DroneStatusMAJ);
    void setNewZTarget(int);


    void on_pushButton_clicked();
    
private:
    Ui::ZCursor *ui;

    double ztarget;
    double ztargetok;
    double zcurrent;
    int zcursor;
    int rmin;
    int rmax;


};

#endif // ZCURSOR_H
