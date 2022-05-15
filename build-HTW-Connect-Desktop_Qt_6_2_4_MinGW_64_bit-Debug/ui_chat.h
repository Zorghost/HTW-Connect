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
    QListWidget *listWidget1;
    QLabel *label_4;

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
        listWidget1 = new QListWidget(chat);
        new QListWidgetItem(listWidget1);
        new QListWidgetItem(listWidget1);
        new QListWidgetItem(listWidget1);
        new QListWidgetItem(listWidget1);
        new QListWidgetItem(listWidget1);
        listWidget1->setObjectName(QString::fromUtf8("listWidget1"));
        listWidget1->setGeometry(QRect(10, 50, 201, 221));
        listWidget1->setProperty("showDropIndicator", QVariant(true));
        listWidget1->setLayoutMode(QListView::Batched);
        label_4 = new QLabel(chat);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 610, 171, 16));
        QFont font;
        font.setPointSize(13);
        font.setItalic(true);
        label_4->setFont(font);
        plainTextEdit->raise();
        listWidget->raise();
        label->raise();
        pushButton->raise();
        listWidget_2->raise();
        label_2->raise();
        listWidget->raise();
        label_4->raise();

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QDialog *chat)
    {
        chat->setWindowTitle(QCoreApplication::translate("chat", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("chat", "Connected Friends ", nullptr));
        pushButton->setText(QCoreApplication::translate("chat", "send", nullptr));
        label_2->setText(QCoreApplication::translate("chat", "Studieng\303\244nge", nullptr));

        const bool __sortingEnabled = listWidget1->isSortingEnabled();
        listWidget1->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget1->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("chat", "Ingenieurinformatik", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget1->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("chat", "Angewandte Informatik", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget1->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("chat", "Bauingenieurwesen", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget1->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("chat", "Computer Engineering", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget1->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("chat", "Elektrotechnik", nullptr));
        listWidget1->setSortingEnabled(__sortingEnabled);

        label_4->setText(QCoreApplication::translate("chat", "Welcome To The Chat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
