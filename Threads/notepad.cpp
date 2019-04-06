#include "notepad.h"
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
        QTextStream stream(&arch);

        QString Files = Images.completeBaseName() + "." + Images.suffix();

        stream << Files;
        arch.flush();
        //arch.close();
        //qDebug() << Images.completeBaseName() + "." + Images.suffix();
    }
}
