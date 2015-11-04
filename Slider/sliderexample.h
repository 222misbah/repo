#ifndef SLIDEREXAMPLE_H
#define SLIDEREXAMPLE_H

#include <QMainWindow>
#include <QSlider>
#include <QProgressBar>
#include <QSerialPort>

namespace Ui {
class SliderExample;
}

class SliderExample : public QMainWindow
{
    Q_OBJECT


public:
    explicit SliderExample(QWidget *parent = 0);
    ~SliderExample();

private slots:
    void on_slider_sliderMoved(int position);

    void on_slider_valueChanged(int value);

private:
    Ui::SliderExample *ui;
    QSerialPort *arduino;
};

#endif // SLIDEREXAMPLE_H
