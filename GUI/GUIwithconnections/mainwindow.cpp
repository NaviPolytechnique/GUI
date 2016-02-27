#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //init com drone
    d = new Drone(this);
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
    widgetattitudemeter->setMinimumSize(300,270);
    ui->horizonindicator->addWidget(widgetattitudemeter,0,Qt::AlignCenter);
    widgetcompass = new Compass();
    widgetcompass->setMinimumSize(270,200);
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

    connect(this,SIGNAL(SystemMsg(QString)),widgeteandm,SLOT(NewSystemMsg(QString)),Qt::QueuedConnection);
    connect(this,SIGNAL(Exception(QString)),widgeteandm,SLOT(NewException(QString)),Qt::QueuedConnection);
    //buttons
    connect(widgetcontrol,SIGNAL(TakeOff()),this,SLOT(TakeOff()),Qt::QueuedConnection);
    connect(widgetcontrol,SIGNAL(Land()),this,SLOT(Land()),Qt::QueuedConnection);
    connect(widgetcontrol,SIGNAL(EmergencyStop()),this,SLOT(EmergencyStop()),Qt::QueuedConnection);
    connect(widgetcontrol,SIGNAL(CalibrateIMU()),this,SLOT(CalibrateIMU()),Qt::QueuedConnection);
    connect(widgetcontrol,SIGNAL(IMU()),this,SLOT(IMU()),Qt::QueuedConnection);
    connect(widgetcontrol,SIGNAL(Pilot()),this,SLOT(Pilot()),Qt::QueuedConnection);
    //connect(widgetcontrol,SIGNAL(StartAll()),this,SLOT(StartAll()),Qt::QueuedConnection);
    connect(widgetcontrol,SIGNAL(Kill()),this,SLOT(Kill()),Qt::QueuedConnection);

    connect(widgetRPYControl,SIGNAL(sendRPYT(QString)),this,SLOT(sendRPYT(QString)));
    connect(widgetzcursor,SIGNAL(SendZTarget(double)),this,SLOT(sendztarget(double)));
    connect(widgetinputcommands,SIGNAL(SendCommand(QString)),this,SLOT(sendtextcommand(QString)));

    connect(dronestatus, SIGNAL(DroneStatusMAJ(QString)), widgetattitudemeter, SLOT(MAJAttitudeMeter(QString)),Qt::QueuedConnection);
    connect(dronestatus, SIGNAL(DroneStatusMAJ(QString)), widgetcompass, SLOT(MAJCompass(QString)),Qt::QueuedConnection);
    connect(dronestatus, SIGNAL(DroneStatusMAJ(QString)), widgetmap, SLOT(MAJGps(QString)),Qt::QueuedConnection);
    connect(dronestatus, SIGNAL(DroneStatusMAJ(QString)), widgetxyzwidget, SLOT(MAJXyzWidget(QString)),Qt::QueuedConnection);
    connect(dronestatus, SIGNAL(DroneStatusMAJ(QString)), widgetzcursor, SLOT(MAJZCursor(QString)),Qt::QueuedConnection);
    connect(dronestatus, SIGNAL(DroneStatusMAJ(QString)), widgetbatterygauge, SLOT(MAJBattery(QString)),Qt::QueuedConnection);
    connect(dronestatus, SIGNAL(HomePoint(QString)),widgetmap,SLOT(homePointSlot(QString)));

}

void MainWindow::TakeOff()
{
    d->sendMsg(new Message(Message::SYSTEM,std::string("takeoff;"),1));
}
void MainWindow::Land()
{
    d->sendMsg(new Message(Message::SYSTEM,std::string("land;"),1));
}
void MainWindow::EmergencyStop()
{
    d->sendMsg(new Message(Message::SYSTEM,std::string("EmergencyStop;"),1));
}
void MainWindow::CalibrateIMU()
{
    d->sendMsg(new Message(Message::SYSTEM,std::string("calibrIMU;"),1));
}
void MainWindow::IMU()
{
    d->sendMsg(new Message(Message::SYSTEM,std::string("startIMU;"),1));
}
void MainWindow::Pilot()
{
    d->sendMsg(new Message(Message::SYSTEM,std::string("startPilot;"),1));
}
/*void MainWindow::StartAll()
{
    delete ui;
}*/
void MainWindow::Kill()
{
    d->sendMsg(new Message(Message::SYSTEM,std::string("kill;"),1));
}
void MainWindow::sendRPYT(QString RPYT)
{
    QStringList RPYTlist=RPYT.split(",");
    double R=RPYTlist[0].toDouble()*6280/360;
    double P=RPYTlist[1].toDouble()*6280/360;
    double Y=RPYTlist[2].toDouble()*6280/360;

    d->setAngleIncr((int)R,
                    (int)P,
                    (int)Y);
    d->sendMsg(new Message(Message::TARGET,std::to_string(d->getTarget()->getX()) + ";"
                                          + std::to_string(d->getTarget()->getY()) + ";"
                                          + std::to_string(d->getTarget()->getZ()) + ";"
                                          + std::to_string(d->getAnglesTarget()->getX()) + ";"
                                          + std::to_string(d->getAnglesTarget()->getY()) + ";"
                                          + std::to_string(d->getAnglesTarget()->getZ()) + ";" ,1));
}
void MainWindow::sendztarget(double zt)
{
    d->setTarget(d->getTarget()->getX(),d->getTarget()->getY(),(int)zt*100);
    d->sendMsg(new Message(Message::TARGET,std::to_string(d->getTarget()->getX()) + ";"
                                          + std::to_string(d->getTarget()->getY()) + ";"
                                          + std::to_string(d->getTarget()->getZ()) + ";"
                                          + std::to_string(d->getAnglesTarget()->getX()) + ";"
                                          + std::to_string(d->getAnglesTarget()->getY()) + ";"
                                          + std::to_string(d->getAnglesTarget()->getZ()) + ";", 1 ));
}

void MainWindow::sendtextcommand(QString text){
    d->sendMsg(new Message(Message::CONFIG, text.toStdString(),1));
}

MainWindow::~MainWindow()
{
    delete ui;
}

DroneStatus* MainWindow::getDroneStatus(){
    return dronestatus;
}




