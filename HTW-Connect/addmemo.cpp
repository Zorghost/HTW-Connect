#include "addmemo.h"
#include "ui_addmemo.h"

addMemo::addMemo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addMemo)
{
    ui->setupUi(this);
}

addMemo::~addMemo()
{
    delete ui;
}
