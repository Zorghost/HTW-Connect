/********************************************************************************
** Form generated from reading UI file 'addmemo.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMO_H
#define UI_ADDMEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_addMemo
{
public:
    QLabel *label;
    QPushButton *addMemoBack;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *addMemo)
    {
        if (addMemo->objectName().isEmpty())
            addMemo->setObjectName(QString::fromUtf8("addMemo"));
        addMemo->resize(750, 610);
        label = new QLabel(addMemo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 10, 331, 101));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        addMemoBack = new QPushButton(addMemo);
        addMemoBack->setObjectName(QString::fromUtf8("addMemoBack"));
        addMemoBack->setGeometry(QRect(630, 560, 91, 31));
        label_2 = new QLabel(addMemo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 160, 61, 16));
        label_3 = new QLabel(addMemo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 200, 49, 16));
        label_4 = new QLabel(addMemo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 240, 49, 16));
        dateEdit = new QDateEdit(addMemo);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(190, 160, 110, 22));
        timeEdit = new QTimeEdit(addMemo);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(190, 200, 118, 22));
        plainTextEdit = new QPlainTextEdit(addMemo);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(140, 260, 251, 171));
        pushButton = new QPushButton(addMemo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 470, 75, 24));

        retranslateUi(addMemo);

        QMetaObject::connectSlotsByName(addMemo);
    } // setupUi

    void retranslateUi(QDialog *addMemo)
    {
        addMemo->setWindowTitle(QCoreApplication::translate("addMemo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addMemo", "Create your Todo here", nullptr));
        addMemoBack->setText(QCoreApplication::translate("addMemo", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("addMemo", "Date :", nullptr));
        label_3->setText(QCoreApplication::translate("addMemo", "Time :", nullptr));
        label_4->setText(QCoreApplication::translate("addMemo", "Todo :", nullptr));
        pushButton->setText(QCoreApplication::translate("addMemo", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addMemo: public Ui_addMemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMO_H
