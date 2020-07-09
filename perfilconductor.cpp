#include "perfilconductor.h"
#include "ui_perfilconductor.h"

perfilConductor::perfilConductor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::perfilConductor)
{
    ui->setupUi(this);
}

perfilConductor::~perfilConductor()
{
    delete ui;
}
