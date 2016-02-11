#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //init etat drone
    dronestatus=new DroneStatus(this);


    //thread de lecture de drone
    QString namerpy = QFileDialog::getOpenFileName(this, tr("Open RPY"),"",tr("Text files (*.txt)"));
    QString namexyz = QFileDialog::getOpenFileName(this, tr("Open XYZ"),"",tr("Text files (*.txt)"));
    thread= new ThreadReadInput(namerpy,namexyz);
    thread->start();
    connect(thread, SIGNAL(TonNewLine(QString)), dronestatus, SLOT(ModifierDroneStatus(QString)));

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
    widgetzcursor = new ZCursor();
    ui->zcursor->addWidget(widgetzcursor);
    widgetRPYControl=new RPYControl();
    ui->RPYControl->addWidget(widgetRPYControl);
    widgetbatterygauge=new BatteryGauge();
    ui->battery->addWidget(widgetbatterygauge);


    widgetxyzwidget=new XyzWidget();
    ui->graphs->addWidget(widgetxyzwidget);
    widgetmap=new Gps();
    ui->map->addWidget(widgetmap);


    connect(dronestatus, SIGNAL(DroneStatusMAJ(QString)), widgetattitudemeter, SLOT(MAJAttitudeMeter(QString)),Qt::QueuedConnection);
    connect(dronestatus, SIGNAL(DroneStatusMAJ(QString)), widgetcompass, SLOT(MAJCompass(QString)),Qt::QueuedConnection);
    connect(dronestatus, SIGNAL(DroneStatusMAJ(QString)), widgetmap, SLOT(MAJGps(QString)),Qt::QueuedConnection);
    connect(dronestatus, SIGNAL(DroneStatusMAJ(QString)), widgetxyzwidget, SLOT(MAJXyzWidget(QString)),Qt::QueuedConnection);
    connect(dronestatus, SIGNAL(DroneStatusMAJ(QString)), widgetzcursor, SLOT(MAJZCursor(QString)),Qt::QueuedConnection);

}

MainWindow::~MainWindow()
{
    delete ui;
}




