#include "pedirtaxi.h"
#include "ui_pedirtaxi.h"

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
