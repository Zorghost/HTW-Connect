#ifndef MEMO_H
#define MEMO_H

#include <QDialog>

namespace Ui {
class Memo;
}

class Memo : public QDialog
{
    Q_OBJECT

public:
    explicit Memo(QWidget *parent = nullptr);
    ~Memo();

private:
    Ui::Memo *ui;

private slots :
    void showTime();
};

#endif // MEMO_H
