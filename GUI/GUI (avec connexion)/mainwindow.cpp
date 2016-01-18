#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //init etat drone
    dronestatus=new DroneStatus(this);
    connect(dronestatus, SIGNAL(DroneStatusMAJ(QString)), this, SLOT(MAJIHM(QString)));

    //thread de lecture de drone
    QString namerpy = QFileDialog::getOpenFileName(this, tr("Open RPY"),"",tr("Text files (*.txt)"));
    ThreadReadInput* thread= new ThreadReadInput(namerpy);
    connect(thread,SIGNAL(TonNewLine(QString)),this,SLOT(MAJIHM(QString)));
    thread->start();

    //adds widgets to the ui
    Buttons* widgetcontrol = new Buttons();
    ui->controls->addWidget(widgetcontrol);
    EandM* widgeteandm = new EandM();
    ui->eandm->addWidget(widgeteandm);
    InputCommands* widgetinputcommands = new InputCommands();
    ui->inputcommands->addWidget(widgetinputcommands);
}

MainWindow::~MainWindow()
{
    delete ui;
}
