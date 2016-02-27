#include "xyzwidget.h"

#include "ui_xyzwidget.h"


XyzWidget::XyzWidget(QWidget *parent) :

    QWidget(parent),

    ui(new Ui::XyzWidget)

{

        ui->setupUi(this);


        //rpy = readInput("/Users/utilisateur/Documents/Navia/GUI/XYZ/rpy.txt");

        //xyz = readInput("/Users/utilisateur/Documents/Navia/GUI/XYZ/log_out.txt");

/*

        QString namerpy = QFileDialog::getOpenFileName(this, tr("Open RPY"),

        "",

        tr("Text files (*.txt)"));

        QString namexyz = QFileDialog::getOpenFileName(this, tr("Open LOGOUT"),

        "",

        tr("Text files (*.txt)"));


        rpy=readInput(namerpy);

        xyz=readInput(namexyz);*/


        //fenêtre XYZ

        setupRealtimeData1(ui->customPlot1);


        //fenêtre Vx Vy Vz

        setupRealtimeData2(ui->customPlot2);


        //febêtre ax ay az

        //setupRealtimeData3(ui->customPlot3);


        //fenêtre R P Y

        setupRealtimeData4(ui->customPlot4);


        //connect(&datatimer, SIGNAL(timeout()), this, SLOT(readResponseXYZ()));

        datatimer.start(0); // Interval 0 means to refresh as fast as possible

        //keyinit = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000.0;


        printbool = false;

        //set save files




        posRPY = 0;

        posXYZ = 0;

        posVxVyVz = 0;


    }



XyzWidget::~XyzWidget()

{

    delete ui;

}


void XyzWidget::setupRealtimeData1(QCustomPlot *customPlot)

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


}


void XyzWidget::setupRealtimeData2(QCustomPlot *customPlot)

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

  customPlot->graph(0)->setName(QString("Vx"));


  customPlot->addGraph(); // Y line

  customPlot->graph(1)->setPen(QPen(Qt::red));

  customPlot->graph(1)->setName(QString("Vy"));


  customPlot->addGraph(); // Z line

  customPlot->graph(2)->setPen(QPen(Qt::green));

  customPlot->graph(2)->setName(QString("Vz"));



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


}


/* void XyzWidget::setupRealtimeData3(QCustomPlot *customPlot)

{

#if QT_VERSION < QT_VERSION_CHECK(4, 7, 0)

  QMessageBox::critical(this, "", "You're using Qt < 4.7, the realtime data demo needs functions that are available with Qt 4.7 to work properly");

#endif


  // include this section to fully disable antialiasing for higher performance:


  customPlot->setNotAntialiasedElements(QCP::aeAll);

  QFont font;

  font.setStyleStrategy(QFont::NoAntialias);

  customPlot->xAxis->setTickLabelFont(font);

  customPlot->yAxis->setTickLabelFont(font);

  customPlot->legend->setFont(font);


  customPlot->legend->setVisible(true);


  customPlot->addGraph(); // Xline

  customPlot->graph(0)->setPen(QPen(Qt::blue));

  customPlot->graph(0)->setName(QString("ax"));


  customPlot->addGraph(); // Y line

  customPlot->graph(1)->setPen(QPen(Qt::red));

  customPlot->graph(1)->setName(QString("ay"));


  customPlot->addGraph(); // Z line

  customPlot->graph(2)->setPen(QPen(Qt::green));

  customPlot->graph(2)->setName(QString("az"));


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

}

*/


void XyzWidget::setupRealtimeData4(QCustomPlot *customPlot)

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


  //connect(&datatimer, SIGNAL(timeout( )), this, SLOT(readResponse4()));

  datatimer.start(0); // Interval 0 means to refresh as fast as possible


}



void XyzWidget::realtimeDataSlot1(double X, double Y, double Z)

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

    //double value0 = qSin(key); //qSin(key*1.6+qCos(key*1.7)*2)*10 + qSin(key*1.2+0.56)*20 + 26;

    //double value1 = qCos(key); //qSin(key*1.3+qCos(key*1.2)*1.2)*7 + qSin(key*0.9+0.26)*24 + 26;

    //double value2 = qSin(key)-qCos(key);

    // add data to lines for plot 1:

    ui->customPlot1->graph(0)->addData(key, X);

    ui->customPlot1->graph(1)->addData(key, Y);

    ui->customPlot1->graph(2)->addData(key, Z);



    // set data of dots:

    ui->customPlot1->graph(3)->clearData();

    ui->customPlot1->graph(3)->addData(key, X);

    ui->customPlot1->graph(4)->clearData();

    ui->customPlot1->graph(4)->addData(key, Y);

    ui->customPlot1->graph(5)->clearData();

    ui->customPlot1->graph(5)->addData(key, Z);


    ui->customPlot2->graph(3)->clearData();

    ui->customPlot2->graph(3)->addData(key, X);

    ui->customPlot2->graph(4)->clearData();

    ui->customPlot2->graph(4)->addData(key, Y);

    ui->customPlot2->graph(5)->clearData();

    ui->customPlot2->graph(5)->addData(key, Z);






    // remove data of lines that's outside visible range:

    /*ui->customPlot1->graph(0)->removeDataBefore(key-8);

    ui->customPlot1->graph(1)->removeDataBefore(key-8);

    ui->customPlot1->graph(2)->removeDataBefore(key-8);

    */


    // rescale value (vertical) axis to fit the current data:

    ui->customPlot1->graph(0)->rescaleValueAxis();

    ui->customPlot1->graph(1)->rescaleValueAxis(true);

    ui->customPlot1->graph(2)->rescaleValueAxis(true);

    lastPointKey = key;

  }

  // make key axis range scroll with the data (at a constant range size of 8):

  ui->customPlot1->xAxis->setRange(key+0.25, 8, Qt::AlignRight);

  ui->customPlot1->replot();



}


