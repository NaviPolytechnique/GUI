#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLabel *picture = new QLabel( this );
    picture->setPixmap( QPixmap( "osmX.png" ) );
     // {QMessageBox::information(0,"info","n'existe pas");}
    //QPainter *dronePainter = new QPainter(&pxMap);
   // dronePainter->setPen(Qt::blue);
   // dronePainter->begin(pxMap);
    //dronePainter->drawLine(5,5,40,40);
    //dronePainter->end();
    //else{
        picture->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
