#include "perfilusuario.h"
#include "ui_perfilusuario.h"
#include "perdicarrera.h"
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

void perfilUsuario::on_pushButton_clicked()
{
    hide();
    perdicarrera* menucoche = new perdicarrera;
    menucoche->show();

}
