#include "carpets.h"
#include "ui_carpets.h"

Carpets::Carpets(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Carpets)
{
    ui->setupUi(this);
}

Carpets::~Carpets()
{
    delete ui;
}
