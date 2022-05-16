/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QListWidget *listWidget;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QPushButton *send;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QListView *listView;
    QLabel *label_3;

    void setupUi(QDialog *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QString::fromUtf8("chat"));
        chat->resize(1276, 674);
        listWidget = new QListWidget(chat);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(1005, 30, 271, 651));
        label = new QLabel(chat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1010, 10, 161, 16));
        plainTextEdit = new QPlainTextEdit(chat);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setEnabled(true);
        plainTextEdit->setGeometry(QRect(260, 550, 731, 81));
        plainTextEdit->setFrameShadow(QFrame::Sunken);
        send = new QPushButton(chat);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(910, 640, 75, 24));
        label_2 = new QLabel(chat);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 30, 181, 16));
        label_4 = new QLabel(chat);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 610, 171, 16));
        QFont font;
        font.setPointSize(13);
        font.setItalic(true);
        label_4->setFont(font);
        pushButton_2 = new QPushButton(chat);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 100, 201, 24));
        pushButton_3 = new QPushButton(chat);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 130, 201, 24));
        pushButton_4 = new QPushButton(chat);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 160, 201, 24));
        pushButton_5 = new QPushButton(chat);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 190, 201, 24));
        pushButton_6 = new QPushButton(chat);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 220, 201, 24));
        listView = new QListView(chat);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(260, 40, 731, 501));
        label_3 = new QLabel(chat);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(440, 240, 401, 51));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label_3->setFont(font1);
        plainTextEdit->raise();
        listWidget->raise();
        label->raise();
        send->raise();
        label_2->raise();
        label_4->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        listView->raise();
        label_3->raise();

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QDialog *chat)
    {
        chat->setWindowTitle(QCoreApplication::translate("chat", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("chat", "Connected Friends ", nullptr));
        send->setText(QCoreApplication::translate("chat", "send", nullptr));
        label_2->setText(QCoreApplication::translate("chat", "Studieng\303\244nge", nullptr));
        label_4->setText(QCoreApplication::translate("chat", "Welcome To The Chat", nullptr));
        pushButton_2->setText(QCoreApplication::translate("chat", "Angewandte Informatik", nullptr));
        pushButton_3->setText(QCoreApplication::translate("chat", "Bauingenieurwesen", nullptr));
        pushButton_4->setText(QCoreApplication::translate("chat", "Ingenieurinformatik", nullptr));
        pushButton_5->setText(QCoreApplication::translate("chat", "Fahrzeugtechnik", nullptr));
        pushButton_6->setText(QCoreApplication::translate("chat", "Maschinenbau", nullptr));
        label_3->setText(QCoreApplication::translate("chat", "Pick a room to see the messages ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
