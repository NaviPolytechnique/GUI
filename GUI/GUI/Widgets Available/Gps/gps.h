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
#include <QScrollArea>
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
    void homePointSlot(QString s);



private:
    Ui::Gps *ui;

    QPixmap mapImg;
    QPainter painter;
    QPointF currentPos; //current postion
    QPointF homePoint ; //home Point

    float agpstox;
    float bgpstox;
    float agpstoy;
    float bgpstoy;

    float cmtopx;

    QLabel *lab;
    QScrollArea *scrollArea;


    readInput xyz; //reader of the texte file log_out.txt

    QTimer datatimer;

};

#endif // GPS_H
