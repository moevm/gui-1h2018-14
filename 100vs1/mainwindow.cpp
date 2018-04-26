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


void MainWindow::on_wrongButton_1_clicked()
{
    QIcon myIcon("wrong_off.png");
    ui->wrongButton_1->setIcon( myIcon );
    ui->wrongButton_1->setText("красный \n крестик");
}
void MainWindow::on_wrongButton_2_clicked()
{
    QIcon myIcon("wrong_off.png");
    ui->wrongButton_2->setIcon( myIcon );
    ui->wrongButton_2->setText("красный \n крестик");
}
void MainWindow::on_wrongButton_3_clicked()
{
    QIcon myIcon("wrong_off.png");
    ui->wrongButton_3->setIcon( myIcon );
    ui->wrongButton_3->setText("красный \n крестик");
}
void MainWindow::on_wrongButton_4_clicked()
{
    QIcon myIcon("wrong_off.png");
    ui->wrongButton_4->setIcon( myIcon );
    ui->wrongButton_4->setText("красный \n крестик");
}
void MainWindow::on_wrongButton_5_clicked()
{
    QIcon myIcon("wrong_off.png");
    ui->wrongButton_5->setIcon( myIcon );
    ui->wrongButton_5->setText("красный \n крестик");
}
void MainWindow::on_wrongButton_6_clicked()
{
    QIcon myIcon("wrong_off.png");
    ui->wrongButton_6->setIcon( myIcon );
    ui->wrongButton_6->setText("красный \n крестик");
}
