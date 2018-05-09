#include "mainwindow.h"
#include "ui_mainwindow.h"

struct answer
{
    QString word;
    int point;
};

struct answer answer_1_1;
struct answer answer_1_2;
struct answer answer_1_3;
struct answer answer_1_4;
struct answer answer_1_5;
struct answer answer_1_6;
struct answer answer_2_1;
struct answer answer_2_2;
struct answer answer_2_3;
struct answer answer_2_4;
struct answer answer_2_5;
struct answer answer_2_6;
struct answer answer_3_1;
struct answer answer_3_2;
struct answer answer_3_3;
struct answer answer_3_4;
struct answer answer_3_5;
struct answer answer_3_6;
struct answer answer_4_1;
struct answer answer_4_2;
struct answer answer_4_3;
struct answer answer_4_4;
struct answer answer_4_5;
struct answer answer_4_6;

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

void MainWindow::on_pushButton_1_1_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_1_1.point);
    ui->question_1_1->setText(answer_1_1.word + " " + printable);
    delete ui->pushButton_1_1;
}
void MainWindow::on_pushButton_1_2_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_1_2.point);
    ui->question_1_2->setText(answer_1_2.word + " " + printable);
    delete ui->pushButton_1_2;
}
void MainWindow::on_pushButton_1_3_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_1_3.point);
    ui->question_1_3->setText(answer_1_3.word + " " + printable);
    delete ui->pushButton_1_3;
}
void MainWindow::on_pushButton_1_4_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_1_4.point);
    ui->question_1_4->setText(answer_1_4.word + " " + printable);
    delete ui->pushButton_1_4;
}
void MainWindow::on_pushButton_1_5_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_1_5.point);
    ui->question_1_5->setText(answer_1_5.word + " " + printable);
    delete ui->pushButton_1_5;
}
void MainWindow::on_pushButton_1_6_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_1_6.point);
    ui->question_1_6->setText(answer_1_6.word + " " + printable);
    delete ui->pushButton_1_6;
}


void MainWindow::on_wrongButton_1_1_clicked()
{
    QIcon myIcon("wrong_off.png");
    ui->wrongButton_1_1->setIcon( myIcon );
    ui->wrongButton_1_1->setText("красный \n крестик");
}
void MainWindow::on_wrongButton_1_2_clicked()
{
    QIcon myIcon("wrong_off.png");
    ui->wrongButton_1_2->setIcon( myIcon );
    ui->wrongButton_1_2->setText("красный \n крестик");
}
void MainWindow::on_wrongButton_1_3_clicked()
{
    QIcon myIcon("wrong_off.png");
    ui->wrongButton_1_3->setIcon( myIcon );
    ui->wrongButton_1_3->setText("красный \n крестик");
}
void MainWindow::on_wrongButton_1_4_clicked()
{
    QIcon myIcon("wrong_off.png");
    ui->wrongButton_1_4->setIcon( myIcon );
    ui->wrongButton_1_4->setText("красный \n крестик");
}
void MainWindow::on_wrongButton_1_5_clicked()
{
    QIcon myIcon("wrong_off.png");
    ui->wrongButton_1_5->setIcon( myIcon );
    ui->wrongButton_1_5->setText("красный \n крестик");
}
void MainWindow::on_wrongButton_1_6_clicked()
{
    QIcon myIcon("wrong_off.png");
    ui->wrongButton_1_6->setIcon( myIcon );
    ui->wrongButton_1_6->setText("красный \n крестик");
}

/* Метод, вызывающий диалоговое окно выбора файла для чтения данных*/
void MainWindow::on_dialogReadButton_clicked()
{
    /* Вызываем диалог выбора файла для чтения */
    QString filename = QFileDialog::getOpenFileName(this,
                                       tr("Open Xml"), ".",
                                       tr("Xml files (*.xml)"));
   /* Устанавливаем в lineEditRead путь к файлу, с которым будем работать */
    if(filename != ""){
        ui->lineEditRead->setText(filename);
    }
}

