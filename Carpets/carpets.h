#ifndef CARPETS_H
#define CARPETS_H

#include <QMainWindow>

namespace Ui {
class Carpets;
}

class Carpets : public QMainWindow
{
    Q_OBJECT

public:
    explicit Carpets(QWidget *parent = nullptr);
    ~Carpets();

private:
    Ui::Carpets *ui;
};

#endif // CARPETS_H
