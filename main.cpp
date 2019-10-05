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


    MainWindow w;
    //w.buttonsInit();
    w.setWindowTitle("TecFlix");
    w.show();

    return a.exec();
}
