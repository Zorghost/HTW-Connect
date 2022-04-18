#ifndef LOGIN_H
#define LOGIN_H
#include "chat.h"
#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Register;
class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();
    QString username, password ;

private slots:
    void on_pushButton_clicked();

    void on_label_4_linkActivated(const QString &link);

    void on_pushButton_2_clicked();

private:
    QSqlDatabase mydb;
    Ui::Login *ui;
    chat *chat;



};
#endif // LOGIN_H
