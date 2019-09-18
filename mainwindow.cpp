#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mThread = new MyThread(this);
    connect(mThread,SIGNAL(NumberChanged(int)),this,SLOT(onNumberChanged(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionShow_memory_usage_triggered()
{
    QMessageBox::information(this,"Memory usage","showingcontent...");
}

void MainWindow::onNumberChanged(int Number){

    ui->label->setText(QString::number(Number));
}

void MainWindow::on_pushButton_clicked()
{
    mThread->start();
}

void MainWindow::on_pushButton_2_clicked()
{
    mThread->Stop = true;
}
