#include "perfilcoche.h"
#include "ui_perfilcoche.h"

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
