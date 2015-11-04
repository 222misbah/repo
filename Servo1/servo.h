#ifndef SERVO_H
#define SERVO_H

#include <QMainWindow>

namespace Ui {
class Servo;
}

class Servo : public QMainWindow
{
    Q_OBJECT

public:
    explicit Servo(QWidget *parent = 0);
    ~Servo();

private:
    Ui::Servo *ui;
};

#endif // SERVO_H
