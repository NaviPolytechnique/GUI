#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    r = readInput("/Users/utilisateur/Documents/Navia/QT/XYZ/build-XYZ-Desktop_Qt_5_5_0_clang_64bit-Debug/RPY.txt");

    //fenêtre XYZ
    setupRealtimeData1(ui->customPlot1);
    setupRealtimeData2(ui->customPlot2);
    setupRealtimeData3(ui->customPlot3);
    setupRealtimeData4(ui->customPlot4);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupRealtimeData1(QCustomPlot *customPlot)
{
#if QT_VERSION < QT_VERSION_CHECK(4, 7, 0)
  QMessageBox::critical(this, "", "You're using Qt < 4.7, the realtime data demo needs functions that are available with Qt 4.7 to work properly");
#endif

  // include this section to fully disable antialiasing for higher performance:
  /*
  customPlot->setNotAntialiasedElements(QCP::aeAll);
  QFont font;
  font.setStyleStrategy(QFont::NoAntialias);
  customPlot->xAxis->setTickLabelFont(font);
  customPlot->yAxis->setTickLabelFont(font);
  customPlot->legend->setFont(font);
  */
  customPlot->legend->setVisible(true);
  customPlot->addGraph(); // Xline
  customPlot->graph(0)->setPen(QPen(Qt::blue));
  customPlot->graph(0)->setName(QString("X"));

  customPlot->addGraph(); // Y line
  customPlot->graph(1)->setPen(QPen(Qt::red));
  customPlot->graph(1)->setName(QString("Y"));

  customPlot->addGraph(); // Z line
  customPlot->graph(2)->setPen(QPen(Qt::green));
  customPlot->graph(2)->setName(QString("Z"));


  customPlot->addGraph(); // X dot
  customPlot->graph(3)->setPen(QPen(Qt::blue));
  customPlot->graph(3)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(3)->setScatterStyle(QCPScatterStyle::ssDisc);

  customPlot->addGraph(); // Y dot
  customPlot->graph(4)->setPen(QPen(Qt::red));
  customPlot->graph(4)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(4)->setScatterStyle(QCPScatterStyle::ssDisc);

  customPlot->addGraph(); // Z dot
  customPlot->graph(5)->setPen(QPen(Qt::green));
  customPlot->graph(5)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(5)->setScatterStyle(QCPScatterStyle::ssDisc);

  customPlot->legend->removeItem(3);//remove it from the legend
  customPlot->legend->removeItem(3);//remove it from the legend
  customPlot->legend->removeItem(3);//remove it from the legend


  customPlot->xAxis->setTickLabelType(QCPAxis::ltDateTime);
  customPlot->xAxis->setDateTimeFormat("hh:mm:ss");
  customPlot->xAxis->setAutoTickStep(false);
  customPlot->xAxis->setTickStep(2);
  customPlot->axisRect()->setupFullAxesBox();

  //Setting Layout of the graph
  QCPLayoutGrid *subLayout = new QCPLayoutGrid;
  QCPLayoutElement *dummyElement = new QCPLayoutElement;
  customPlot->plotLayout()->addElement(0, 1, subLayout); // add sub-layout in the cell to the right of the main axis rect
  customPlot->plotLayout()->setColumnStretchFactor(1,0.01);
  subLayout->addElement(0, 0, customPlot->legend); // add legend
  subLayout->addElement(1, 0, dummyElement); // add dummy element below legend
  subLayout->setRowStretchFactor(0, 0.01); // make legend cell (in row 0) take up as little vertical space as possible


  // make left and bottom axes transfer their ranges to right and top axes:
  connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->xAxis2, SLOT(setRange(QCPRange)));
  connect(customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->yAxis2, SLOT(setRange(QCPRange)));

  // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:
  connect(&datatimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot1()));
  datatimer.start(0); // Interval 0 means to refresh as fast as possible
}

