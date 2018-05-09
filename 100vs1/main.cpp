#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //w.setName("Slim Shady");
    //QImage *image = new QImage(QDir::currentPath() + "/wrong_off.png");


    w.show();

    return a.exec();
}
