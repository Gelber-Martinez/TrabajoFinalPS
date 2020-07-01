#include "coche.h"
#include <QString>

Coche::Coche() {}
Coche::Coche(QString p, QString m, int c) {
    placa=p;
    marca=m;
    capacidad=c;
    soat=true;
    contadorCoches++;
}
void Coche::setPlaca(QString p){
    placa=p;
}
QString Coche::getPlaca(){
    return placa;
}
void Coche::setMarca(QString m) {
    marca=m;
}
QString Coche::getMarca(){
    return marca;
}
void Coche::setCapacidad(int c){
    capacidad=c;
}
int Coche::getCapacidad(){
    return capacidad;
}
void Coche::setSoat(bool s){
    soat=s;
}
bool Coche::getSoat(){
    return soat;
}
