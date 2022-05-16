#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "chat.h"
#include "nachrichten.h"
#include <QDialog>

namespace Ui {
class professor;
}

class professor : public QDialog
{
    Q_OBJECT

public:
    explicit professor(QWidget *parent = nullptr);
    ~professor();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::professor *ui;
    nachrichten *nachrichten;
    chat *chat;
};

#endif // PROFESSOR_H
