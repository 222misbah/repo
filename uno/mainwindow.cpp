#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qDebug"
#include "QSlider"
#include <QApplication>
#include <QVBoxLayout>
#include <QLabel>
#include <QSpinBox>
#include <QSlider>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    arduino = new QSerialPort(this);
    arduino->setPortName("COM3");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_off_clicked()
{
    qDebug() << "led is off" << "\n";
    ui->status->setText("OF");
    arduino->write("s");

}

void MainWindow::on_on_clicked()
{
    qDebug() << "led is on" << "\n";
    ui->status->setText("ON");
    arduino->write("a");
}

void MainWindow::on_connet_clicked()
{
    arduino->close();
    if(arduino->open(QIODevice::ReadWrite)){
        arduino->setPortName("COM3"); //yours maybe different, please check by connecting it to your pc
            arduino->setBaudRate(QSerialPort::Baud9600);
            arduino->setDataBits(QSerialPort::Data8);
            arduino->setParity(QSerialPort::NoParity);
            arduino->setStopBits(QSerialPort::OneStop);
            // Skipping hw/sw control
            arduino->setFlowControl(QSerialPort::NoFlowControl);
    }
}

void MainWindow::on_slider_actionTriggered(int action)
{
    slider->setMaximum(180);
    slider->setMinimum(0);
    slider->setSliderPosition(20);
    slider->setSingleStep(5);


}

