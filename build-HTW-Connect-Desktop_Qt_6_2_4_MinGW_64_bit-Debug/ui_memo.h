/********************************************************************************
** Form generated from reading UI file 'memo.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMO_H
#define UI_MEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Memo
{
public:
    QLabel *label;
    QPushButton *createButton;
    QLabel *username;
    QListView *listView;
    QPushButton *exitButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *clock;
    QCalendarWidget *calendarWidget;
    QListView *listView_2;

    void setupUi(QDialog *Memo)
    {
        if (Memo->objectName().isEmpty())
            Memo->setObjectName(QString::fromUtf8("Memo"));
        Memo->resize(848, 610);
        label = new QLabel(Memo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 0, 121, 51));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        createButton = new QPushButton(Memo);
        createButton->setObjectName(QString::fromUtf8("createButton"));
        createButton->setGeometry(QRect(640, 550, 75, 24));
        username = new QLabel(Memo);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(140, 10, 111, 31));
        username->setFont(font);
        listView = new QListView(Memo);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(460, 140, 281, 391));
        exitButton = new QPushButton(Memo);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(510, 550, 75, 24));
        label_2 = new QLabel(Memo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(560, 110, 111, 20));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_3 = new QLabel(Memo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(750, 300, 31, 51));
        QFont font2;
        font2.setPointSize(30);
        label_3->setFont(font2);
        label_4 = new QLabel(Memo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 290, 31, 51));
        label_4->setFont(font2);
        clock = new QLabel(Memo);
        clock->setObjectName(QString::fromUtf8("clock"));
        clock->setGeometry(QRect(510, 70, 201, 41));
        QFont font3;
        font3.setPointSize(25);
        clock->setFont(font3);
        calendarWidget = new QCalendarWidget(Memo);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(40, 140, 312, 190));
        listView_2 = new QListView(Memo);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));
        listView_2->setGeometry(QRect(40, 350, 311, 221));

        retranslateUi(Memo);

        QMetaObject::connectSlotsByName(Memo);
    } // setupUi

    void retranslateUi(QDialog *Memo)
    {
        Memo->setWindowTitle(QCoreApplication::translate("Memo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Memo", "Welcome", nullptr));
        createButton->setText(QCoreApplication::translate("Memo", "Create ", nullptr));
        username->setText(QCoreApplication::translate("Memo", "username", nullptr));
        exitButton->setText(QCoreApplication::translate("Memo", "Exit", nullptr));
        label_2->setText(QCoreApplication::translate("Memo", "01/01/2022", nullptr));
        label_3->setText(QCoreApplication::translate("Memo", ">", nullptr));
        label_4->setText(QCoreApplication::translate("Memo", "<", nullptr));
        clock->setText(QCoreApplication::translate("Memo", "HH : MM : SS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Memo: public Ui_Memo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMO_H
