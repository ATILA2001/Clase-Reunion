#ifndef HORARIO_H_INCLUDED
#define HORARIO_H_INCLUDED

class horario
{

private:
    int _segundo;
    int _minuto;
    int _hora;
public:
    horario();
    horario(int segundo,int minuto,int hora);
    void setSegundo(int segundo);
    void setMinuto(int minuto);
    void setHora(int hora);
    int getSegundo();
    int getMinuto();
    int getHora();
    std::string toString();
};


#endif // HORARIO_H_INCLUDED