void MainWindow::on_readButton_clicked()
{
    /* Открываем файл для Чтения с помощью пути, указанного в lineEditWrite */
    QFile file(ui->lineEditRead->text());
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,
                             "Ошибка файла",
                             "Не удалось открыть файл",
                             QMessageBox::Ok);
    } else {
        /* Создаем объект, с помощью которого осуществляется чтение из файла */
        QXmlStreamReader xmlReader;
        xmlReader.setDevice(&file);
        xmlReader.readNext();   // Переходит к первому элементу в файле

        /* Крутимся в цикле до тех пор, пока не достигнем конца документа
         * */
        while(!xmlReader.atEnd())
        {
            /* Проверяем, является ли элемент началом тега
             * */
            if(xmlReader.isStartElement())
            {
                if(xmlReader.name() == "answer_1_1")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_1_1.point = attr.value().toInt();
                            qDebug() << answer_1_1.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_1_1.word = attr.value().toString();
                            qDebug() << answer_1_1.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_1_2")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_1_2.point = attr.value().toInt();
                            qDebug() << answer_1_2.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_1_2.word = attr.value().toString();
                            qDebug() << answer_1_2.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_1_3")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_1_3.point = attr.value().toInt();
                            qDebug() << answer_1_3.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_1_3.word = attr.value().toString();
                            qDebug() << answer_1_3.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_1_4")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_1_4.point = attr.value().toInt();
                            qDebug() << answer_1_4.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_1_4.word = attr.value().toString();
                            qDebug() << answer_1_4.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_1_5")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_1_5.point = attr.value().toInt();
                            qDebug() << answer_1_5.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_1_5.word = attr.value().toString();
                            qDebug() << answer_1_5.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_1_6")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_1_6.point = attr.value().toInt();
                            qDebug() << answer_1_6.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_1_6.word = attr.value().toString();
                            qDebug() << answer_1_6.word;
                        }

                    }
                }

                if(xmlReader.name() == "answer_2_1")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_2_1.point = attr.value().toInt();
                            qDebug() << answer_2_1.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_2_1.word = attr.value().toString();
                            qDebug() << answer_2_1.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_2_2")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_2_2.point = attr.value().toInt();
                            qDebug() << answer_2_2.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_2_2.word = attr.value().toString();
                            qDebug() << answer_2_2.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_2_3")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_2_3.point = attr.value().toInt();
                            qDebug() << answer_2_3.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_2_3.word = attr.value().toString();
                            qDebug() << answer_2_3.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_2_4")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_2_4.point = attr.value().toInt();
                            qDebug() << answer_2_4.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_2_4.word = attr.value().toString();
                            qDebug() << answer_2_4.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_2_5")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_2_5.point = attr.value().toInt();
                            qDebug() << answer_2_5.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_2_5.word = attr.value().toString();
                            qDebug() << answer_2_5.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_2_6")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_2_6.point = attr.value().toInt();
                            qDebug() << answer_2_6.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_2_6.word = attr.value().toString();
                            qDebug() << answer_2_6.word;
                        }

                    }
                }

                if(xmlReader.name() == "answer_3_1")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_3_1.point = attr.value().toInt();
                            qDebug() << answer_3_1.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_3_1.word = attr.value().toString();
                            qDebug() << answer_3_1.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_3_2")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_3_2.point = attr.value().toInt();
                            qDebug() << answer_3_2.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_3_2.word = attr.value().toString();
                            qDebug() << answer_3_2.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_3_3")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_3_3.point = attr.value().toInt();
                            qDebug() << answer_3_3.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_3_3.word = attr.value().toString();
                            qDebug() << answer_3_3.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_3_4")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_3_4.point = attr.value().toInt();
                            qDebug() << answer_3_4.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_3_4.word = attr.value().toString();
                            qDebug() << answer_3_4.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_3_5")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_3_5.point = attr.value().toInt();
                            qDebug() << answer_3_5.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_3_5.word = attr.value().toString();
                            qDebug() << answer_3_5.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_3_6")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_3_6.point = attr.value().toInt();
                            qDebug() << answer_3_6.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_3_6.word = attr.value().toString();
                            qDebug() << answer_3_6.word;
                        }

                    }
                }

                if(xmlReader.name() == "answer_4_1")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_4_1.point = attr.value().toInt();
                            qDebug() << answer_4_1.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_4_1.word = attr.value().toString();
                            qDebug() << answer_4_1.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_4_2")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_4_2.point = attr.value().toInt();
                            qDebug() << answer_4_2.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_4_2.word = attr.value().toString();
                            qDebug() << answer_4_2.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_4_3")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_4_3.point = attr.value().toInt();
                            qDebug() << answer_4_3.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_4_3.word = attr.value().toString();
                            qDebug() << answer_4_3.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_4_4")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_4_4.point = attr.value().toInt();
                            qDebug() << answer_4_4.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_4_4.word = attr.value().toString();
                            qDebug() << answer_4_4.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_4_5")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_4_5.point = attr.value().toInt();
                            qDebug() << answer_4_5.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_4_5.word = attr.value().toString();
                            qDebug() << answer_4_5.word;
                        }

                    }
                }
                if(xmlReader.name() == "answer_4_6")
                {
                    foreach(const QXmlStreamAttribute &attr, xmlReader.attributes()) {
                        if (attr.name().toString() == "point"){
                            answer_4_6.point = attr.value().toInt();
                            qDebug() << answer_4_6.point;
                        }
                        if (attr.name().toString() == "word"){
                            answer_4_6.word = attr.value().toString();
                            qDebug() << answer_4_6.word;
                        }

                    }
                }
            }
            xmlReader.readNext(); // Переходим к следующему элементу файла
        }
        file.close(); // Закрываем файл

        /* В данном коде не осуществляется проверка на закрытие тега
         * поскольку в этом нет необходимости, но функционал QXmlStreamReader это позволяет
         * */
    }
}
