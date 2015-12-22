#include "readinput.h"

readInput::readInput()
{

}

readInput::readInput(QString f){
    file = f;
    posRPY =0;
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
                flux.seek(posRPY);
                QString line = flux.readLine();
                QStringList list=recuperationRPY(line);
                //realtimeDataSlot4(list.at(0).toDouble(),list.at(1).toDouble(),list.at(2).toDouble());
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
    return QStringList();
    }

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

