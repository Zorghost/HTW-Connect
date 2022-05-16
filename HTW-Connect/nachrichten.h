#ifndef NACHRICHTEN_H
#define NACHRICHTEN_H

#include <QDialog>

namespace Ui {
class nachrichten;
}

class nachrichten : public QDialog
{
    Q_OBJECT

public:
    explicit nachrichten(QWidget *parent = nullptr);
    ~nachrichten();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::nachrichten *ui;
};

#endif // NACHRICHTEN_H
