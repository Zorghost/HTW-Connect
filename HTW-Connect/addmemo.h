#ifndef ADDMEMO_H
#define ADDMEMO_H

#include <QDialog>

namespace Ui {
class addMemo;
}

class addMemo : public QDialog
{
    Q_OBJECT

public:
    explicit addMemo(QWidget *parent = nullptr);
    ~addMemo();

private:
    Ui::addMemo *ui;
};

#endif // ADDMEMO_H
