#include "perfilcoche.h"
#include "ui_perfilcoche.h"
#include "perfilconductor.h"
perfilCoche::perfilCoche(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::perfilCoche)
{
    ui->setupUi(this);
}

perfilCoche::~perfilCoche()
{
    delete ui;
}

void perfilCoche::on_pushButton_clicked()
{
    hide();
    perfilConductor* conductorPerfil = new perfilConductor;
    conductorPerfil->show();
}

