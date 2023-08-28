#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

class persona
{

private:
    std::string _nombre;
    std::string _apellido;
public:
    persona();
    persona(std::string nombre,std::string apellido);
    void setNombre(std::string nombre);
    void setApellido(std::string apellido);
    std::string getNombre();
    std::string getApellido();
    std::string getNombreApellido();

};

#endif // PERSONA_H_INCLUDED
