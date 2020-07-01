#include "crearcoche.h"
#include "ui_crearcoche.h"
#include <QMessageBox>
#include "coche.h"

Coche *coche;
CrearCoche::CrearCoche(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CrearCoche)
{
    ui->setupUi(this);
}

CrearCoche::~CrearCoche()
{
    delete ui;
}


void CrearCoche::on_pushButton_clicked()
{
    QString placa = ui->Placa->text();
    QString marca = ui->Marca->text();
    int capacidad = ui->Capacidad->value();

    QString soat = ui->Soat->currentText();
    coche = new Coche(placa,marca,capacidad);
    if(soat=="SI"){
        coche->setSoat(true);
    }else {
        coche->setSoat(false);
    }
    QMessageBox::information(this,"Datos Carro","Marca: "+coche->getMarca()+"\nPlaca:  "+coche->getPlaca()+"\nCapacidad: "+QString::number(coche->getCapacidad())+"\nSoat: "+QVariant(coche->getSoat()).toString());
    close();

}

void CrearCoche::on_pushButton_2_clicked()
{
    close();
}
