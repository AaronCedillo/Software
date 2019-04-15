#include "carpets.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Carpets w;
    w.show();

    return a.exec();
}
