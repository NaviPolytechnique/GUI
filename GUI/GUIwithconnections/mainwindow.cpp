#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //init com drone
    Drone *d = new Drone(this);
    d->start();
    std::cout<<"louis est une énorme salope qui avale des bites"<<std::endl;
    //init etat drone ihm
    dronestatus=new DroneStatus(this);


    //thread de lecture de drone
    //QString namerpy = QFileDialog::getOpenFileName(this, tr("Open RPY"),"",tr("Text files (*.txt)"));
    //ThreadReadInput  *thread= new ThreadReadInput(namerpy);
    //thread->start();
    //connect(thread, SIGNAL(TonNewLine(QString)), dronestatus, SLOT(ModifierDroneStatus(QString)));

    //adds widgets to the ui
    widgetcontrol = new Buttons();
    ui->controls->addWidget(widgetcontrol);
    widgeteandm = new EandM();
    ui->eandm->addWidget(widgeteandm);
    widgetinputcommands = new InputCommands();
    ui->inputcommands->addWidget(widgetinputcommands);
    widgetattitudemeter = new AttitudeMeter();
    widgetattitudemeter->setMinimumSize(320,300);
    ui->horizonindicator->addWidget(widgetattitudemeter,0,Qt::AlignCenter);
    widgetcompass = new Compass();
    widgetcompass->setMinimumSize(320,300);
    ui->compass->addWidget(widgetcompass,0,Qt::AlignCenter);


    connect(dronestatus, SIGNAL(DroneStatusMAJ(QString)), widgetattitudemeter, SLOT(MAJAttitudeMeter(QString))/*,Qt::QueuedConnection*/);
    connect(dronestatus, SIGNAL(DroneStatusMAJ(QString)), widgetcompass, SLOT(MAJCompass(QString))/*,Qt::QueuedConnection*/);
    connect(this,SIGNAL(signalpop(QString)),this,SLOT(pop(QString)),Qt::QueuedConnection);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::popup(QString message){
    emit signalpop(message);
}

void MainWindow::pop(QString message){
    widgeteandm->popup(message);
}


