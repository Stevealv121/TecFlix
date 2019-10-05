#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mythread.h"
#include <QMessageBox>
#include <QAbstractButton>
#include <QtGui>
#include <QtCore>
#include <QGraphicsScene>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void initScene(bool change);


private slots:
    void on_actionShow_memory_usage_triggered();


    void on_actionChange_mode_triggered();

    void on_actionInfinite_scroll_triggered();

private:
    Ui::MainWindow *ui;

    bool change;

    QGraphicsScene *scene;
    QGraphicsScene *scene2;
    QGraphicsEllipseItem *elipse;
    QGraphicsRectItem *rect;

};

#endif // MAINWINDOW_H
