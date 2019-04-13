#ifndef IMAGES_H
#define IMAGES_H

#include <QMainWindow>

namespace Ui {
class Images;
}

class Images : public QMainWindow
{
    Q_OBJECT

public:
    explicit Images(QWidget *parent = nullptr);
    ~Images();

private:
    Ui::Images *ui;
};

#endif // IMAGES_H
