#include "json.h"
#include "ui_json.h"

Json::Json(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Json)
{
    ui->setupUi(this);
}

Json::~Json()
{
    delete ui;
}
