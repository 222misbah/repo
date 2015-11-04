#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSlider>

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
    void on_off_clicked();

    void on_on_clicked();

    void on_connet_clicked();

    void on_slider_actionTriggered(int action);

private:
    Ui::MainWindow *ui;
    QSerialPort *arduino;
    QSlider *slider;
};

#endif // MAINWINDOW_H
