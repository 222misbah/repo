#include "servo.h"
#include "ui_servo.h"

Servo::Servo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Servo)
{
    ui->setupUi(this);
}

Servo::~Servo()
{
    delete ui;
}
