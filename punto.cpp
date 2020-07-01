#include <iostream>
#include <math.h>
#include <string>
#include "punto.h"
using namespace std;
Punto::Punto(){

}
void Punto::setPuntoX(int a){
    puntoX=a;
}
void Punto::setPuntoY(int a){
    puntoY=a;
}
int Punto::getPuntoX(){
    return puntoX;
}
int Punto::getPuntoY(){
    return puntoY;
}
float Punto::CalcularDistancia(Punto a){
    float p1=puntoX-a.getPuntoX();
    float p2=puntoY-a.getPuntoY();
    return sqrt(pow(p1,2)+pow(p2,2));
}
