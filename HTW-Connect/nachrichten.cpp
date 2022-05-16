#include "nachrichten.h"
#include "login.h"
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

void nachrichten::on_pushButton_2_clicked()
{
    Login conn ;
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery* qry_kontakt = new QSqlQuery(conn.mydb);

    qry_kontakt->prepare("select username from users");

    qry_kontakt->exec();

    model->setQuery(*qry_kontakt);

    ui->listView->setModel(model);

    qDebug() <<(model -> rowCount());
}

