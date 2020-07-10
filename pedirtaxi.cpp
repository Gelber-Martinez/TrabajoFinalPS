#include "pedirtaxi.h"
#include "ui_pedirtaxi.h"
#include "perdicarrera.h"
pedirTaxi::pedirTaxi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pedirTaxi)
{
    ui->setupUi(this);
}

pedirTaxi::~pedirTaxi()
{
    delete ui;
}

void pedirTaxi::on_pushButton_clicked()
{
    hide();
    perdicarrera* MenuPedidos = new class perdicarrera();
    MenuPedidos->show();
}
