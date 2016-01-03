#include "threadreadinput.h"

//init Thread countainer
ThreadReadInput::ThreadReadInput(QString inputfile,QObject *parent) : QObject(parent),Tfile(inputfile),thread(new QThread(this))
{
}

//start thread
void ThreadReadInput::start(){
    ReadInput* readinput=new ReadInput(Tfile);
    connect(readinput,SIGNAL(signalNewLine(QString)),this,SLOT(onNewLine(QString)));
    connect(readinput,SIGNAL(signalReadInputEnded()),this,SLOT(onReadInputEnded()));
    readinput->moveToThread(thread);
    QMetaObject::invokeMethod(readinput,"start");
    thread->start();
}

//signal towards dronestatus
void ThreadReadInput::onNewLine(QString newline){
    emit TonNewLine(newline);
}

//slot to end the run loop of this thread
void ThreadReadInput::onReadInputEnded(){
    thread->exit();
}

//init worker "ReadInput"
ReadInput::ReadInput(QString inputfile,QObject *parent): QObject(parent),file(inputfile),newline(""),posRPY(0),lignelu(new QStringList())
{
}

//start worker "ReadInput"
void ReadInput::start()
{
    int i=0;
    while(i<10000){
        QThread::msleep(10);
        sendline();
        i++;

    }
    emit signalReadInputEnded();
}

void ReadInput::sendline(){

    QStringList list=readRPY();
    lignelu->append(list.at(0));
    lignelu->append(list.at(1));
    newline=lignelu->join(",");
    emit signalNewLine(newline);
    lignelu->removeAt(1);
    lignelu->removeAt(0);
}



QStringList ReadInput::readRPY(){
    QFile fichier(file);
    if(!fichier.exists()){
         QMessageBox::information(0,"info","n'existe pas");
    }
    if(fichier.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream flux(&fichier);
            if(!flux.atEnd())
             {
                flux.seek(posRPY);
                QString line = flux.readLine();
                QStringList list=recuperationRPY(line);
                posRPY=flux.pos();
                fichier.close();
                return list;
            }
            else{
                fichier.close();
                QMessageBox::information(0,"info","fichier fermé");
            }
    }
    else{
    QMessageBox::information(0,"info","ne peux pas ouvrir");
    }
    return QStringList();
}

QStringList ReadInput::recuperationRPY(QString s){
    QStringList l;
       int i = 0;
       int j=s.size();
       while(s[i]==' ')
       {
           i++;
       }
       for (int k=0;k<3;k++)
       {
           QString RorPorY;
           while (s[i]!=' ' && i<j ){
               RorPorY=RorPorY + s[i];
               i++;
           }
           i++;
           while (s[i]==' '&& i<j )
           {
               i++;
           }
           l << RorPorY;
       }
       return l;
}
