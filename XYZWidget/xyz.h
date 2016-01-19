#ifndef XYZ_H
#define XYZ_H

#include <QMainWindow>
#include <QTimer>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QMessageBox>
#include "readinput.h"
#include "qcustomplot.h"

namespace Ui {
class XYZ;
}

class XYZ : public QWidget
{
    Q_OBJECT

public:
    explicit XYZ(QWidget *parent = 0);
    ~XYZ();
    void setupRealtimeData1(QCustomPlot *customPlot);
    void setupRealtimeData2(QCustomPlot *customPlot);
    void setupRealtimeData3(QCustomPlot *customPlot);
    void setupRealtimeData4(QCustomPlot *customPlot);

private slots:
    void realtimeDataSlot1(double X, double Y, double Z);
    void realtimeDataSlot2(double Vx, double Vy, double Vz);
    void realtimeDataSlot3(double ax, double ay, double az);
    void realtimeDataSlot4(double R, double P, double Y); //replot the graph updated
    void readResponse4(); //read the text file
    void readResponseXYZ();//read log_out.txt

private:
    Ui::XYZ *ui;
    QTimer datatimer;
    readInput rpy; //reader of the text file rpy.txt
    readInput xyz; //reader of the texte file log_out.txt
};


#endif // XYZ_H
