#include "aceptarcarrera.h"
#include "ui_aceptarcarrera.h"

aceptarcarrera::aceptarcarrera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::aceptarcarrera)
{
    ui->setupUi(this);
}

aceptarcarrera::~aceptarcarrera()
{
    delete ui;
}
