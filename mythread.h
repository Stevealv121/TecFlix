#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QtCore>
#include<QString>

class MyThread:public QThread

{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = 0);
    void run();
    bool Stop = false;
signals:
    void NumberChanged(int);
};

#endif // MYTHREAD_H
