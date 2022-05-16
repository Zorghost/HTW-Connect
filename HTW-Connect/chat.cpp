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

void chat::on_pushButton_2_clicked()
{   Login conn ;
    ui->label_3->setText("");

    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery* qry_kontakt = new QSqlQuery(conn.mydb);

    qry_kontakt->prepare("select message from messages where ziel = 'Angewandte'");

    qry_kontakt->exec();

    model->setQuery(*qry_kontakt);

    ui->listView->setModel(model);

    qDebug() <<(model -> rowCount());

}


void chat::on_pushButton_3_clicked()
{
    ui->label_3->setText("");
    Login conn ;
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery* qry_kontakt = new QSqlQuery(conn.mydb);

    qry_kontakt->prepare("select message from messages where ziel = 'Bauingenieurwesen'");

    qry_kontakt->exec();

    model->setQuery(*qry_kontakt);

    ui->listView->setModel(model);

    qDebug() <<(model -> rowCount());
}


void chat::on_pushButton_4_clicked()
{
    ui->label_3->setText("");
    Login conn ;
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery* qry_kontakt = new QSqlQuery(conn.mydb);

    qry_kontakt->prepare("select message from messages where ziel = 'Ingenieurinformatik'");

    qry_kontakt->exec();

    model->setQuery(*qry_kontakt);

    ui->listView->setModel(model);

    qDebug() <<(model -> rowCount());

}


void chat::on_chat_accepted()
{

}


void chat::on_pushButton_6_clicked()
{
    ui->label_3->setText("");
    Login conn ;
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery* qry_kontakt = new QSqlQuery(conn.mydb);

    qry_kontakt->prepare("select message from messages where ziel = 'Maschinenbau'");

    qry_kontakt->exec();

    model->setQuery(*qry_kontakt);

    ui->listView->setModel(model);

    qDebug() <<(model -> rowCount());
}


void chat::on_pushButton_5_clicked()
{
    ui->label_3->setText("");
    Login conn ;
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery* qry_kontakt = new QSqlQuery(conn.mydb);

    qry_kontakt->prepare("select message from messages where ziel = 'Fahrzeugtechnik'");

    qry_kontakt->exec();

    model->setQuery(*qry_kontakt);

    ui->listView->setModel(model);

    qDebug() <<(model -> rowCount());
}


void chat::on_pushButton_clicked()
{
    Login conn ;


    QSqlQuery* qry_in = new QSqlQuery(conn.mydb);

    qry_in->prepare("INSERT INTO messages (idmessage, message, from, ziel, date) VALUES (1, 'John', 'Doe', 'zemdfe', 'sdfmgrm')");

    qry_in->exec();



}



