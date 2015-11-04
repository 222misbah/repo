#ifndef WIDGET_H
#define WIDGET_H

#include <QtGui/QWidget>
#include <QtGui>
#include <qextserialport.h>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0); //the creator
    ~Widget();  //destructor

    void init_port(); // port initialisation function

public slots:
    void transmitCmd(int value); // sending function

private :
    QVBoxLayout *main_layout;
    QSlider *slider;
    QLCDNumber *lcd;

    QextSerialPort *port;
};

#endif // WIDGET_H
