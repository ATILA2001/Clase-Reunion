#ifndef FECHAHORARIO_H_INCLUDED
#define FECHAHORARIO_H_INCLUDED

#include "fecha.h"
#include "horario.h"

class fechaHorario
{
public:
    fecha getFecha();
    horario getHorario();
    void setFecha(fecha fecha);
    void setFecha(int dia,int mes,int anio);
    void setHorario(horario horario);
    void setHorario(int segundo,int minuto, int hora);
    fechaHorario(fecha fecha,horario horario);
    fechaHorario();
    fechaHorario(int dia,int mes,int anio,int segundo,int minuto, int hora);
    std::string toString();
private:
    fecha _fecha;
    horario _horario;
};
#endif // FECHAHORARIO_H_INCLUDED
