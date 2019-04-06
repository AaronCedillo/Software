#include "notepad.h"

#include "QDebug"
#include "QFile"
#include "QFileDialog"

NotePad::NotePad(int Tiempo, QObject *parent) : QThread(parent)
{
    mTiempo = Tiempo;
}

void NotePad::run(){

    QFile arch;
    QString name = "C:/images.txt";
    arch.setFileName(name);
    arch.open(QIODevice::WriteOnly | QIODevice::Text);

    foreach(QFileInfo Images, ImagesPaths.entryInfoList()){

        QString Files = Images.completeBaseName() + "." + Images.suffix();
        qDebug() << Files;
        //arch.write(Files.toUtf8());
        //arch.flush();
        //arch.close();
        //qDebug() << Images.completeBaseName() + "." + Images.suffix();
    }
}
