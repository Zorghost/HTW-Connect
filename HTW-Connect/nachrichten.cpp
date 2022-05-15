#include "nachrichten.h"
#include "ui_nachrichten.h"

nachrichten::nachrichten(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nachrichten)
{
    ui->setupUi(this);
}

nachrichten::~nachrichten()
{
    delete ui;
}
