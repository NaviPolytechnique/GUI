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

private slots:
    void MAJZCursor(QString DroneStatusMAJ);
    void setNewZTarget(int);


private:
    Ui::ZCursor *ui;

    double ztarget;
    double zcurrent;
    int rmin;
    int rmax;


};

#endif // ZCURSOR_H
