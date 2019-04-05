#include "notepad.h"

#include "QDebug"

NotePad::NotePad(int Tiempo, QObject *parent) : QThread(parent)
{
    mTiempo = Tiempo;
}

void NotePad::run(){

    foreach(QFileInfo Images, ImagesPaths.entryInfoList()){

        qDebug() << Images.completeBaseName() + "." + Images.suffix();
    }
}
