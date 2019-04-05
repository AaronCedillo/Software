#include "threads.h"
#include "ui_threads.h"

#include "QFileDialog"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

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

void Threads::on_Open_clicked()
{

}
