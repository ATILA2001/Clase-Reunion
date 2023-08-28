#ifndef REUNION_H_INCLUDED
#define REUNION_H_INCLUDED
#include "fechahorario.h"
#include "persona.h"


class Reunion{

  public:
    fechaHorario getFechaHorario();
    std::string getLugar();
    std::string getTema();
    int getDuracion();
    int getCantidadIntegrantes();
    persona getIntegrante(int indice);
    std::string toString();
    //std::vector<Persona> getIntegrantes();

    void setFechaHorario(fechaHorario fechaHorario);
    void setLugar(std::string lugar);
    void setTema(std::string tema);
    void setDuracion(int duracion);
    void setIntegrante(persona integrante, int indice);

    Reunion(int cantidadIntegrantes);
    ~Reunion();

  private:
    fechaHorario _fechaHorario;
    std::string _lugar, _tema;
    int _duracion, _cantidadIntegrantes;
    persona *_integrantes;
};



#endif // REUNION_H_INCLUDED
