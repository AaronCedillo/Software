#include "threads.h"
#include "ui_threads.h"

Threads::Threads(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Threads)
{
    ui->setupUi(this);
}

Threads::~Threads()
{
    delete ui;
}
