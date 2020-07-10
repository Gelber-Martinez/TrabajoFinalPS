#include "aceptarcarrera.h"
#include "ui_aceptarcarrera.h"
#include "mainwindow.h"
#include "perfilconductor.h"
#include "listaregistros.h"
aceptarcarrera::aceptarcarrera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::aceptarcarrera)
{
    ui->setupUi(this);
}

aceptarcarrera::~aceptarcarrera()
{
    delete ui;
}

void aceptarcarrera::on_pushButton_4_clicked()
{
    hide();
    MainWindow* MenuPedidos = new MainWindow;
    MenuPedidos->show();
}

void aceptarcarrera::on_pushButton_10_clicked()
{
    hide();
    perfilConductor* ConductorPerfil = new perfilConductor;
    ConductorPerfil->show();
}

void aceptarcarrera::on_pushButton_2_clicked()
{
    hide();
    perfilConductor* ConductorPerfil = new perfilConductor;
    ConductorPerfil->show();
}

void aceptarcarrera::on_pushButton_11_clicked()
{
    hide();
    listaRegistros* lista = new listaRegistros;
    lista->show();
}

void aceptarcarrera::on_pushButton_3_clicked()
{
    hide();
    listaRegistros* lista = new listaRegistros;
    lista->show();
}
