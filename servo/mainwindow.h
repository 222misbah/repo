#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSlider>
#include <QProgressBar>
#include <QSerialPort>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_slider_sliderMoved(int position);
private:
    Ui::MainWindow *ui;
    QSerialPort *arduino;
};

#endif // MAINWINDOW_H
