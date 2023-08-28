#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <iostream>

class fecha
{

private:
    int _dia;
    int _mes;
    int _anio;
    void restarDia(int dias);
    void agregarDia(int dias);
public:
    void agregarDias(int dias);
    fecha();
    fecha(int dia,int mes,int anio);
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);
    int getDia();
    int getMes();
    int getAnio();
    std::string toString();
};


#endif // FECHA_H_INCLUDED
