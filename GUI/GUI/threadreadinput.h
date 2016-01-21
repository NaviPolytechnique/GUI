#ifndef THREADREADINPUT_H
#define THREADREADINPUT_H

#include <QObject>
#include <QString>
#include <QThread>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTimer>
#include <QCoreApplication>

class ReadInput : public QObject
{
    Q_OBJECT

public:
    ReadInput(QString filerpy,QString filexyz,QObject* parent = 0);

public slots:
    void start();
    //void stop();
     void sendline();

signals:
    void signalNewLine(QString);
    void signalReadInputEnded();


private:
    QString filerpy,filexyz;
    QString newline;
    qint64 posRPY;
    qint64 posXYZ;
    QStringList* lignelu;


    QStringList recuperationRPY(QString s);
    QStringList readRPY();
    QStringList recuperationXYZ(QString s);
    QStringList readXYZ();

};

class ThreadReadInput : public QObject
{
    Q_OBJECT
public:
    explicit ThreadReadInput(QString Tfilerpy, QString Tfilexyz,QObject *parent = 0);

signals:

public slots:
    void start();
    //void stop();

signals:
    void TonNewLine(QString);

private slots:
    void onNewLine(QString);
    void onReadInputEnded();

private:
    QString Tfilerpy;
    QString Tfilexyz;
    QThread* thread;

};

#endif // THREADREADINPUT_H
