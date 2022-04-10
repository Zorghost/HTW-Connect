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
    QPushButton *pushButton;
    QListWidget *listWidget_2;
    QLabel *label_2;
    QListView *listView;
    QListView *listView_2;
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
        pushButton = new QPushButton(chat);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(910, 640, 75, 24));
        listWidget_2 = new QListWidget(chat);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(215, 31, 781, 511));
        label_2 = new QLabel(chat);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 30, 181, 16));
        listView = new QListView(chat);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 50, 201, 221));
        listView_2 = new QListView(chat);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));
        listView_2->setGeometry(QRect(10, 310, 201, 231));
        label_3 = new QLabel(chat);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 290, 201, 20));
        plainTextEdit->raise();
        listWidget->raise();
        label->raise();
        pushButton->raise();
        listWidget_2->raise();
        label_2->raise();
        listView->raise();
        listView_2->raise();
        label_3->raise();

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QDialog *chat)
    {
        chat->setWindowTitle(QCoreApplication::translate("chat", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("chat", "Connected Friends ", nullptr));
        pushButton->setText(QCoreApplication::translate("chat", "send", nullptr));
        label_2->setText(QCoreApplication::translate("chat", "Rooms", nullptr));
        label_3->setText(QCoreApplication::translate("chat", "Contacts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
