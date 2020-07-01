#include "menucoche.h"
#include "ui_menucoche.h"
#include "crearcoche.h"

Coche *cocheaux;
MenuCoche::MenuCoche(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuCoche)
{
    ui->setupUi(this);
    setWindowTitle("Menu del Usuario - coche");
}

MenuCoche::~MenuCoche()
{
    delete ui;
}

void MenuCoche::on_pushButton_clicked()
{
    CrearCoche dialocoche;
    dialocoche.setModal(true);
    dialocoche.exec();

    ui->listWidget->addItem("Maxda \t A15-98 \t 3 \t true");


}

