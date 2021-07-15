#ifndef CLIENTE_H
#define CLIENTE_H

#include <QObject>

class Cliente : public QObject
{
    Q_OBJECT

public:
    explicit Cliente(QObject *parent = nullptr);
    Cliente(QString cedula,QString nombre, QString telefono, QString correo, QString direccion);

    //Metodo para mostrar los datos
    QString mostrar();

private:
    //Inicializamos las variables para los datos del comprador
    QString m_cedula;
    QString m_nombre;
    QString m_telefono;
    QString m_correo;
    QString m_direccion;

signals:

};

#endif // CLIENTE_H
