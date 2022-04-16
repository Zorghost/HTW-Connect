#include "login.h"
#include "ui_login.h"

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
    QString username, password;
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
        chat = new class::chat(this);
        chat->show();

        }
    }
}

