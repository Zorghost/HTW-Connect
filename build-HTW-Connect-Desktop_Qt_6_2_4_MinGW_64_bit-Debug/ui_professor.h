/********************************************************************************
** Form generated from reading UI file 'professor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFESSOR_H
#define UI_PROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_professor
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *professor)
    {
        if (professor->objectName().isEmpty())
            professor->setObjectName(QString::fromUtf8("professor"));
        professor->resize(685, 605);
        label = new QLabel(professor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 121, 21));
        label_2 = new QLabel(professor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 20, 51, 21));
        label_3 = new QLabel(professor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 60, 91, 16));
        label_4 = new QLabel(professor);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 60, 16, 16));
        label_5 = new QLabel(professor);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(140, 60, 101, 16));
        pushButton = new QPushButton(professor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 60, 75, 24));
        pushButton_2 = new QPushButton(professor);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(600, 570, 75, 24));
        label_6 = new QLabel(professor);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(280, 170, 101, 16));
        label_7 = new QLabel(professor);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 230, 61, 16));
        label_8 = new QLabel(professor);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(170, 270, 51, 16));
        label_9 = new QLabel(professor);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(170, 310, 51, 16));
        lineEdit = new QLineEdit(professor);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(280, 230, 111, 22));
        lineEdit_2 = new QLineEdit(professor);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 270, 113, 22));
        lineEdit_3 = new QLineEdit(professor);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(280, 310, 113, 22));
        pushButton_3 = new QPushButton(professor);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 360, 75, 24));
        pushButton_4 = new QPushButton(professor);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(340, 60, 75, 24));

        retranslateUi(professor);

        QMetaObject::connectSlotsByName(professor);
    } // setupUi

    void retranslateUi(QDialog *professor)
    {
        professor->setWindowTitle(QCoreApplication::translate("professor", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("professor", "Guten Tag Herr/Frau", nullptr));
        label_2->setText(QCoreApplication::translate("professor", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("professor", "Heute haben Sie ", nullptr));
        label_4->setText(QCoreApplication::translate("professor", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("professor", "neue Nachrichten", nullptr));
        pushButton->setText(QCoreApplication::translate("professor", "Nachrichten", nullptr));
        pushButton_2->setText(QCoreApplication::translate("professor", "Logout", nullptr));
        label_6->setText(QCoreApplication::translate("professor", "Note hinzuf\303\274gen", nullptr));
        label_7->setText(QCoreApplication::translate("professor", "Modul :", nullptr));
        label_8->setText(QCoreApplication::translate("professor", "Note :", nullptr));
        label_9->setText(QCoreApplication::translate("professor", "Student :", nullptr));
        pushButton_3->setText(QCoreApplication::translate("professor", "hinf\303\274gen", nullptr));
        pushButton_4->setText(QCoreApplication::translate("professor", "Chat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class professor: public Ui_professor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSOR_H
