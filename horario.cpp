#include <iostream>
#include "horario.h"
#include "ctime"


horario::horario()
{
    time_t t = time(NULL);
    std::cout << t;
    struct tm *f = localtime(&t);
    _segundo = f ->tm_sec;
    _minuto = f->tm_min;
    _hora = f-> tm_hour;
}
horario::horario(int segundo,int minuto,int hora)
{
    setSegundo(segundo);
    setMinuto(minuto);
    setHora(hora);

}
void horario::setSegundo(int segundo)
{
    if(segundo<60&&segundo>0)
    {

        _segundo=segundo;
    }
    else
    {
        segundo=1;
    }
}
void horario::setMinuto(int minuto)
{
    if(minuto<60&&minuto>0)
    {

        _minuto=minuto;
    }
    else
    {
        minuto=1;
    }
}
void horario::setHora(int hora)
{
    if(hora<24&&hora<0)
    {
        _hora=hora;
    }

}
int horario::getSegundo()
{
    return _segundo;
}
int horario::getMinuto()
{
    return _minuto;
}
int horario::getHora()
{
    return _hora;
}
std::string horario::toString()
{
    std::string valorADevolver;
    valorADevolver= std::to_string(_hora) + ":" + std::to_string(_minuto) + ":" + std::to_string(_segundo);
    return valorADevolver;

}


