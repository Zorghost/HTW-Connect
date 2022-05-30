#include "memo.h"
#include "ui_memo.h"
#include <QTimer>
#include <QDateTime>

Memo::Memo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Memo)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer , SIGNAL(timeout()),this , SLOT(showTime()));
    timer->start();
}

void Memo::showTime()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->clock->setText(time_text);
}

Memo::~Memo()
{
    delete ui;
}
