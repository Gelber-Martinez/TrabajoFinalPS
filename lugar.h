#ifndef UBICACION_H
#define UBICACION_H
#include <string.h>
#include <string>
#include "punto.h"
using namespace std;
class Lugar{
protected:
    string nombre;
    string direccion;
    float distancia;
    Punto ubicacion;
public:
    Lugar();

    void setNombre(string);
    void setDireccion(string);
    void setDistancia(Punto);
    void setUbicacion(Punto);
    string getNombre();
    string getDireccion();
    float getDistacia();
    Punto getUbicacion();
    void mostrarDatos();
};

#endif
