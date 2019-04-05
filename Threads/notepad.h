#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QObject>

class NotePad : public QObject
{
    Q_OBJECT
public:
    explicit NotePad(QObject *parent = nullptr);

signals:

public slots:
};

#endif // NOTEPAD_H