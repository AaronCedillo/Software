#include "json.h"
#include "ui_json.h"

#include "QFileDialog"
#include "QMessageBox"

#include <QJsonDocument>
#include <QJsonObject>

Json::Json(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Json)
{
    ui->setupUi(this);
}

Json::~Json()
{
    delete ui;
}

void Json::on_Open_clicked()
{

}

void Json::on_Save_clicked()
{
    QString json = "json (*.json)";
    QString Document_name = QFileDialog::getSaveFileName(this, tr("Guardar Archivo"), "/",
                                                                                                                 tr("Cualquier Archivo(*);;%1").arg(json), &json,
                                                                                                                 QFileDialog::DontUseNativeDialog);
    if(Document_name.isEmpty()) {
    } else {
        QDate Fecha = ui -> Date -> date();
        QDateTime Hora = ui -> Time -> dateTime();
        const int Valor = ui -> Value -> value();

        QJsonDocument doc;
        QJsonObject obj;
        obj["Fecha"] = Fecha.toString();
        obj["Hora"] = Hora.toString();
        obj["Value"] = Valor;

        doc.setObject(obj);
        QByteArray data_json = doc.toJson();
        QFile output(Document_name + ".json");

        if(output.open(QIODevice::WriteOnly | QIODevice::Text)) {
            output.write(data_json);
            output.close();
            QMessageBox::information(this, tr("Mensaje"), tr("Documento JSON guardado correctamente"));
        } else {
            QMessageBox::critical(this, tr("Error"), output.errorString());
        }
    }
}
