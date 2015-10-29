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
    void realtimeDataSlot4(double R, double P, double Y); //replot the graph updated
    void readResponse4(); //read the text file

private:
    Ui::MainWindow *ui;
    QTimer datatimer;
    readInput r; //reader of the text file;
};

#endif // MAINWINDOW_H
