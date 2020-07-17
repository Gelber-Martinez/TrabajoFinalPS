#include "opcioncrear.h"
#include "ui_opcioncrear.h"

Opcioncrear::Opcioncrear(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Opcioncrear)
{
    ui->setupUi(this);
}

Opcioncrear::~Opcioncrear()
{
    delete ui;
}
