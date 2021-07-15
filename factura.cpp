#include "factura.h"
#include "ui_factura.h"

Factura::Factura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Factura)
{
    ui->setupUi(this);
}

Factura::~Factura()
{
    delete ui;
}

QString Factura::info() const
{
    return m_info;
}

void Factura::setInfo(const QString &info)
{
    m_info=info;
}

void Factura::setCliente(QString cliente){
    ui->outInfo->setPlainText(cliente);
}

void Factura::setCompra(QString mostrar)
{
    ui->outCompras->setPlainText(mostrar);
}

void Factura::setSubtotal(QString subtotal)
{
    ui->outSubtotal->setText(subtotal);
}

void Factura::setIva(QString iva)
{
    ui->outIva->setText(iva);
}

void Factura::setTotal(QString total)
{
    ui->outTotal->setText(total);
}


void Factura::on_pushButton_clicked()
{
    //Funcion para guardar la factura en formato txt
    QDir directorio = QDir::home();
    QString pathArchivo = directorio.absolutePath() + "/Compra.txt";
    QString fileName = QFileDialog::getSaveFileName(this, "Guardar archivo", pathArchivo, "Archivo de texto(*.txt)");
    QFile f(fileName);
    QTextStream out(&f);
    if(!f.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        QMessageBox::warning(this, "Factura", "No se pudo guardar el archivo");
        return;
    }
    out << "Factura:\n " << ui->outInfo->toPlainText() << "\nResumen de la compra:\n" << ui->outCompras->toPlainText() << "\n" ;
    f.close();
    this->hide();
}

