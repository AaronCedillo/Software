#include "threads.h"
#include "ui_threads.h"

#include "QFileDialog"
#include "QDebug"

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
    QString Dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                      "/home",
                                      QFileDialog::ShowDirsOnly |
                                      QFileDialog::DontResolveSymlinks);
    QDir Directory(Dir);

    foreach(QFileInfo images, Directory.entryInfoList()){
        qDebug() << images.completeBaseName() + "." + images.suffix();
    }
}
