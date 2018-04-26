#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setName(const QString &name)
{
 ui->question_1->setText(name);
}


QString MainWindow::name() const
{
 return ui->question_1->text();
}

void MainWindow::on_pushButton_1_clicked()
{
    ui->question_1->setText("ответ_1            12");
    delete ui->pushButton_1;
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->question_2->setText("ответ_2            18");
    delete ui->pushButton_2;
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->question_3->setText("ответ_3            23");
    delete ui->pushButton_3;
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->question_4->setText("ответ_4            28");
    delete ui->pushButton_4;
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->question_5->setText("ответ_5            30");
    delete ui->pushButton_5;
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->question_6->setText("ответ_6            56");
    delete ui->pushButton_6;
}
