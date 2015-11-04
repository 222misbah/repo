#include "sliderexample.h"
#include "ui_sliderexample.h"
#include <QDebug>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QByteArray>
#define print(s) qDebug() << s

SliderExample::SliderExample(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SliderExample)
{
    ui->setupUi(this);
    arduino = new QSerialPort(this);
    arduino->setPortName("COM3");

    if (arduino->open(QIODevice::ReadWrite)){
        arduino->setBaudRate(QSerialPort::Baud9600);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setFlowControl(QSerialPort::NoFlowControl);
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setStopBits(QSerialPort::OneStop);
    }

    ui->slider->setMaximum(180);
    ui->slider->setMinimum(0);
    ui->progress->setMaximum(180);
}

SliderExample::~SliderExample()
{
    delete ui;
}



void SliderExample::on_slider_valueChanged(int value)
{
    QString x = QString::number(value);
    QByteArray valueArray = x.toLatin1();
    arduino->write(valueArray);
    print(valueArray);
    ui->progress->setValue(value);


}
