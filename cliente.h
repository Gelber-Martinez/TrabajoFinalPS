#ifndef CLIENTE_H
#define CLIENTE_H
#include <string.h>
#include <string>
#include "persona.h"
#include "lugar.h"
#include "punto.h"
using namespace std;
class Cliente: public Persona {
public:
    Cliente();
    Cliente(string nombre, int edad,string dni, Lugar desti,string tip,Punto ubicaci);
    void setDestino(Lugar);
    void setTipo(string);
    void setUbicacion(Punto);
    Lugar getDestino();
    string getTipo();
    Punto getUbicacion();
    void mostrarDatos();
protected:
    Lugar destino;
    string tipo;
    Punto ubicacion;
};
#endif
