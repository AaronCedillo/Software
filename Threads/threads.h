#ifndef THREADS_H
#define THREADS_H

#include <QMainWindow>

namespace Ui {
class Threads;
}

class Threads : public QMainWindow
{
    Q_OBJECT

public:
    explicit Threads(QWidget *parent = nullptr);
    ~Threads();

private:
    Ui::Threads *ui;
};

#endif // THREADS_H