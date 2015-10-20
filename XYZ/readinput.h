#ifndef READINPUT_H
#define READINPUT_H

#include <QTimer>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QMessageBox>

class readInput
{
public:
    readInput();
    readInput(QString f);

signals:

public slots:
    QStringList readRPY();

private:
    QString file;
    qint64 posRPY;
    QStringList recuperationRPY(QString s);
};

#endif // READINPUT_H
