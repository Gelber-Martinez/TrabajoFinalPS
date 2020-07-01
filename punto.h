#ifndef PUNTO_H
#define PUNTO_H
#include <string.h>
#include <string>
using namespace std;
class Punto{

public:
    Punto();
    void setPuntoX(int);
    void setPuntoY(int);
    int getPuntoX();
    int getPuntoY();
    float CalcularDistancia(Punto);

protected:
    int puntoX;
    int puntoY;
};
#endif
