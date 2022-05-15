/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_student
{
public:
    QLabel *label_2;
    QLabel *label;
    QLabel *label_9;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton_4;

    void setupUi(QDialog *student)
    {
        if (student->objectName().isEmpty())
            student->setObjectName(QString::fromUtf8("student"));
        student->resize(837, 671);
        label_2 = new QLabel(student);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 40, 51, 21));
        label = new QLabel(student);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 40, 121, 21));
        label_9 = new QLabel(student);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(240, 310, 51, 16));
        pushButton = new QPushButton(student);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 70, 75, 24));
        label_3 = new QLabel(student);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 70, 91, 16));
        label_4 = new QLabel(student);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 70, 16, 16));
        pushButton_2 = new QPushButton(student);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(680, 570, 75, 24));
        label_8 = new QLabel(student);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(240, 270, 51, 16));
        label_7 = new QLabel(student);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(240, 230, 61, 16));
        label_6 = new QLabel(student);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(340, 170, 121, 20));
        label_5 = new QLabel(student);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(190, 70, 101, 16));
        label_10 = new QLabel(student);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(360, 230, 49, 16));
        label_11 = new QLabel(student);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(360, 270, 49, 16));
        label_12 = new QLabel(student);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(360, 310, 49, 16));
        label_13 = new QLabel(student);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(360, 350, 49, 16));
        label_14 = new QLabel(student);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(360, 390, 49, 16));
        label_15 = new QLabel(student);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(240, 350, 41, 16));
        label_16 = new QLabel(student);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(240, 390, 49, 16));
        pushButton_4 = new QPushButton(student);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(390, 70, 75, 24));

        retranslateUi(student);

        QMetaObject::connectSlotsByName(student);
    } // setupUi

    void retranslateUi(QDialog *student)
    {
        student->setWindowTitle(QCoreApplication::translate("student", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("student", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("student", "Guten Tag Herr/Frau", nullptr));
        label_9->setText(QCoreApplication::translate("student", "TM  :", nullptr));
        pushButton->setText(QCoreApplication::translate("student", "Nachrichten", nullptr));
        label_3->setText(QCoreApplication::translate("student", "Heute haben Sie ", nullptr));
        label_4->setText(QCoreApplication::translate("student", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("student", "Logout", nullptr));
        label_8->setText(QCoreApplication::translate("student", "Mathe 2 :", nullptr));
        label_7->setText(QCoreApplication::translate("student", "Mathe 1 :", nullptr));
        label_6->setText(QCoreApplication::translate("student", "Ihre Note", nullptr));
        label_5->setText(QCoreApplication::translate("student", "neue Nachrichten", nullptr));
        label_10->setText(QCoreApplication::translate("student", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("student", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("student", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("student", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("student", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("student", "Prog 1 :", nullptr));
        label_16->setText(QCoreApplication::translate("student", "Prog 2 :", nullptr));
        pushButton_4->setText(QCoreApplication::translate("student", "Chat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student: public Ui_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
