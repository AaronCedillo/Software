#include "password.h"
#include "ui_password.h"

#include "QDebug"
#include "QMessageBox"
#include "QFile"

PassWord::PassWord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PassWord)
{
    ui->setupUi(this);

    //this -> setWindowIcon();

    QImage padlock;
    QLabel *Frame = ui -> IconPassword;
    padlock.load(":/password.ico");
    padlock = padlock.scaled(Frame -> width(), Frame -> height(),
                             Qt::AspectRatioMode::IgnoreAspectRatio);
    ui -> IconPassword -> setPixmap(QPixmap::fromImage(padlock));
    ui -> IconPassword -> show();
}

PassWord::~PassWord()
{
    delete ui;
}

void PassWord::on_PassWord_2_returnPressed()
{
    if(ui -> PassWord_2 -> text() != "1234") {
        QMessageBox::warning(this, "Error", "Contraseña Incorrecta");
    } else {
        PassWord::close();
    }

    QString filename = "images.txt";
    QFile file(filename);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    qDebug() << file.readAll();
    //file.close();
}