void XyzWidget::realtimeDataSlot2(double Vx, double Vy, double Vz)

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

    /*double value0 = qSin(key); //qSin(key*1.6+qCos(key*1.7)*2)*10 + qSin(key*1.2+0.56)*20 + 26;

    double value1 = qCos(key); //qSin(key*1.3+qCos(key*1.2)*1.2)*7 + qSin(key*0.9+0.26)*24 + 26;

    double value2 = qSin(key)-qCos(key);

    */

    // add data to lines for plot 2:2011 tv show

    ui->customPlot2->graph(0)->addData(key, Vx);

    ui->customPlot2->graph(1)->addData(key, Vy);

    ui->customPlot2->graph(2)->addData(key, Vz);



    // set data of dots:


    ui->customPlot2->graph(3)->clearData();

    ui->customPlot2->graph(3)->addData(key, Vx);

    ui->customPlot2->graph(4)->clearData();

    ui->customPlot2->graph(4)->addData(key, Vy);

    ui->customPlot2->graph(5)->clearData();

    ui->customPlot2->graph(5)->addData(key, Vz);


    // remove data of lines that's outside visible range:

    /*ui->customPlot2->graph(0)->removeDataBefore(key-8);

    ui->customPlot2->graph(1)->removeDataBefore(key-8);

    ui->customPlot2->graph(2)->removeDataBefore(key-8);

    */

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


/*void XyzWidget::realtimeDataSlot3(double ax, double ay, double az)

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

*/


void XyzWidget::realtimeDataSlot4(double R, double P, double Y)

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

/*

void XyzWidget::readResponseXYZ(){

    QStringList list = xyz.readXYZ();

    realtimeDataSlot1(list.at(0).toDouble(),list.at(1).toDouble(),list.at(2).toDouble());

    realtimeDataSlot2(list.at(3).toDouble(),list.at(4).toDouble(),list.at(5).toDouble());

}


void XreadResponse4(){

   QStringList list= rpy.readRPY();

   realtimeDataSlot4(list.at(0).toDouble(),list.at(1).toDouble(),list.at(2).toDouble());

}*/


/*void XyzWidget::on_pushButton_clicked(){


    double key = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000.0;

    ui->customPlot1->xAxis->setRange(keyinit, key, Qt::AlignRight);

    ui->customPlot2->xAxis->setRange(keyinit, key, Qt::AlignRight);

    ui->customPlot4->xAxis->setRange(keyinit, key, Qt::AlignRight);


    ui->customPlot1->replot();

    ui->customPlot2->replot();

    ui->customPlot4->replot();


    QString XYZFilename = QFileDialog::getSaveFileName(this, "Save XYZ");

    QString VXVYVZFilename = QFileDialog::getSaveFileName(this, "Save speed XYZ");

    QString RPYFilename = QFileDialog::getSaveFileName(this, "Save RPY");


    ui->customPlot1->savePng(XYZFilename);

    ui->customPlot2->savePng(VXVYVZFilename);

    ui->customPlot4->savePng(RPYFilename);



}

*/


void XyzWidget::MAJXyzWidget(QString DroneStatusMAJ){

    QStringList list=DroneStatusMAJ.split(",");

    realtimeDataSlot1(list.at(3).toDouble(),list.at(4).toDouble(),list.at(5).toDouble());
    realtimeDataSlot2(list.at(6).toDouble(),list.at(7).toDouble(),list.at(8).toDouble());
    realtimeDataSlot4(list.at(0).toDouble(),list.at(1).toDouble(),list.at(2).toDouble());
    if(printbool)
    {
        writexyz(list.at(3) + ";" + list.at(4) + ";" + list.at(5));
        writevxvyvz(list.at(6) + ";" + list.at(7) + ";" + list.at(8));
        writerpy(list.at(0) + ";" + list.at(1) + ";" + list.at(2));
    }
}



void XyzWidget::writerpy(QString RPY){

    QFile file(filerpy);

       if (file.open(QIODevice::ReadWrite)) {

           QTextStream stream(&file);

           stream.seek(posRPY);

           stream << RPY << endl;

           posRPY=stream.pos();

           file.close();

       }

}


void XyzWidget::writexyz(QString XYZ){

    QFile file(filexyz);

       if (file.open(QIODevice::ReadWrite)) {

           QTextStream stream(&file);

           stream.seek(posXYZ);

           stream << XYZ << endl;

           posXYZ=stream.pos();

           file.close();

       }

}


void XyzWidget::writevxvyvz(QString VxVyVz){

    QFile file(filevxvyvz);

       if (file.open(QIODevice::ReadWrite)) {

           QTextStream stream(&file);

           stream.seek(posVxVyVz);

           stream << VxVyVz << endl;

           posVxVyVz=stream.pos();

           file.close();

       }

}




void XyzWidget::on_pushButton_clicked()
{
    if(printbool==false){
        filerpy = QFileDialog::getSaveFileName(this, tr("Save rpy"),"",tr("Text files (*.txt)"));
        filexyz = QFileDialog::getSaveFileName(this, tr("Save xyz"),"",tr("Text files (*.txt)"));
        filevxvyvz = QFileDialog::getSaveFileName(this, tr("Save vxvyvz"),"",tr("Text files (*.txt)"));
    }

    printbool = !printbool;
}
