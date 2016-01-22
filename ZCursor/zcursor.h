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
    void setValueslot();
    void MAJZCursor(QString DroneStatusMAJ);
    void setNewZTarget(int i);

private:
    Ui::ZCursor *ui;

    QSlider *zslider;

    QLCDNumber *lcdztarget;
    QLCDNumber *lcdzcurrent;

    double ztarget;
    double zcurrent;


};

#endif // ZCURSOR_H
