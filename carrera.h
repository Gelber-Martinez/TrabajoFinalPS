#ifndef CARRERA_H
#define CARRERA_H
#include "lugar.h"
#include "conductor.h"
class Carrera{
protected:
    Conductor usuario;
    Lugar lugar;
    bool estadoViaje;
public:
    Carrera();
    void setUsuario(Conductor a);
    void setLugar(Lugar a);
    void setEstadoViaje(bool a);
    void datosViaje();
    Conductor getUsuario();
    Lugar getLugar();
    bool getEstadoViaje();
};
#endif
