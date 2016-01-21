#ifndef GPS_H
#define GPS_H

#include <QWidget>
#include <QLabel>
#include <QFileDialog>
#include <QLayout>
#include <QPainter>
#include <QDateTime>
#include <QTimer>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QMessageBox>
#include "readinput.h"


namespace Ui {
class Gps;
}

class Gps : public QWidget
{
    Q_OBJECT

public:
    explicit Gps(QWidget *parent = 0);
    ~Gps();


private slots:
    void realtimeDataSlot();


private:
    Ui::Gps *ui;

    QPixmap mapImg;
    QPainter painter;
    QPoint currentPos; //current postion

    float agpstox;
    float bgpstox;
    float agpstoy;
    float bgpstoy;

    float cmtopx;

    QLabel *lab;

    readInput xyz; //reader of the texte file log_out.txt

    QTimer datatimer;

};

#endif // GPS_H
