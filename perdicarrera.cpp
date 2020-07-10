#include "perdicarrera.h"
#include "ui_perdicarrera.h"
#include "pedirtaxi.h"
#include "mainwindow.h"
#include "perfilusuario.h"
#include "listaregistros.h"
perdicarrera::perdicarrera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::perdicarrera)
{
    ui->setupUi(this);
}

perdicarrera::~perdicarrera()
{
    delete ui;
}

void perdicarrera::on_pushButton_11_clicked()
{
    hide();
    pedirTaxi* MenuPedidos = new pedirTaxi;
    MenuPedidos->show();
}

void perdicarrera::on_pushButton_3_clicked()
{
    hide();
    pedirTaxi* MenuPedidos = new pedirTaxi;
    MenuPedidos->show();
}


void perdicarrera::on_pushButton_4_clicked()
{
    hide();
    MainWindow* MenuPedidos = new MainWindow;
    MenuPedidos->show();
}

void perdicarrera::on_pushButton_9_clicked()
{
    hide();
    perfilUsuario* MenuUsuario = new perfilUsuario;
    MenuUsuario->show();
}



void perdicarrera::on_pushButton_10_clicked()
{
    hide();
    listaRegistros* MenuUsuario = new listaRegistros;
    MenuUsuario->show();
}

void perdicarrera::on_pushButton_clicked()
{
    hide();
    perfilUsuario* MenuUsuario = new perfilUsuario;
    MenuUsuario->show();

}

void perdicarrera::on_pushButton_2_clicked()
{
    hide();
    listaRegistros* MenuUsuario = new listaRegistros;
    MenuUsuario->show();
}
