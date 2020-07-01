#ifndef CONDUCTOR_H
#define CONDUCTOR_H
#include <string.h>
#include <string>
#include "persona.h"
#include "coche.h"
using namespace std;
class Conductor: public Persona {
public:
    Conductor();
    Conductor(string, int,string, string, bool estado);
    void setEstado(bool);
    void setCoche(Coche carro);

    bool getEstado();
    Coche getCoche();

    void mostrarDatos();

protected:
    Coche coche;
    bool estado;

};
#endif
