#include "password.h"
#include "ui_password.h"

PassWord::PassWord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PassWord)
{
    ui->setupUi(this);
}

PassWord::~PassWord()
{
    delete ui;
}
