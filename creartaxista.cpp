#include "creartaxista.h"
#include "ui_creartaxista.h"

creartaxista::creartaxista(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::creartaxista)
{
    ui->setupUi(this);
}

creartaxista::~creartaxista()
{
    delete ui;
}
