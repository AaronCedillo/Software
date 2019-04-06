#include "threads.h"
#include "ui_threads.h"
#include "notepad.h"
#include "password.h"

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

    mPaths = new NotePad(100, this);
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
    mPaths -> ImagesPaths = Directory;
    mPaths -> start();
}

void Threads::on_actionEditarTexto_triggered()
{
    PassWord P(this);
    P.exec();
}

void Threads::on_actionBorrar_triggered()
{
    PassWord P(this);
    P.exec();
}