void MainWindow::setupRealtimeData2(QCustomPlot *customPlot)
{
#if QT_VERSION < QT_VERSION_CHECK(4, 7, 0)
  QMessageBox::critical(this, "", "You're using Qt < 4.7, the realtime data demo needs functions that are available with Qt 4.7 to work properly");
#endif

  // include this section to fully disable antialiasing for higher performance:
  /*
  customPlot->setNotAntialiasedElements(QCP::aeAll);
  QFont font;
  font.setStyleStrategy(QFont::NoAntialias);
  customPlot->xAxis->setTickLabelFont(font);
  customPlot->yAxis->setTickLabelFont(font);
  customPlot->legend->setFont(font);
  */
  customPlot->legend->setVisible(true);

  customPlot->addGraph(); // Xline
  customPlot->graph(0)->setPen(QPen(Qt::blue));
  customPlot->graph(0)->setName(QString("X"));

  customPlot->addGraph(); // Y line
  customPlot->graph(1)->setPen(QPen(Qt::red));
  customPlot->graph(1)->setName(QString("Y"));

  customPlot->addGraph(); // Z line
  customPlot->graph(2)->setPen(QPen(Qt::green));
  customPlot->graph(2)->setName(QString("Z"));


  customPlot->addGraph(); // X dot
  customPlot->graph(3)->setPen(QPen(Qt::blue));
  customPlot->graph(3)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(3)->setScatterStyle(QCPScatterStyle::ssDisc);
  customPlot->addGraph(); // Y dot
  customPlot->graph(4)->setPen(QPen(Qt::red));
  customPlot->graph(4)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(4)->setScatterStyle(QCPScatterStyle::ssDisc);
  customPlot->addGraph(); // Z dot
  customPlot->graph(5)->setPen(QPen(Qt::green));
  customPlot->graph(5)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(5)->setScatterStyle(QCPScatterStyle::ssDisc);

  customPlot->legend->removeItem(3);//remove it from the legend
  customPlot->legend->removeItem(3);//remove it from the legend
  customPlot->legend->removeItem(3);//remove it from the legend

  customPlot->xAxis->setTickLabelType(QCPAxis::ltDateTime);
  customPlot->xAxis->setDateTimeFormat("hh:mm:ss");
  customPlot->xAxis->setAutoTickStep(false);
  customPlot->xAxis->setTickStep(2);
  customPlot->axisRect()->setupFullAxesBox();


  //Setting Layout of the graph
  QCPLayoutGrid *subLayout = new QCPLayoutGrid;
  QCPLayoutElement *dummyElement = new QCPLayoutElement;
  customPlot->plotLayout()->addElement(0, 1, subLayout); // add sub-layout in the cell to the right of the main axis rect
  customPlot->plotLayout()->setColumnStretchFactor(1,0.01);
  subLayout->addElement(0, 0, customPlot->legend); // add legend
  subLayout->addElement(1, 0, dummyElement); // add dummy element below legend
  subLayout->setRowStretchFactor(0, 0.01); // make legend cell (in row 0) take up as little vertical space as possible


  // make left and bottom axes transfer their ranges to right and top axes:
  connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->xAxis2, SLOT(setRange(QCPRange)));
  connect(customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->yAxis2, SLOT(setRange(QCPRange)));

  // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:
  connect(&datatimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot2()));
  datatimer.start(0); // Interval 0 means to refresh as fast as possible
}

void MainWindow::setupRealtimeData3(QCustomPlot *customPlot)
{
#if QT_VERSION < QT_VERSION_CHECK(4, 7, 0)
  QMessageBox::critical(this, "", "You're using Qt < 4.7, the realtime data demo needs functions that are available with Qt 4.7 to work properly");
#endif

  // include this section to fully disable antialiasing for higher performance:
  /*
  customPlot->setNotAntialiasedElements(QCP::aeAll);
  QFont font;
  font.setStyleStrategy(QFont::NoAntialias);
  customPlot->xAxis->setTickLabelFont(font);
  customPlot->yAxis->setTickLabelFont(font);
  customPlot->legend->setFont(font);
  */
  customPlot->legend->setVisible(true);

  customPlot->addGraph(); // Xline
  customPlot->graph(0)->setPen(QPen(Qt::blue));
  customPlot->graph(0)->setName(QString("X"));

  customPlot->addGraph(); // Y line
  customPlot->graph(1)->setPen(QPen(Qt::red));
  customPlot->graph(1)->setName(QString("Y"));

  customPlot->addGraph(); // Z line
  customPlot->graph(2)->setPen(QPen(Qt::green));
  customPlot->graph(2)->setName(QString("Z"));

  customPlot->addGraph(); // X dot
  customPlot->graph(3)->setPen(QPen(Qt::blue));
  customPlot->graph(3)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(3)->setScatterStyle(QCPScatterStyle::ssDisc);
  customPlot->addGraph(); // Y dot
  customPlot->graph(4)->setPen(QPen(Qt::red));
  customPlot->graph(4)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(4)->setScatterStyle(QCPScatterStyle::ssDisc);
  customPlot->addGraph(); // Z dot
  customPlot->graph(5)->setPen(QPen(Qt::green));
  customPlot->graph(5)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(5)->setScatterStyle(QCPScatterStyle::ssDisc);

  customPlot->legend->removeItem(3);//remove it from the legend
  customPlot->legend->removeItem(3);//remove it from the legend
  customPlot->legend->removeItem(3);//remove it from the legend

  customPlot->xAxis->setTickLabelType(QCPAxis::ltDateTime);
  customPlot->xAxis->setDateTimeFormat("hh:mm:ss");
  customPlot->xAxis->setAutoTickStep(false);
  customPlot->xAxis->setTickStep(2);
  customPlot->axisRect()->setupFullAxesBox();

  //Setting Layout of the graph
  QCPLayoutGrid *subLayout = new QCPLayoutGrid;
  QCPLayoutElement *dummyElement = new QCPLayoutElement;
  customPlot->plotLayout()->addElement(0, 1, subLayout); // add sub-layout in the cell to the right of the main axis rect
  customPlot->plotLayout()->setColumnStretchFactor(1,0.01);
  subLayout->addElement(0, 0, customPlot->legend); // add legend
  subLayout->addElement(1, 0, dummyElement); // add dummy element below legend
  subLayout->setRowStretchFactor(0, 0.01); // make legend cell (in row 0) take up as little vertical space as possible


  // make left and bottom axes transfer their ranges to right and top axes:
  connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->xAxis2, SLOT(setRange(QCPRange)));
  connect(customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->yAxis2, SLOT(setRange(QCPRange)));

  // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:
  connect(&datatimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot3()));
  datatimer.start(0); // Interval 0 means to refresh as fast as possible
}

