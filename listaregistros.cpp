#include "listaregistros.h"
#include "ui_listaregistros.h"

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
