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
    ReadInput(QString file,QObject* parent = 0);

public slots:
    void start();
    //void stop();
     void sendline();

signals:
    void signalNewLine(QString);
    void signalReadInputEnded();


private:
    QString file;
    QString newline;
    qint64 posRPY;
    QStringList* lignelu;


    QStringList recuperationRPY(QString s);
    QStringList readRPY();

};

class ThreadReadInput : public QObject
{
    Q_OBJECT
public:
    explicit ThreadReadInput(QString inputfile,QObject *parent = 0);

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
    QString Tfile;
    QThread* thread;

};

#endif // THREADREADINPUT_H
