#include "chat.h"
#include "ui_chat.h"
#include "login.h"
chat::chat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
}

chat::~chat()
{
    delete ui;
}
