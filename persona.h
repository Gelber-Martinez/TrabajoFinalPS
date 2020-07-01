#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;
class Persona{
public:
    Persona();	//Construptor
    Persona(string,int,string,string);
    void setNombre(string);
    void setEdad(int);
    void setDni(string);
    void setStatus(string);

    string getNombre();
    int getEdad();
    string getDni();
    string getStatus();

protected:
    string nombre;
    int edad;
    string dni;
    string status;
};
#endif
