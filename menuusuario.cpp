#include "menuusuario.h"
#include "ui_menuusuario.h"
#include "menucoche.h"
MenuUsuario::MenuUsuario(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuUsuario)
{
    ui->setupUi(this);
    setWindowTitle("Menu del Usuario");
}

MenuUsuario::~MenuUsuario()
{
    delete ui;
}

void MenuUsuario::on_pushButton_clicked()
{
    hide();
    MenuCoche* menucoche = new MenuCoche;
    menucoche->show();


}
