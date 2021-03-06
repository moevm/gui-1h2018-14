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
    QSound::play(":/100_intro.wav");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_1_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_1_1.point);
    ui->question_1_1->setText(answer_1_1.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_1_1;
}
void MainWindow::on_pushButton_1_2_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_1_2.point);
    ui->question_1_2->setText(answer_1_2.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_1_2;
}
void MainWindow::on_pushButton_1_3_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_1_3.point);
    ui->question_1_3->setText(answer_1_3.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_1_3;
}
void MainWindow::on_pushButton_1_4_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_1_4.point);
    ui->question_1_4->setText(answer_1_4.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_1_4;
}
void MainWindow::on_pushButton_1_5_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_1_5.point);
    ui->question_1_5->setText(answer_1_5.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_1_5;
}
void MainWindow::on_pushButton_1_6_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_1_6.point);
    ui->question_1_6->setText(answer_1_6.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_1_6;
}

void MainWindow::on_pushButton_2_1_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_2_1.point);
    ui->question_2_1->setText(answer_2_1.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_2_1;
}
void MainWindow::on_pushButton_2_2_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_2_2.point);
    ui->question_2_2->setText(answer_2_2.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_2_2;
}
void MainWindow::on_pushButton_2_3_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_2_3.point);
    ui->question_2_3->setText(answer_2_3.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_2_3;
}
void MainWindow::on_pushButton_2_4_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_2_4.point);
    ui->question_2_4->setText(answer_2_4.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_2_4;
}
void MainWindow::on_pushButton_2_5_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_2_5.point);
    ui->question_2_5->setText(answer_2_5.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_2_5;
}
void MainWindow::on_pushButton_2_6_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_2_6.point);
    ui->question_2_6->setText(answer_2_6.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_2_6;
}

void MainWindow::on_pushButton_3_1_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_3_1.point);
    ui->question_3_1->setText(answer_3_1.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_3_1;
}
void MainWindow::on_pushButton_3_2_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_3_2.point);
    ui->question_3_2->setText(answer_3_2.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_3_2;
}
void MainWindow::on_pushButton_3_3_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_3_3.point);
    ui->question_3_3->setText(answer_3_3.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_3_3;
}
void MainWindow::on_pushButton_3_4_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_3_4.point);
    ui->question_3_4->setText(answer_3_4.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_3_4;
}
void MainWindow::on_pushButton_3_5_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_3_5.point);
    ui->question_3_5->setText(answer_3_5.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_3_5;
}
void MainWindow::on_pushButton_3_6_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_3_6.point);
    ui->question_3_6->setText(answer_3_6.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_3_6;
}

void MainWindow::on_pushButton_4_1_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_4_1.point);
    ui->question_4_1->setText(answer_4_1.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_4_1;
}
void MainWindow::on_pushButton_4_2_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_4_2.point);
    ui->question_4_2->setText(answer_4_2.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_4_2;
}
void MainWindow::on_pushButton_4_3_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_4_3.point);
    ui->question_4_3->setText(answer_4_3.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_4_3;
}
void MainWindow::on_pushButton_4_4_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_4_4.point);
    ui->question_4_4->setText(answer_4_4.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_4_4;
}
void MainWindow::on_pushButton_4_5_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_4_5.point);
    ui->question_4_5->setText(answer_4_5.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_4_5;
}
void MainWindow::on_pushButton_4_6_clicked()
{
    auto printable = QStringLiteral("%1").arg( answer_4_6.point);
    ui->question_4_6->setText(answer_4_6.word + " " + printable);
    QSound::play(":/100_line.wav");
    delete ui->pushButton_4_6;
}


void MainWindow::on_wrongButton_1_1_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_1_2_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_1_3_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_1_4_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_1_5_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_1_6_clicked()
{
    QSound::play(":/100_wrong.wav");
}

void MainWindow::on_wrongButton_2_1_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_2_2_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_2_3_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_2_4_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_2_5_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_2_6_clicked()
{
    QSound::play(":/100_wrong.wav");
}

void MainWindow::on_wrongButton_3_1_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_3_2_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_3_3_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_3_4_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_3_5_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_3_6_clicked()
{
    QSound::play(":/100_wrong.wav");
}

void MainWindow::on_wrongButton_4_1_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_4_2_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_4_3_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_4_4_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_4_5_clicked()
{
    QSound::play(":/100_wrong.wav");
}
void MainWindow::on_wrongButton_4_6_clicked()
{
    QSound::play(":/100_wrong.wav");
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
