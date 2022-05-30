#include "login.h"
#include "professor.h"
#include "student.h"
#include "ui_chat.h"
#include "ui_login.h"
#include "register.h"
#include <QMessageBox>
Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/Altar/Desktop/Git/HTW-Connect/Database/Database.db");


    if(mydb.open())
        ui->label_3->setText("Connected to db");

}

Login::~Login()
{
    delete ui;

}


void Login::on_pushButton_clicked()
{




    username = ui->lineEdit->text();
    password = ui->lineEdit_2->text();

    if(!mydb.isOpen()){
        qDebug()<<"Failed to open the databse";
        return;
    };

    QSqlQuery qry;

    if(qry.exec("select * from users where username='"+username+"'and password='"+password+"'"))
    {

        int count = 0 ;
        while(qry.next())
        {
            count++;
        }
        if(count==1)
        {
            hide();
            memo = new class::Memo(this);
            memo->show();
        }
        else {
        QMessageBox::information(this , tr("Message"), tr("wrong or empty password/username"));
    }

}
}

void Login::on_label_4_linkActivated(const QString &link)
{

}


void Login::on_pushButton_2_clicked()
{
    Register *regis ;
    hide();
    regis = new class::Register(this);
    regis->show();
}



