#include "gps.h"
#include "ui_gps.h"

Gps::Gps(QWidget *parent) :
    QWidget(parent),

    ui(new Ui::Gps)
{
    ui->setupUi(this);

    //Set Image scale

    cmtopx = 0.00183382933 ;

    //set ReadInput

   /* QString namexyz = QFileDialog::getOpenFileName(this, tr("Open LOGOUT"),
    "",
    tr("Text files (*.txt)"));
    xyz=readInput(namexyz);*/

    //set Current Position

    homePoint = fromcoordonatestopixel(48.7111,2.21278);
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


QPointF Gps::fromcoordonatestopixel(float lat, float lon){
    float latA = 48.71188;
    float lonA = 2.20759;

    float latB = 48.71423;
    float lonB = 2.20759;

    float latC = 48.71188;
    float lonC = 2.21230;

    float XA = 192;
    float YA = 1064;

    float XB = 192;
    float YB = 566;

    float XC = 851;
    float YC = 1064;


    float xa = cos(deg2rad(latA))*cos(deg2rad(lonA));
    float ya = cos(deg2rad(latA))*sin(deg2rad(lonA));
    float za = sin(deg2rad(latA));

    float xb = cos(deg2rad(latB))*cos(deg2rad(lonB));
    float yb = cos(deg2rad(latB))*sin(deg2rad(lonB));
    float zb = sin(deg2rad(latB));

    float xc = cos(deg2rad(latC))*cos(deg2rad(lonC));
    float yc = cos(deg2rad(latC))*sin(deg2rad(lonC));
    float zc = sin(deg2rad(latC));

    float x = cos(deg2rad(lat))*cos(deg2rad(lon));
    float y = cos(deg2rad(lat))*sin(deg2rad(lon));
    float z = sin(deg2rad(lat));

    float xcoef = ((x-xa)*(xb-xa)+(y-ya)*(yb-ya)+(z-za)*(zb-za))/((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya)+(zb-za)*(zb-za));
    float ycoef = ((x-xa)*(xc-xa)+(y-ya)*(yc-ya)+(z-za)*(zc-za))/((xc-xa)*(xc-xa)+(yc-ya)*(yc-ya)+(zc-za)*(zc-za));

    float X = XA + xcoef * (XB - XA) + ycoef * (XC-XA);
    float Y = YA + xcoef * (YB - YA) + ycoef * (YC-YA);

    return QPointF(X,Y);
}

// This function converts decimal degrees to radians
float Gps::deg2rad(float deg) {
    float pi = 3.14159;
    return (deg * pi / 180);
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
    homePoint = fromcoordonatestopixel(list.at(0).toDouble(),list.at(1).toDouble());
    currentPos = homePoint; //the current position is the new home point
    QPen pen(Qt::red, 13,Qt::SolidLine,Qt::RoundCap);
    painter.setPen(pen);
    painter.drawPoint(homePoint);
    pen.setWidth(5);
    painter.setPen(pen);
    lab->setPixmap(mapImg.scaled(1200,1200,Qt::KeepAspectRatio));
    lab->update();
}
