#include "perfilconductor.h"
#include "ui_perfilconductor.h"
#include "aceptarcarrera.h"
#include "perfilcoche.h"
perfilConductor::perfilConductor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::perfilConductor)
{
    ui->setupUi(this);
}

perfilConductor::~perfilConductor()
{
    delete ui;
}

void perfilConductor::on_pushButton_clicked()
{
    hide();
    aceptarcarrera* ConductorPerfil = new aceptarcarrera;
    ConductorPerfil->show();
}

void perfilConductor::on_pushButton_5_clicked()
{
    hide();
    perfilCoche* cochePerfil = new perfilCoche;
    cochePerfil->show();
}

void perfilConductor::on_pushButton_6_clicked()
{
    hide();
    perfilCoche* cochePerfil = new perfilCoche;
    cochePerfil->show();
}
