#include "threadreadinput.h"

//init Thread countainer
ThreadReadInput::ThreadReadInput(QString inputrpy,QString inputxyz,QObject *parent) : QObject(parent),Tfilerpy(inputrpy),Tfilexyz(inputxyz),thread(new QThread(this))
{
}

//start threadAttitudeMeter
void ThreadReadInput::start(){
    ReadInput* readinput=new ReadInput(Tfilerpy,Tfilexyz);
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
ReadInput::ReadInput(QString inputrpy,QString inputxyz,QObject *parent): QObject(parent),filerpy(inputrpy),filexyz(inputxyz),newline(""),posRPY(0),posXYZ(0),lignelu(new QStringList())
{
}

//start worker "ReadInput"
void ReadInput::start()
{
    int i=0;
    while(i<10000){
        QThread::msleep(30);
        sendline();
        i++;

    }
    emit signalReadInputEnded();
}

void ReadInput::sendline(){

    QStringList listrpy=readRPY();
    QStringList listxyz=readXYZ();
    lignelu->append(listrpy.at(0));
    lignelu->append(listrpy.at(1));
    lignelu->append(listrpy.at(2));
    lignelu->append(listxyz.at(0));
    lignelu->append(listxyz.at(1));
    lignelu->append(listxyz.at(2));
    lignelu->append(listxyz.at(3));
    lignelu->append(listxyz.at(4));
    lignelu->append(listxyz.at(5));


    newline=lignelu->join(",");
    emit signalNewLine(newline);
    lignelu->removeAt(8);
    lignelu->removeAt(7);
    lignelu->removeAt(6);
    lignelu->removeAt(5);
    lignelu->removeAt(4);
    lignelu->removeAt(3);
    lignelu->removeAt(2);
    lignelu->removeAt(1);
    lignelu->removeAt(0);
}



QStringList ReadInput::readRPY(){
    QFile fichier(filerpy);
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

QStringList ReadInput::readXYZ(){
    QFile fichier(filexyz);
    if(!fichier.exists()){
         QMessageBox::information(0,"info","n'existe pas");
    }
    if(fichier.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream flux(&fichier);
            if(!flux.atEnd())
             {
                flux.seek(posXYZ);  //seek the position in the file
                QString line = flux.readLine();
                QStringList list=recuperationXYZ(line);
                posXYZ=flux.pos();  //update the position
                fichier.close();
                return list;        //
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

QStringList ReadInput::recuperationXYZ(QString s){
    QStringList l;
       int i = 0;
       int j=s.size();
       while(s[i]==' ')
       {
           i++;
       }
       for (int k=0;k<6;k++)
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
