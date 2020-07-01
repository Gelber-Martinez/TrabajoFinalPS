#include <iostream>
#include "persona.h"
using namespace std;
// Constructores
Persona::Persona(){
}
Persona::Persona(string n,int e,string d,string s){
    nombre=n;
    edad=e;
    dni=d;
    status=s;
}
//Metodos de la clase
void Persona::setNombre(string a){
    nombre=a;
}
void Persona::setEdad(int a){
    edad=a;
}
void Persona::setDni(string a){
    if(a.length()==8){
        dni=a;
    }else{
        string c="";
        while(c.length()!=8){
            cout<<"Ingrese un DNI valido: ";
            cin>>c;
        }
        dni=a;
    }
}
void Persona::setStatus(string a){
    status=a;
}

string Persona::getNombre(){
    return nombre;
}
int Persona::getEdad(){
    return edad;
}
string Persona::getDni(){
    return dni;
}
string Persona::getStatus(){
    return status;
}
