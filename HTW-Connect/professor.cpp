#include "professor.h"
#include "ui_professor.h"

professor::professor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::professor)
{
    ui->setupUi(this);
}

professor::~professor()
{
    delete ui;
}

void professor::on_pushButton_clicked()
{
    hide();
    nachrichten = new class::nachrichten(this);
    nachrichten->show();
}


void professor::on_pushButton_4_clicked()
{
    hide();
    chat = new class::chat(this);
    chat->show();
}

