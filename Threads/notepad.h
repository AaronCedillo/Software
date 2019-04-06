#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QThread>

#include "QDir"

class NotePad : public QThread
{
    Q_OBJECT
public:
    explicit NotePad(int Tiempo, QObject *parent = nullptr);

    int mTiempo;
    QString ImagesPaths;

    void run() override;
signals:

public slots:
};

#endif // NOTEPAD_H
