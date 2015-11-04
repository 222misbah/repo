#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_on_clicked()
{
    qDebug() << "Led is on" << "\n";
    ui->status->setText("Led is on");
}

void MainWindow::on_off_clicked()
{
    qDebug() << "Led is off" << "\n";
    ui->status->setText("led is off");
}
