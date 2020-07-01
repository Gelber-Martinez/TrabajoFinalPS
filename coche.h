#ifndef COCHE_H
#define COCHE_H
#include <QString>
class Coche
{
private:

    QString placa;
    QString marca;
    int capacidad=0;
    bool soat;
    int contadorCoches=0;
public:

    Coche();
    Coche(QString p,QString m, int c);
    void registrarCoche();
    void setPlaca(QString p);
    QString getPlaca();
    void setMarca(QString m);
    QString getMarca();
    void setCapacidad(int c);
    int getCapacidad();
    void setSoat(bool s);
    bool getSoat();

};

#endif // COCHE_H
