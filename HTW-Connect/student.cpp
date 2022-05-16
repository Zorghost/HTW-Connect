#include "student.h"
#include "chat.h"
#include "ui_student.h"

student::student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::student)
{
    ui->setupUi(this);
}

student::~student()
{
    delete ui;
}

void student::on_pushButton_clicked()
{
    hide();
    nachrichten = new class::nachrichten(this);
    nachrichten->show();
}


void student::on_pushButton_4_clicked()
{
    hide();
    chat = new class::chat(this);
    chat->show();
}

