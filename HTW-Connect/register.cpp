#include "register.h"
#include "ui_register.h"
#include "QMessageBox"
Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);

    //mydb = QSqlDatabase::addDatabase("QSQLITE");
   // mydb.setDatabaseName("C:/Users/Altar/Desktop/Git/HTW-Connect/Database/Database.db");
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_clicked()
{
    Rusername = ui->lineEdit->text();
    Rpassword = ui->lineEdit_2->text();

   /* if(!mydb.isOpen()){
        qDebug()<<"Failed to open the databse";
        return;
    };

    QSqlQuery qry;

    if(qry.exec("insert into users (username,password) values ('"+Rusername+"','"+Rpassword+"')"))
    {
        QMessageBox::information(this , tr("Message"), tr("wrong or empty password/username"));
        hide();
        chat = new class::chat(this);
        chat->show();

}*/
}


void Register::on_pushButton_2_clicked()
{
    hide();
   //login = new class::Login(this);
   //login->show();
}

