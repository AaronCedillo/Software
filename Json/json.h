#ifndef JSON_H
#define JSON_H

#include <QMainWindow>

namespace Ui {
class Json;
}

class Json : public QMainWindow
{
    Q_OBJECT

public:
    explicit Json(QWidget *parent = nullptr);
    ~Json();

private slots:
    void on_Open_clicked();

    void on_Save_clicked();

private:
    Ui::Json *ui;
};

#endif // JSON_H
