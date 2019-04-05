#ifndef PASSWORD_H
#define PASSWORD_H

#include <QDialog>

namespace Ui {
class PassWord;
}

class PassWord : public QDialog
{
    Q_OBJECT

public:
    explicit PassWord(QWidget *parent = nullptr);
    ~PassWord();

private slots:
    void on_PassWord_2_returnPressed();

private:
    Ui::PassWord *ui;
};

#endif // PASSWORD_H
