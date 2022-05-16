#ifndef STUDENT_H
#define STUDENT_H

#include "chat.h"
#include "nachrichten.h"
#include <QDialog>

namespace Ui {
class student;
}

class student : public QDialog
{
    Q_OBJECT

public:
    explicit student(QWidget *parent = nullptr);
    ~student();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::student *ui;
    nachrichten *nachrichten;
    chat *chat;
};

#endif // STUDENT_H
