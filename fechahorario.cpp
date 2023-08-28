#include <iostream>
#include "fechaHorario.h"
#include "fecha.h"
#include "horario.h"

fecha fechaHorario::getFecha()
{
    return _fecha;
}
horario fechaHorario::getHorario()
{
    return _horario;
}
void fechaHorario::setFecha(fecha fecha)
{
    _fecha=fecha;
}
void fechaHorario::setFecha(int dia,int mes,int anio)
{
    _fecha.setDia(dia);
    _fecha.setMes(mes);
    _fecha.setAnio(anio);
}
void fechaHorario::setHorario(horario horario)
{
    _horario=horario;
}
void fechaHorario::setHorario(int segundo,int minuto, int hora)
{
    _horario.setSegundo(segundo);
    _horario.setMinuto(minuto);
    _horario.setHora(hora);
}
fechaHorario::fechaHorario(fecha fecha,horario horario)
{
    _fecha=fecha;
    _horario=horario;
}
fechaHorario::fechaHorario(int dia,int mes,int anio,int segundo,int minuto, int hora)
{
    _fecha.setDia(dia);
    _fecha.setMes(mes);
    _fecha.setAnio(anio);
    _horario.setSegundo(segundo);
    _horario.setMinuto(minuto);
    _horario.setHora(hora);
}

fechaHorario::fechaHorario()
{

}
std::string fechaHorario::toString()
{
    std::string valorADevolver;
    valorADevolver=_fecha.toString() + ", " + _horario.toString();
    return valorADevolver;
}
