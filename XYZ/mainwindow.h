#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QMessageBox>
#include "readinput.h"
#include "qcustomplot.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setupRealtimeData1(QCustomPlot *customPlot);
    void setupRealtimeData2(QCustomPlot *customPlot);
    void setupRealtimeData3(QCustomPlot *customPlot);
    void setupRealtimeData4(QCustomPlot *customPlot);

private slots:
    void realtimeDataSlot1();
    void realtimeDataSlot2();
    void realtimeDataSlot3();
    void realtimeDataSlot4(double R, double P, double Y);
    void readResponse4();

private:
    Ui::MainWindow *ui;
    QStringList recuperationRPY(QString s);
    QTimer datatimer;
    qint64 pos;
    readInput r;
};

#endif // MAINWINDOW_H
