#include "mainwindow.h"
#include <QtGui>
#include <QtCore>
#include <QGridLayout>
#include <QLabel>
#include <QApplication>
#include "mythread.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyThread mThread;

    mThread.start();



    MainWindow w;
    w.setWindowTitle("TecFlix");
    w.show();

    return a.exec();
}
