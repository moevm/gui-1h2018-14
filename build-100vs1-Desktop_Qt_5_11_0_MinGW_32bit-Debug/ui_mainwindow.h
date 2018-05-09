/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *gameTable;
    QLabel *gameName;
    QTabWidget *roundTable;
    QWidget *start_page;
    QLabel *label;
    QLineEdit *lineEditRead;
    QPushButton *dialogReadButton;
    QPushButton *readButton;
    QWidget *simpleGame_2;
    QPushButton *pushButton_1_4;
    QLabel *question_1_5;
    QLabel *question_1_4;
    QPushButton *pushButton_1_1;
    QLabel *question_1_1;
    QPushButton *pushButton_1_5;
    QLabel *question_1_2;
    QPushButton *pushButton_1_6;
    QLabel *question_1_3;
    QLabel *question_1_6;
    QPushButton *pushButton_1_2;
    QPushButton *pushButton_1_3;
    QPushButton *wrongButton_1_1;
    QPushButton *wrongButton_1_2;
    QPushButton *wrongButton_1_3;
    QPushButton *wrongButton_1_4;
    QPushButton *wrongButton_1_5;
    QPushButton *wrongButton_1_6;
    QWidget *dubleGame_2;
    QPushButton *pushButton_95;
    QLabel *question_10;
    QLabel *question_11;
    QPushButton *pushButton_45;
    QLabel *question_45;
    QPushButton *pushButton_10;
    QLabel *question_55;
    QPushButton *pushButton_11;
    QLabel *question_65;
    QLabel *question_12;
    QPushButton *pushButton_55;
    QPushButton *pushButton_12;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 500);
        MainWindow->setMinimumSize(QSize(800, 500));
        gameTable = new QWidget(MainWindow);
        gameTable->setObjectName(QStringLiteral("gameTable"));
        gameTable->setMinimumSize(QSize(800, 500));
        gameName = new QLabel(gameTable);
        gameName->setObjectName(QStringLiteral("gameName"));
        gameName->setEnabled(true);
        gameName->setGeometry(QRect(170, 30, 441, 61));
        gameName->setMinimumSize(QSize(441, 31));
        QFont font;
        font.setPointSize(24);
        gameName->setFont(font);
        gameName->setAlignment(Qt::AlignCenter);
        roundTable = new QTabWidget(gameTable);
        roundTable->setObjectName(QStringLiteral("roundTable"));
        roundTable->setGeometry(QRect(70, 90, 641, 401));
        roundTable->setTabPosition(QTabWidget::East);
        start_page = new QWidget();
        start_page->setObjectName(QStringLiteral("start_page"));
        label = new QLabel(start_page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 131, 31));
        lineEditRead = new QLineEdit(start_page);
        lineEditRead->setObjectName(QStringLiteral("lineEditRead"));
        lineEditRead->setGeometry(QRect(140, 60, 301, 31));
        dialogReadButton = new QPushButton(start_page);
        dialogReadButton->setObjectName(QStringLiteral("dialogReadButton"));
        dialogReadButton->setGeometry(QRect(450, 40, 101, 31));
        readButton = new QPushButton(start_page);
        readButton->setObjectName(QStringLiteral("readButton"));
        readButton->setGeometry(QRect(450, 80, 101, 31));
        roundTable->addTab(start_page, QString());
        simpleGame_2 = new QWidget();
        simpleGame_2->setObjectName(QStringLiteral("simpleGame_2"));
        pushButton_1_4 = new QPushButton(simpleGame_2);
        pushButton_1_4->setObjectName(QStringLiteral("pushButton_1_4"));
        pushButton_1_4->setGeometry(QRect(191, 200, 271, 31));
        pushButton_1_4->setMinimumSize(QSize(231, 21));
        QFont font1;
        font1.setPointSize(14);
        pushButton_1_4->setFont(font1);
        question_1_5 = new QLabel(simpleGame_2);
        question_1_5->setObjectName(QStringLiteral("question_1_5"));
        question_1_5->setEnabled(true);
        question_1_5->setGeometry(QRect(182, 250, 291, 51));
        question_1_5->setMinimumSize(QSize(251, 31));
        question_1_5->setMouseTracking(true);
        question_1_5->setFrameShape(QFrame::Panel);
        question_1_5->setLineWidth(2);
        question_1_5->setMidLineWidth(1);
        question_1_5->setAlignment(Qt::AlignCenter);
        question_1_4 = new QLabel(simpleGame_2);
        question_1_4->setObjectName(QStringLiteral("question_1_4"));
        question_1_4->setEnabled(true);
        question_1_4->setGeometry(QRect(182, 190, 291, 51));
        question_1_4->setMinimumSize(QSize(251, 31));
        question_1_4->setMouseTracking(true);
        question_1_4->setFrameShape(QFrame::Panel);
        question_1_4->setLineWidth(2);
        question_1_4->setMidLineWidth(1);
        question_1_4->setAlignment(Qt::AlignCenter);
        pushButton_1_1 = new QPushButton(simpleGame_2);
        pushButton_1_1->setObjectName(QStringLiteral("pushButton_1_1"));
        pushButton_1_1->setGeometry(QRect(190, 20, 271, 31));
        pushButton_1_1->setMinimumSize(QSize(231, 21));
        pushButton_1_1->setFont(font1);
        question_1_1 = new QLabel(simpleGame_2);
        question_1_1->setObjectName(QStringLiteral("question_1_1"));
        question_1_1->setEnabled(true);
        question_1_1->setGeometry(QRect(181, 10, 291, 51));
        question_1_1->setMinimumSize(QSize(251, 31));
        question_1_1->setMouseTracking(true);
        question_1_1->setFrameShape(QFrame::Panel);
        question_1_1->setLineWidth(2);
        question_1_1->setMidLineWidth(1);
        question_1_1->setAlignment(Qt::AlignCenter);
        pushButton_1_5 = new QPushButton(simpleGame_2);
        pushButton_1_5->setObjectName(QStringLiteral("pushButton_1_5"));
        pushButton_1_5->setGeometry(QRect(191, 260, 271, 31));
        pushButton_1_5->setMinimumSize(QSize(231, 21));
        pushButton_1_5->setFont(font1);
        question_1_2 = new QLabel(simpleGame_2);
        question_1_2->setObjectName(QStringLiteral("question_1_2"));
        question_1_2->setEnabled(true);
        question_1_2->setGeometry(QRect(181, 70, 291, 51));
        question_1_2->setMinimumSize(QSize(251, 31));
        question_1_2->setMouseTracking(true);
        question_1_2->setFrameShape(QFrame::Panel);
        question_1_2->setLineWidth(2);
        question_1_2->setMidLineWidth(1);
        question_1_2->setAlignment(Qt::AlignCenter);
        pushButton_1_6 = new QPushButton(simpleGame_2);
        pushButton_1_6->setObjectName(QStringLiteral("pushButton_1_6"));
        pushButton_1_6->setGeometry(QRect(191, 320, 271, 31));
        pushButton_1_6->setMinimumSize(QSize(231, 21));
        pushButton_1_6->setFont(font1);
        question_1_3 = new QLabel(simpleGame_2);
        question_1_3->setObjectName(QStringLiteral("question_1_3"));
        question_1_3->setEnabled(true);
        question_1_3->setGeometry(QRect(181, 130, 291, 51));
        question_1_3->setMinimumSize(QSize(251, 31));
        question_1_3->setMouseTracking(true);
        question_1_3->setFrameShape(QFrame::Panel);
        question_1_3->setLineWidth(2);
        question_1_3->setMidLineWidth(1);
        question_1_3->setAlignment(Qt::AlignCenter);
        question_1_6 = new QLabel(simpleGame_2);
        question_1_6->setObjectName(QStringLiteral("question_1_6"));
        question_1_6->setEnabled(true);
        question_1_6->setGeometry(QRect(182, 310, 291, 51));
        question_1_6->setMinimumSize(QSize(251, 31));
        question_1_6->setMouseTracking(true);
        question_1_6->setFrameShape(QFrame::Panel);
        question_1_6->setLineWidth(2);
        question_1_6->setMidLineWidth(1);
        question_1_6->setAlignment(Qt::AlignCenter);
        pushButton_1_2 = new QPushButton(simpleGame_2);
        pushButton_1_2->setObjectName(QStringLiteral("pushButton_1_2"));
        pushButton_1_2->setGeometry(QRect(190, 80, 271, 31));
        pushButton_1_2->setMinimumSize(QSize(231, 21));
        pushButton_1_2->setFont(font1);
        pushButton_1_3 = new QPushButton(simpleGame_2);
        pushButton_1_3->setObjectName(QStringLiteral("pushButton_1_3"));
        pushButton_1_3->setGeometry(QRect(190, 140, 271, 31));
        pushButton_1_3->setMinimumSize(QSize(231, 21));
        pushButton_1_3->setFont(font1);
        wrongButton_1_1 = new QPushButton(simpleGame_2);
        wrongButton_1_1->setObjectName(QStringLiteral("wrongButton_1_1"));
        wrongButton_1_1->setGeometry(QRect(70, 110, 81, 71));
        wrongButton_1_2 = new QPushButton(simpleGame_2);
        wrongButton_1_2->setObjectName(QStringLiteral("wrongButton_1_2"));
        wrongButton_1_2->setGeometry(QRect(70, 190, 81, 71));
        wrongButton_1_3 = new QPushButton(simpleGame_2);
        wrongButton_1_3->setObjectName(QStringLiteral("wrongButton_1_3"));
        wrongButton_1_3->setGeometry(QRect(70, 270, 81, 71));
        wrongButton_1_4 = new QPushButton(simpleGame_2);
        wrongButton_1_4->setObjectName(QStringLiteral("wrongButton_1_4"));
        wrongButton_1_4->setGeometry(QRect(500, 190, 81, 71));
        wrongButton_1_5 = new QPushButton(simpleGame_2);
        wrongButton_1_5->setObjectName(QStringLiteral("wrongButton_1_5"));
        wrongButton_1_5->setGeometry(QRect(500, 110, 81, 71));
        wrongButton_1_6 = new QPushButton(simpleGame_2);
        wrongButton_1_6->setObjectName(QStringLiteral("wrongButton_1_6"));
        wrongButton_1_6->setGeometry(QRect(500, 270, 81, 71));
        roundTable->addTab(simpleGame_2, QString());
        question_1_6->raise();
        question_1_4->raise();
        question_1_1->raise();
        pushButton_1_4->raise();
        question_1_5->raise();
        pushButton_1_1->raise();
        pushButton_1_5->raise();
        question_1_2->raise();
        pushButton_1_6->raise();
        question_1_3->raise();
        pushButton_1_2->raise();
        pushButton_1_3->raise();
        wrongButton_1_1->raise();
        wrongButton_1_2->raise();
        wrongButton_1_3->raise();
        wrongButton_1_4->raise();
        wrongButton_1_5->raise();
        wrongButton_1_6->raise();
        dubleGame_2 = new QWidget();
        dubleGame_2->setObjectName(QStringLiteral("dubleGame_2"));
        dubleGame_2->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dubleGame_2->sizePolicy().hasHeightForWidth());
        dubleGame_2->setSizePolicy(sizePolicy);
        pushButton_95 = new QPushButton(dubleGame_2);
        pushButton_95->setObjectName(QStringLiteral("pushButton_95"));
        pushButton_95->setGeometry(QRect(101, 200, 271, 31));
        pushButton_95->setMinimumSize(QSize(231, 21));
        pushButton_95->setFont(font1);
        question_10 = new QLabel(dubleGame_2);
        question_10->setObjectName(QStringLiteral("question_10"));
        question_10->setEnabled(true);
        question_10->setGeometry(QRect(92, 250, 291, 51));
        question_10->setMinimumSize(QSize(251, 31));
        QFont font2;
        font2.setPointSize(16);
        question_10->setFont(font2);
        question_10->setMouseTracking(true);
        question_10->setFrameShape(QFrame::Panel);
        question_10->setLineWidth(2);
        question_10->setMidLineWidth(1);
        question_10->setAlignment(Qt::AlignCenter);
        question_11 = new QLabel(dubleGame_2);
        question_11->setObjectName(QStringLiteral("question_11"));
        question_11->setEnabled(true);
        question_11->setGeometry(QRect(92, 190, 291, 51));
        question_11->setMinimumSize(QSize(251, 31));
        question_11->setFont(font2);
        question_11->setMouseTracking(true);
        question_11->setFrameShape(QFrame::Panel);
        question_11->setLineWidth(2);
        question_11->setMidLineWidth(1);
        question_11->setAlignment(Qt::AlignCenter);
        pushButton_45 = new QPushButton(dubleGame_2);
        pushButton_45->setObjectName(QStringLiteral("pushButton_45"));
        pushButton_45->setGeometry(QRect(100, 20, 271, 31));
        pushButton_45->setMinimumSize(QSize(231, 21));
        pushButton_45->setFont(font1);
        question_45 = new QLabel(dubleGame_2);
        question_45->setObjectName(QStringLiteral("question_45"));
        question_45->setEnabled(true);
        question_45->setGeometry(QRect(91, 10, 291, 51));
        question_45->setMinimumSize(QSize(251, 31));
        question_45->setFont(font2);
        question_45->setMouseTracking(true);
        question_45->setFrameShape(QFrame::Panel);
        question_45->setLineWidth(2);
        question_45->setMidLineWidth(1);
        question_45->setAlignment(Qt::AlignCenter);
        pushButton_10 = new QPushButton(dubleGame_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(101, 260, 271, 31));
        pushButton_10->setMinimumSize(QSize(231, 21));
        pushButton_10->setFont(font1);
        question_55 = new QLabel(dubleGame_2);
        question_55->setObjectName(QStringLiteral("question_55"));
        question_55->setEnabled(true);
        question_55->setGeometry(QRect(91, 70, 291, 51));
        question_55->setMinimumSize(QSize(251, 31));
        question_55->setFont(font2);
        question_55->setMouseTracking(true);
        question_55->setFrameShape(QFrame::Panel);
        question_55->setLineWidth(2);
        question_55->setMidLineWidth(1);
        question_55->setAlignment(Qt::AlignCenter);
        pushButton_11 = new QPushButton(dubleGame_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(101, 320, 271, 31));
        pushButton_11->setMinimumSize(QSize(231, 21));
        pushButton_11->setFont(font1);
        question_65 = new QLabel(dubleGame_2);
        question_65->setObjectName(QStringLiteral("question_65"));
        question_65->setEnabled(true);
        question_65->setGeometry(QRect(91, 130, 291, 51));
        question_65->setMinimumSize(QSize(251, 31));
        question_65->setFont(font2);
        question_65->setMouseTracking(true);
        question_65->setFrameShape(QFrame::Panel);
        question_65->setLineWidth(2);
        question_65->setMidLineWidth(1);
        question_65->setAlignment(Qt::AlignCenter);
        question_12 = new QLabel(dubleGame_2);
        question_12->setObjectName(QStringLiteral("question_12"));
        question_12->setEnabled(true);
        question_12->setGeometry(QRect(92, 310, 291, 51));
        question_12->setMinimumSize(QSize(251, 31));
        question_12->setFont(font2);
        question_12->setMouseTracking(true);
        question_12->setFrameShape(QFrame::Panel);
        question_12->setLineWidth(2);
        question_12->setMidLineWidth(1);
        question_12->setAlignment(Qt::AlignCenter);
        pushButton_55 = new QPushButton(dubleGame_2);
        pushButton_55->setObjectName(QStringLiteral("pushButton_55"));
        pushButton_55->setGeometry(QRect(100, 80, 271, 31));
        pushButton_55->setMinimumSize(QSize(231, 21));
        pushButton_55->setFont(font1);
        pushButton_12 = new QPushButton(dubleGame_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(100, 140, 271, 31));
        pushButton_12->setMinimumSize(QSize(231, 21));
        pushButton_12->setFont(font1);
        roundTable->addTab(dubleGame_2, QString());
        MainWindow->setCentralWidget(gameTable);
        roundTable->raise();
        gameName->raise();

        retranslateUi(MainWindow);

        roundTable->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        gameName->setText(QApplication::translate("MainWindow", "100 vs 1", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        dialogReadButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        readButton->setText(QApplication::translate("MainWindow", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        roundTable->setTabText(roundTable->indexOf(start_page), QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \320\270\320\263\321\200\321\213", nullptr));
        pushButton_1_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_1_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_1_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_1_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_1_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_1_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        wrongButton_1_1->setText(QApplication::translate("MainWindow", "\320\272\321\200\320\265\321\201\321\202\320\270\320\272", nullptr));
        wrongButton_1_2->setText(QApplication::translate("MainWindow", "\320\272\321\200\320\265\321\201\321\202\320\270\320\272", nullptr));
        wrongButton_1_3->setText(QApplication::translate("MainWindow", "\320\272\321\200\320\265\321\201\321\202\320\270\320\272", nullptr));
        wrongButton_1_4->setText(QApplication::translate("MainWindow", "\320\272\321\200\320\265\321\201\321\202\320\270\320\272", nullptr));
        wrongButton_1_5->setText(QApplication::translate("MainWindow", "\320\272\321\200\320\265\321\201\321\202\320\270\320\272", nullptr));
        wrongButton_1_6->setText(QApplication::translate("MainWindow", "\320\272\321\200\320\265\321\201\321\202\320\270\320\272", nullptr));
        roundTable->setTabText(roundTable->indexOf(simpleGame_2), QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\321\202\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
        pushButton_95->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_45->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_11->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_55->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "3", nullptr));
        roundTable->setTabText(roundTable->indexOf(dubleGame_2), QApplication::translate("MainWindow", "\320\224\320\262\320\276\320\271\320\275\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
