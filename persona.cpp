#include <iostream>
#include "persona.h"


persona::persona()
{
    _nombre = "";
    _apellido = "";
}
persona::persona(std::string nombre,std::string apellido)
{
    _nombre=nombre;
    _apellido=apellido;
}
void persona::setNombre(std::string nombre)
{
    _nombre=nombre;
}
void persona::setApellido(std::string apellido)
{
    _apellido=apellido;
}
std::string persona::getNombre()
{
    return _nombre;
}
std::string persona::getApellido()
{
    return _apellido;
}
std::string persona::getNombreApellido()
{
    return _nombre + " " + _apellido;
}
