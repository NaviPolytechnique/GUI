#include "gps.h"
#include "ui_gps.h"

Gps::Gps(QWidget *parent) :
    QWidget(parent),

    ui(new Ui::Gps)
{
    ui->setupUi(this);

    //Set Image scale
    agpstox = -5583333.333;
    bgpstox = 271981539.1 ;
    agpstoy = 5714.285714 ;
    bgpstoy = -11804.06286;
    cmtopx = 0.00183382933 ;

    //set ReadInput

   /* QString namexyz = QFileDialog::getOpenFileName(this, tr("Open LOGOUT"),
    "",
    tr("Text files (*.txt)"));
    xyz=readInput(namexyz);*/

    //set Current Position

    homePoint = QPoint(agpstox*48.712888+bgpstox,agpstoy*2.214986+bgpstoy);
    currentPos = homePoint;


    //set Image

    //QString nameimg = QFileDialog::getOpenFileName(this, tr("Map Image"),"",tr("Images (*.png *.xpm *.jpg)"));
    //mapImg.load(nameimg);
    mapImg = QPixmap(":/new/prefix1/map");
    painter.begin(&mapImg);
    QPen pen(Qt::blue, 13,Qt::SolidLine,Qt::RoundCap);
    painter.setPen(pen);
    painter.drawPoint(currentPos); //first point
    pen.setColor(Qt::blue);
    pen.setWidth(5);
    painter.setPen(pen);

   /* lab = new QLabel(this);


    //Print image
    lab->setPixmap(mapImg.scaled(1200,1200,Qt::KeepAspectRatio));
    //lab->setScaledContents(true);
    lab->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    lab->adjustSize();
    lab->show();
    //painter.drawLine(currentPos, currentPos + QPoint(100,100));
    //painter.end();
    //lab->setPixmap(mapImg.scaled(1200,1200,Qt::KeepAspectRatio));
    //
   //connect(&datatimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));
    datatimer.start(0); // Interval 0 means to refresh as fast as possible
    */
    lab = new QLabel;

    ui->gps->addWidget(lab);

    scrollArea = new QScrollArea;
    scrollArea->setWidgetResizable(true);
    scrollArea->setWidget(lab);
    ui->gps->addWidget(scrollArea);


    //Print image
    lab->setPixmap(mapImg.scaled(1200,1200,Qt::KeepAspectRatio));
    //lab->setScaledContents(true);
    //lab->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    lab->adjustSize();
    scrollArea->adjustSize();
    lab->show();
    //painter.drawLine(currentPos, currentPos + QPoint(100,100));
    //painter.end();
    //lab->setPixmap(mapImg.scaled(1200,1200,Qt::KeepAspectRatio));
    //connect(&datatimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));
    datatimer.start(0); // Interval 0 means to refresh as fast as possible
    scrollArea->setWidgetResizable(true);

}

Gps::~Gps()
{
    delete ui;
}

/*
void Gps::realtimeDataSlot()
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
          //QPainter p;
          //p.begin(&mapImg);
          //QPen pen(Qt::blue, 5,Qt::SolidLine,Qt::RoundCap);

          //p.setPen(pen);
          QStringList list = xyz.readXYZ();
          QPoint buffer = currentPos+QPoint(list.at(0).toDouble()*cmtopx,list.at(1).toDouble()*cmtopx);
          painter.drawLine(currentPos, buffer);
          currentPos = buffer;
          lab->setPixmap(mapImg.scaled(1200,1200,Qt::KeepAspectRatio));
          lab->update();
      }
}
*/
void Gps::MAJGps(QString DroneStatusMAJ){

    //roll
    QStringList list=DroneStatusMAJ.split(",");
    currentPos+=QPointF(list.at(3).toDouble()*cmtopx,-list.at(4).toDouble()*cmtopx);
    painter.drawPoint(currentPos);
    lab->setPixmap(mapImg.scaled(1200,1200,Qt::KeepAspectRatio));
    lab->update();

}

void Gps::homePointSlot(QString s) {

    QStringList list = s.split(",");
    homePoint = QPointF(agpstox*list.at(0).toDouble()+bgpstox,agpstoy*list.at(1).toDouble()+bgpstoy);
    currentPos = homePoint; //the current position is the new home point
    QPen pen(Qt::red, 13,Qt::SolidLine,Qt::RoundCap);
    painter.setPen(pen);
    painter.drawPoint(homePoint);
    pen.setWidth(5);
    painter.setPen(pen);
    lab->setPixmap(mapImg.scaled(1200,1200,Qt::KeepAspectRatio));
    lab->update();
}
