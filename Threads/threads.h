#ifndef THREADS_H
#define THREADS_H

#include <QMainWindow>

namespace Ui {
class Threads;
}
class NotePad;

class Threads : public QMainWindow
{
    Q_OBJECT

public:
    explicit Threads(QWidget *parent = nullptr);
    ~Threads();

private slots:
    void on_Open_clicked();

    void on_actionImages_triggered();

public:
    Ui::Threads *ui;
    NotePad *mPaths;
};

#endif // THREADS_H
