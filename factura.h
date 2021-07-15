#ifndef FACTURA_H
#define FACTURA_H

#include <QDialog>
#include <QWidget>
#include <QDir>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

namespace Ui {
class Factura;
}

class Factura : public QDialog
{
    Q_OBJECT
    Q_PROPERTY(QString info READ info WRITE setInfo)

public:
    explicit Factura(QWidget *parent = nullptr);
    ~Factura();

    QString info() const;
    void setInfo(const QString &dato);
    //Mediante encapsulamieto podemos tener los datos del cliente para la factura
    void setCliente(QString cliente);
    void setCompra(QString informacion);
    void setSubtotal(QString subtotal);
    void setIva(QString iva);
    void setTotal(QString total);

private slots:
    //Creacion del slot para cuando se pulse el boton de guardar
    void on_pushButton_clicked();

private:
    Ui::Factura *ui;
    QString m_info;
};

#endif // FACTURA_H
