#ifndef CHAT_H
#define CHAT_H
#include <QDialog>
namespace Ui {
class chat;
}

class chat : public QDialog
{
    Q_OBJECT

public:

    explicit chat(QWidget *parent = nullptr);
    ~chat();
    QString normal ;
public :
    Ui::chat *ui;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_chat_accepted();
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_clicked();
};

#endif // CHAT_H
