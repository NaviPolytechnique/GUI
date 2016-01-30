//
//  readinput.h
//  GUI
//
//  Created by Hugz on 29/10/2015.
//  Copyright (c) 2015 Hugz. All rights reserved.
//
#include <QTimer>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>

class readInput
{
public:
    readInput();

    /* \brief default constructor
        */
    readInput(QString f);
    /* \brief constructor
        * \param path of the text file
        */
signals:

public slots:
    QStringList readRPY();
    /* \brief Returns a list as {R;P;Y} from the file
     *
     */
    QStringList readXYZ();
    /* \brief Returns a list as {X;Y;Z;Vx;Vy;Vz} from the file
     *
     */

private:
    QString file;  //the path of the file
    qint64 posRPY; //position in the text file
    QStringList recuperationRPY(QString s);
    /* \brief catch R P and Y from a line with random number of ' '
     * \param the line as a string
     */

    QStringList recuperationXYZ(QString s);
    /* \brief catch X Y and Z from a line with random number of ' '
     * \param the line as a string
     */
};

