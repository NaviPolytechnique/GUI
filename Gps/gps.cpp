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

    QString namexyz = QFileDialog::getOpenFileName(this, tr("Open LOGOUT"),
    "",
    tr("Text files (*.txt)"));
    xyz=readInput(namexyz);

    //set Current Position
    currentPos = QPoint(agpstox*48.712888+bgpstox,agpstoy*2.214986+bgpstoy);


    //set Image

    QString nameimg = QFileDialog::getOpenFileName(this, tr("Map Image"),"",tr("Images (*.png *.xpm *.jpg)"));
    mapImg.load(nameimg);
    painter.begin(&mapImg);
    QPen pen(Qt::blue, 13,Qt::SolidLine,Qt::RoundCap);
    painter.setPen(pen);
    painter.drawPoint(currentPos); //first point
    pen.setColor(Qt::blue);
    pen.setWidth(5);
    painter.setPen(pen);


    lab = new QLabel(this);

    //Print image
    lab->setPixmap(mapImg.scaled(1200,1200,Qt::KeepAspectRatio));
    //lab->setScaledContents(true);
    lab->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    lab->adjustSize();
    lab->show();
    //painter.drawLine(currentPos, currentPos + QPoint(100,100));
    //painter.end();
    //lab->setPixmap(mapImg.scaled(1200,1200,Qt::KeepAspectRatio));
    connect(&datatimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));
    datatimer.start(0); // Interval 0 means to refresh as fast as possible
}

Gps::~Gps()
{
    delete ui;
}


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

