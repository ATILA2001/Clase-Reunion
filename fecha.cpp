#include <iostream>
#include "fecha.h"
#include "ctime"

void fecha::restarDia(int dias)
{
    dias=dias*-1;
    for(int i=0; i<dias; i++)
    {
        if(_dia>1)
        {
            _dia--;
        }
        else
        {
            if(_mes>1)
            {

                _mes--;
                if(_mes==2&&_anio%4==0)
                {
                    _dia=29;
                }
                else
                {
                    if(_mes==2)
                    {
                        _dia=28;
                    }
                    else
                    {
                        _dia=31;
                    }
                }



            }
            else
            {


                _anio--;
                _mes=12;
                _dia=31;
            }


        }
    }
}
void fecha::agregarDia(int dias)
{
    for(int i=0; i<dias; i++)
    {


        {
            if((_dia<31&&_mes!=2)||(_dia<28&&_mes==2&&_anio%4!=0)||(_dia<29&&_mes==2&&_anio%4==0))
            {
                _dia++;
            }
            else
            {
                if(_mes<12)
                {
                    _mes++;
                    _dia=1;
                }
                else
                {
                    _anio++;
                    _mes=1;
                    _dia=1;
                }
            }
        }
    }
}
void fecha::agregarDias(int dias)
{

    if(dias<0)
    {
        restarDia(dias);
    }
    else
    {
        agregarDia(dias);
    }
}
fecha::fecha()
{
    time_t t = time(NULL);
    std::cout << t;
    struct tm *f = localtime(&t);
    _dia = f ->tm_mday;
    _mes = f->tm_mon + 1;
    _anio = f-> tm_year + 1900;
}
fecha::fecha(int dia,int mes,int anio)
{
    setDia(dia);
    setMes(mes);
    setAnio(anio);

}
void fecha::setDia(int dia)
{
    if(dia<32&&dia>0)
    {

        _dia=dia;
    }
    else
    {
        dia=1;
    }
}
void fecha::setMes(int mes)
{
    if(mes<13&&mes>0)
    {

        _mes=mes;
    }
    else
    {
        mes=1;
    }
}
void fecha::setAnio(int anio)
{
    if(anio>0)
    {
        _anio=anio;
    }

}
int fecha::getDia()
{
    return _dia;
}
int fecha::getMes()
{
    return _mes;
}
int fecha::getAnio()
{
    return _anio;
}
std::string fecha::toString()
{
    std::string valorADevolver;
    valorADevolver= std::to_string(_dia) + "/" + std::to_string(_mes) + "/" + std::to_string(_anio);
    return valorADevolver;

}


