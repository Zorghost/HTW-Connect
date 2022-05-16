/********************************************************************************
** Form generated from reading UI file 'nachrichten.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NACHRICHTEN_H
#define UI_NACHRICHTEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nachrichten
{
public:
    QLabel *label;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QListView *listView;
    QPushButton *pushButton_2;

    void setupUi(QDialog *nachrichten)
    {
        if (nachrichten->objectName().isEmpty())
            nachrichten->setObjectName(QString::fromUtf8("nachrichten"));
        nachrichten->resize(823, 642);
        label = new QLabel(nachrichten);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(168, 30, 121, 20));
        label_2 = new QLabel(nachrichten);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(610, 20, 81, 16));
        plainTextEdit = new QPlainTextEdit(nachrichten);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setEnabled(true);
        plainTextEdit->setGeometry(QRect(70, 510, 731, 81));
        plainTextEdit->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(nachrichten);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(720, 600, 75, 24));
        label_3 = new QLabel(nachrichten);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(580, 480, 21, 16));
        lineEdit = new QLineEdit(nachrichten);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(610, 480, 171, 22));
        label_4 = new QLabel(nachrichten);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 420, 141, 16));
        scrollArea_2 = new QScrollArea(nachrichten);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(100, 80, 321, 311));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 319, 309));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        listView = new QListView(nachrichten);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(510, 50, 256, 341));
        pushButton_2 = new QPushButton(nachrichten);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 410, 75, 24));

        retranslateUi(nachrichten);

        QMetaObject::connectSlotsByName(nachrichten);
    } // setupUi

    void retranslateUi(QDialog *nachrichten)
    {
        nachrichten->setWindowTitle(QCoreApplication::translate("nachrichten", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("nachrichten", "Nachrichten", nullptr));
        label_2->setText(QCoreApplication::translate("nachrichten", "Kontakte", nullptr));
        pushButton->setText(QCoreApplication::translate("nachrichten", "send", nullptr));
        label_3->setText(QCoreApplication::translate("nachrichten", "To :", nullptr));
        label_4->setText(QCoreApplication::translate("nachrichten", "Nachricht senden : ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("nachrichten", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nachrichten: public Ui_nachrichten {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NACHRICHTEN_H