void MainWindow::setupRealtimeData4(QCustomPlot *customPlot)
{
#if QT_VERSION < QT_VERSION_CHECK(4, 7, 0)
  QMessageBox::critical(this, "", "You're using Qt < 4.7, the realtime data demo needs functions that are available with Qt 4.7 to work properly");
#endif

  // include this section to fully disable antialiasing for higher performance:
  /*
  customPlot->setNotAntialiasedElements(QCP::aeAll);
  QFont font;
  font.setStyleStrategy(QFont::NoAntialias);
  customPlot->xAxis->setTickLabelFont(font);
  customPlot->yAxis->setTickLabelFont(font);
  customPlot->legend->setFont(font);
  */
  customPlot->legend->setVisible(true);

  customPlot->addGraph(); // Roll line
  customPlot->graph(0)->setPen(QPen(Qt::blue));
  customPlot->graph(0)->setName(QString("R"));

  customPlot->addGraph(); // Pitch line
  customPlot->graph(1)->setPen(QPen(Qt::red));
  customPlot->graph(1)->setName(QString("P"));

  customPlot->addGraph(); // Yaw line
  customPlot->graph(2)->setPen(QPen(Qt::green));
  customPlot->graph(2)->setName(QString("Y"));


  customPlot->addGraph(); // R dot
  customPlot->graph(3)->setPen(QPen(Qt::blue));
  customPlot->graph(3)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(3)->setScatterStyle(QCPScatterStyle::ssDisc);
  customPlot->addGraph(); // P dot
  customPlot->graph(4)->setPen(QPen(Qt::red));
  customPlot->graph(4)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(4)->setScatterStyle(QCPScatterStyle::ssDisc);
  customPlot->addGraph(); // Y dot
  customPlot->graph(5)->setPen(QPen(Qt::green));
  customPlot->graph(5)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(5)->setScatterStyle(QCPScatterStyle::ssDisc);

  customPlot->legend->removeItem(3);//remove it from the legend
  customPlot->legend->removeItem(3);//remove it from the legend
  customPlot->legend->removeItem(3);//remove it from the legend

  customPlot->xAxis->setTickLabelType(QCPAxis::ltDateTime);
  customPlot->xAxis->setDateTimeFormat("hh:mm:ss");
  customPlot->xAxis->setAutoTickStep(false);
  customPlot->xAxis->setTickStep(2);
  customPlot->axisRect()->setupFullAxesBox();

  //Setting Layout of the graph
  QCPLayoutGrid *subLayout = new QCPLayoutGrid;
  QCPLayoutElement *dummyElement = new QCPLayoutElement;
  customPlot->plotLayout()->addElement(0, 1, subLayout); // add sub-layout in the cell to the right of the main axis rect
  customPlot->plotLayout()->setColumnStretchFactor(1,0.01);
  subLayout->addElement(0, 0, customPlot->legend); // add legend
  subLayout->addElement(1, 0, dummyElement); // add dummy element below legend
  subLayout->setRowStretchFactor(0, 0.01); // make legend cell (in row 0) take up as little vertical space as possible


  // make left and bottom axes transfer their ranges to right and top axes:
  connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->xAxis2, SLOT(setRange(QCPRange)));
  connect(customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->yAxis2, SLOT(setRange(QCPRange)));

  // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:

  connect(&datatimer, SIGNAL(timeout( )), this, SLOT(readResponse4()));
  datatimer.start(0); // Interval 0 means to refresh as fast as possible

}


