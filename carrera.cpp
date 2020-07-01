#include <iostream>
#include <math.h>
#include <string>
#include "carrera.h"

using namespace std;
Carrera::Carrera(){

}
void Carrera::setUsuario(Conductor a){
    usuario=a;
}
void Carrera::setLugar(Lugar a){
    lugar=a;
}
void Carrera::setEstadoViaje(bool a){
    estadoViaje=a;
}
Conductor Carrera::getUsuario(){
    return usuario;
}
Lugar Carrera::getLugar(){
    return lugar;
}
bool Carrera::getEstadoViaje(){
    return estadoViaje;
}
