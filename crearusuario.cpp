#include "crearusuario.h"
#include "ui_crearusuario.h"

crearusuario::crearusuario(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::crearusuario)
{
    ui->setupUi(this);
}

crearusuario::~crearusuario()
{
    delete ui;
}