void MainWindow::realtimeDataSlot1()
{
  // calculate two new data points:
#if QT_VERSION < QT_VERSION_CHECK(4, 7, 0)
  double key = 0;
#else
  double key = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000.0;
#endif
  static double lastPointKey = 0;
  if (key-lastPointKey > 0.01) // at most add point every 10 ms
  {
    double value0 = qSin(key); //qSin(key*1.6+qCos(key*1.7)*2)*10 + qSin(key*1.2+0.56)*20 + 26;
    double value1 = qCos(key); //qSin(key*1.3+qCos(key*1.2)*1.2)*7 + qSin(key*0.9+0.26)*24 + 26;
    double value2 = qSin(key)-qCos(key);
    // add data to lines for plot 1:
    ui->customPlot1->graph(0)->addData(key, value0);
    ui->customPlot1->graph(1)->addData(key, value1);
    ui->customPlot1->graph(2)->addData(key, value2);


    // set data of dots:
    ui->customPlot1->graph(3)->clearData();
    ui->customPlot1->graph(3)->addData(key, value0);
    ui->customPlot1->graph(4)->clearData();
    ui->customPlot1->graph(4)->addData(key, value1);
    ui->customPlot1->graph(5)->clearData();
    ui->customPlot1->graph(5)->addData(key, value2);

    ui->customPlot2->graph(3)->clearData();
    ui->customPlot2->graph(3)->addData(key, value0);
    ui->customPlot2->graph(4)->clearData();
    ui->customPlot2->graph(4)->addData(key, value1);
    ui->customPlot2->graph(5)->clearData();
    ui->customPlot2->graph(5)->addData(key, value2);





    // remove data of lines that's outside visible range:
    ui->customPlot1->graph(0)->removeDataBefore(key-8);
    ui->customPlot1->graph(1)->removeDataBefore(key-8);
    ui->customPlot1->graph(2)->removeDataBefore(key-8);
    // rescale value (vertical) axis to fit the current data:
    ui->customPlot1->graph(0)->rescaleValueAxis();
    ui->customPlot1->graph(1)->rescaleValueAxis(true);
    ui->customPlot1->graph(2)->rescaleValueAxis(true);
    lastPointKey = key;
  }
  // make key axis range scroll with the data (at a constant range size of 8):
  ui->customPlot1->xAxis->setRange(key+0.25, 8, Qt::AlignRight);
  ui->customPlot1->replot();

  // calculate frames per second:
  static double lastFpsKey;
  static int frameCount;
  ++frameCount;
  if (key-lastFpsKey > 2) // average fps over 2 seconds
  {
    ui->statusBar->showMessage(
          QString("%1 FPS, Total Data points: %2")
          .arg(frameCount/(key-lastFpsKey), 0, 'f', 0)
          .arg(ui->customPlot1->graph(0)->data()->count()+ui->customPlot1->graph(1)->data()->count())
          , 0);
    lastFpsKey = key;
    frameCount = 0;
  }
}

void MainWindow::realtimeDataSlot2()
{
  // calculate two new data points:
#if QT_VERSION < QT_VERSION_CHECK(4, 7, 0)
  double key = 0;
#else
  double key = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000.0;
#endif
  static double lastPointKey = 0;
  if (key-lastPointKey > 0.01) // at most add point every 10 ms
  {
    double value0 = qSin(key); //qSin(key*1.6+qCos(key*1.7)*2)*10 + qSin(key*1.2+0.56)*20 + 26;
    double value1 = qCos(key); //qSin(key*1.3+qCos(key*1.2)*1.2)*7 + qSin(key*0.9+0.26)*24 + 26;
    double value2 = qSin(key)-qCos(key);

    // add data to lines for plot 2:
    ui->customPlot2->graph(0)->addData(key, value0);
    ui->customPlot2->graph(1)->addData(key, value1);
    ui->customPlot2->graph(2)->addData(key, value2);


    // set data of dots:

    ui->customPlot2->graph(3)->clearData();
    ui->customPlot2->graph(3)->addData(key, value0);
    ui->customPlot2->graph(4)->clearData();
    ui->customPlot2->graph(4)->addData(key, value1);
    ui->customPlot2->graph(5)->clearData();
    ui->customPlot2->graph(5)->addData(key, value2);

    // remove data of lines that's outside visible range:
    ui->customPlot2->graph(0)->removeDataBefore(key-8);
    ui->customPlot2->graph(1)->removeDataBefore(key-8);
    ui->customPlot2->graph(2)->removeDataBefore(key-8);
    // rescale value (vertical) axis to fit the current data:
    ui->customPlot2->graph(0)->rescaleValueAxis();
    ui->customPlot2->graph(1)->rescaleValueAxis(true);
    ui->customPlot2->graph(2)->rescaleValueAxis(true);
    lastPointKey = key;
  }
  // make key axis range scroll with the data (at a constant range size of 8):
  ui->customPlot2->xAxis->setRange(key+0.25, 8, Qt::AlignRight);
  ui->customPlot2->replot();

}

