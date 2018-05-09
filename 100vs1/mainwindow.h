#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QXmlStreamAttribute>
#include <QMessageBox>
#include <QFile>

#include <QDebug>
#include <QString>

#include <iostream>

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
    /* Слоты обработчиков кнопок, работающих с чтением из файла */
    void on_readButton_clicked();
    void on_dialogReadButton_clicked();


    void on_pushButton_1_1_clicked();
    void on_pushButton_1_2_clicked();
    void on_pushButton_1_3_clicked();
    void on_pushButton_1_4_clicked();
    void on_pushButton_1_5_clicked();
    void on_pushButton_1_6_clicked();

    void on_wrongButton_1_1_clicked();
    void on_wrongButton_1_2_clicked();
    void on_wrongButton_1_3_clicked();
    void on_wrongButton_1_4_clicked();
    void on_wrongButton_1_5_clicked();
    void on_wrongButton_1_6_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
