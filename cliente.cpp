#include <iostream>
#include <string>
#include "cliente.h"

using namespace std;
Cliente::Cliente(){

}
Cliente::Cliente(string nombre, int edad,string dni, Lugar desti,string tip,Punto ubicaci): Persona(nombre, edad, dni, status) {
    destino=desti;
    tipo=tip;
    ubicacion=ubicaci;
}
void Cliente::setDestino(Lugar a){
    destino=a;
}
void Cliente::setTipo(string a){
    tipo=a;
}
void Cliente::setUbicacion(Punto a){
    ubicacion=a;
}
Lugar Cliente::getDestino(){
    return destino;
}
string Cliente::getTipo(){
    return tipo;
}
Punto Cliente::getUbicacion(){
    return ubicacion;
}
