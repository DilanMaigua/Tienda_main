#include "cliente.h"

Cliente::Cliente(QObject *parent) : QObject(parent)
{
    m_cedula="9999999999";
    m_nombre= "Consumidor final";
    m_telefono= " ";
    m_correo= " ";
    m_direccion= " ";
}
Cliente::Cliente(QString cedula,QString nombre, QString telefono, QString correo, QString direccion)
{
    m_cedula=cedula;
    m_nombre=nombre;
    m_telefono=telefono;
    m_correo=correo;
    m_direccion=direccion;
}

QString Cliente::mostrar()
{
    //Funcion que nos sirve para mostrar los datos del comprador
    return "Cedula: " + m_cedula + "\nNombre: " + m_nombre + "\nTelefono: " +
            m_telefono + "\nCorreo: " + m_correo + "\nDireccion: " + m_direccion;
}
