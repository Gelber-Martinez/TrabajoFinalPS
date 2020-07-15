#include "listaregistros.h"
#include "ui_listaregistros.h"
#include "perdicarrera.h"
listaRegistros::listaRegistros(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::listaRegistros)
{
    ui->setupUi(this);
}

listaRegistros::~listaRegistros()
{
    delete ui;
}

void listaRegistros::on_pushButton_clicked()
{
    hide();
    perdicarrera* MenuUsuario = new perdicarrera;
    MenuUsuario->show();
}
