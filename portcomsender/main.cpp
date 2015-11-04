#include <QApplication>
#include "widget.h"

//I have not edited this part

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
