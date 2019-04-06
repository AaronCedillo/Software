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
    ui -> setupUi(this);

    ui -> textEdit -> hide();

    ui -> Open -> setGeometry(280, 120, 111, 31);


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
    mPaths -> ImagesPaths = Dir;
    mPaths -> start();
}

void Threads::on_actionEditarTexto_triggered()
{
    PassWord P(this);
    P.exec();

    if(P.close()) {

        ui -> textEdit->show();
        Threads::resize(391,342);
        ui -> Open -> setGeometry(280, 250, 111, 31);

        QString filename = "C:/images.txt";
        QFile fileToOpen;
        fileToOpen.setFileName(filename);

        fileToOpen.open(QIODevice::ReadOnly | QIODevice::Text);

        QTextStream streams(&fileToOpen);
        QString Text = streams.readAll();
        ui -> textEdit -> setText(Text + "   ");
    }
}

void Threads::on_actionBorrar_triggered()
{
    PassWord P(this);
    P.exec();
}
