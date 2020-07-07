#include <iostream>
#include <math.h>
#include <string>
#include "lugar.h"
//modificando
using namespace std;
Lugar::Lugar(){

}
void Lugar::setNombre(string a){
    nombre=a;
}
void Lugar::setDireccion(string a){
    direccion=a;
}
void Lugar::setUbicacion(Punto a){
    ubicacion=a;
}
void Lugar::setDistancia(Punto a){
    distancia=ubicacion.CalcularDistancia(a);
}
string Lugar::getNombre(){
    return nombre;
}
string Lugar::getDireccion(){
    return direccion;
}
float Lugar::getDistacia(){
    return distancia;
}
Punto Lugar::getUbicacion(){
    return ubicacion;
}
void Lugar::mostrarDatos(){
    cout<<"nombre "<<nombre<<"direccion "<<direccion<<"distancia "<<distancia<<"ubicacion "
        <<ubicacion.getPuntoX()<<ubicacion.getPuntoY();
}
