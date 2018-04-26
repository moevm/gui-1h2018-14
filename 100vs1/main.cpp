#include "mainwindow.h"
#include <QApplication>
#include <QDir>
#include <QImage>
#include <QtGui>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //w.setName("Slim Shady");
    //QImage *image = new QImage(QDir::currentPath() + "/wrong_off.png");

    w.show();

    return a.exec();
}
