#include "images.h"
#include "ui_images.h"

Images::Images(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Images)
{
    ui->setupUi(this);
}

Images::~Images()
{
    delete ui;
}
