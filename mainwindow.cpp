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

    change = false;

    scene = new QGraphicsScene(this);
    scene2 = new QGraphicsScene(this);
    initScene(change);


    elipse = scene->addEllipse(10,10,100,100);
    rect = scene2->addRect(300,300,25,150);
    rect = scene->addRect(300,300,25,150);




}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionShow_memory_usage_triggered()
{
    QMessageBox::information(this,"Memory usage","showingcontent...");
}

void MainWindow::on_actionChange_mode_triggered()
{

    QMessageBox::question(this,"Change mode","Do you want to change the actual mode?",
                          QMessageBox::Yes | QMessageBox::No);
}

void MainWindow::initScene(bool change){

    if(change == true){

        ui->graphicsView->setScene(scene2);
    }else{

        ui->graphicsView->setScene(scene);
    }

   // *change = nullptr;

}


void MainWindow::on_actionInfinite_scroll_triggered()
{
    change=true;
    initScene(change);
}