void MainWindow::realtimeDataSlot3()
{
  // calculate two new data points:
#if QT_VERSION < QT_VERSION_CHECK(4, 7, 0)
  double key = 0;
#else
  double key = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000.0;
#endif
  static double lastPointKey = 0;
  if (key-lastPointKey > 0.01) // at most add point every 10 ms
  {
    double value0 = qSin(key); //qSin(key*1.6+qCos(key*1.7)*2)*10 + qSin(key*1.2+0.56)*20 + 26;
    double value1 = qCos(key); //qSin(key*1.3+qCos(key*1.2)*1.2)*7 + qSin(key*0.9+0.26)*24 + 26;
    double value2 = qSin(key)-qCos(key);

    // add data to lines for plot 3:
    ui->customPlot3->graph(0)->addData(key, value0);
    ui->customPlot3->graph(1)->addData(key, value1);
    ui->customPlot3->graph(2)->addData(key, value2);


    // set data of dots:

    ui->customPlot3->graph(3)->clearData();
    ui->customPlot3->graph(3)->addData(key, value0);
    ui->customPlot3->graph(4)->clearData();
    ui->customPlot3->graph(4)->addData(key, value1);
    ui->customPlot3->graph(5)->clearData();
    ui->customPlot3->graph(5)->addData(key, value2);

    // remove data of lines that's outside visible range:
    ui->customPlot3->graph(0)->removeDataBefore(key-8);
    ui->customPlot3->graph(1)->removeDataBefore(key-8);
    ui->customPlot3->graph(2)->removeDataBefore(key-8);
    // rescale value (vertical) axis to fit the current data:
    ui->customPlot3->graph(0)->rescaleValueAxis();
    ui->customPlot3->graph(1)->rescaleValueAxis(true);
    ui->customPlot3->graph(2)->rescaleValueAxis(true);
    lastPointKey = key;
  }
  // make key axis range scroll with the data (at a constant range size of 8):
  ui->customPlot3->xAxis->setRange(key+0.25, 8, Qt::AlignRight);
  ui->customPlot3->replot();

}

void MainWindow::realtimeDataSlot4(double R, double P, double Y)
{
  // calculate two new data points:
#if QT_VERSION < QT_VERSION_CHECK(4, 7, 0)
  double key = 0;
#else
  double key = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000.0;
#endif
  static double lastPointKey = 0;
  if (key-lastPointKey > 0.01) // at most add point every 10 ms
  {
    // add data to lines for plot 4:
    ui->customPlot4->graph(0)->addData(key, R);
    ui->customPlot4->graph(1)->addData(key, P);
    ui->customPlot4->graph(2)->addData(key, Y);

    // set data of dots:

    ui->customPlot4->graph(3)->clearData();
    ui->customPlot4->graph(3)->addData(key, R);
    ui->customPlot4->graph(4)->clearData();
    ui->customPlot4->graph(4)->addData(key, P);
    ui->customPlot4->graph(5)->clearData();
    ui->customPlot4->graph(5)->addData(key, Y);

    // remove data of lines that's outside visible range:

   /*
   ui->customPlot4->graph(0)->removeDataBefore(key-8);
   ui->customPlot4->graph(1)->removeDataBefore(key-8);
   ui->customPlot4->graph(2)->removeDataBefore(key-8); */

    // rescale value (vertical) axis to fit the current data:
    ui->customPlot4->graph(0)->rescaleValueAxis();
    ui->customPlot4->graph(1)->rescaleValueAxis(true);
    ui->customPlot4->graph(2)->rescaleValueAxis(true);
    lastPointKey = key;
  }
  // make key axis range scroll with the data (at a constant range size of 8):
  ui->customPlot4->xAxis->setRange(key+0.25, 8, Qt::AlignRight);
  ui->customPlot4->replot();

}

void MainWindow::readResponse4(){

   QStringList list= r.readRPY();
   realtimeDataSlot4(list.at(0).toDouble(),list.at(1).toDouble(),list.at(2).toDouble());
}




