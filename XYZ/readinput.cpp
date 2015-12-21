#include "readinput.h"

readInput::readInput()
{
}

readInput::readInput(QString f){
    file = f;
    posRPY = 0; //set the position at the beginning of the file
}

QStringList readInput::readRPY(){
    QFile fichier(file);
    if(!fichier.exists()){
         QMessageBox::information(0,"info","n'existe pas");
    }
    if(fichier.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream flux(&fichier);
            if(!flux.atEnd())
             {
                flux.seek(posRPY);  //seek the position in the file
                QString line = flux.readLine();
                QStringList list=recuperationRPY(line);
                posRPY=flux.pos();  //update the position
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

QStringList readInput::readXYZ(){
    QFile fichier(file);
    if(!fichier.exists()){
         QMessageBox::information(0,"info","n'existe pas");
    }
    if(fichier.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream flux(&fichier);
            if(!flux.atEnd())
             {
                flux.seek(posRPY);  //seek the position in the file
                QString line = flux.readLine();
                QStringList list=recuperationXYZ(line);
                posRPY=flux.pos();  //update the position
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

QStringList readInput::recuperationRPY(QString s){
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

QStringList readInput::recuperationXYZ(QString s){
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


