#ifndef REGISTER_H
#define REGISTER_H
#include "login.h"
#include <QDialog>

#include "chat.h"


namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();
    QString Rusername, Rpassword ;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Register *ui;
   // QSqlDatabase mydb;
    chat *chat;


};

#endif // REGISTER_H
