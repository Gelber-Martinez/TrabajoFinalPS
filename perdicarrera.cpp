#include "perdicarrera.h"
#include "ui_perdicarrera.h"

perdicarrera::perdicarrera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::perdicarrera)
{
    ui->setupUi(this);
}

perdicarrera::~perdicarrera()
{
    delete ui;
}
