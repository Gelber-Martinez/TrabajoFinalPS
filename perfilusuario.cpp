#include "perfilusuario.h"
#include "ui_perfilusuario.h"

perfilUsuario::perfilUsuario(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::perfilUsuario)
{
    ui->setupUi(this);
}

perfilUsuario::~perfilUsuario()
{
    delete ui;
}
