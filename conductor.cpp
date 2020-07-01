#include <iostream>
#include <string>
#include "conductor.h"

using namespace std;
// Constructores
Conductor::Conductor(string nombre, int edad,string dni, string status, bool estado)
        : Persona(nombre, edad, dni, status) {
    setEstado(estado);
}
Conductor::Conductor(){}
//Metodos de la clase

void Conductor::setEstado(bool a){
    estado=a;
}
void Conductor::setCoche(Coche carro){
    coche=carro;
}
bool Conductor::getEstado(){
    return estado;
}
Coche Conductor::getCoche(){
    return coche;
}
