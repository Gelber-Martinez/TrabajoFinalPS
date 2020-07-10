#include "loginpersonal.h"
#include "ui_loginpersonal.h"
#include "aceptarcarrera.h"
#include "menuusuario.h"
loginPersonal::loginPersonal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginPersonal)
{
    ui->setupUi(this);
}

loginPersonal::~loginPersonal()
{
    delete ui;
}

void loginPersonal::on_pushButton_3_clicked()
{
    if(ui->usuario->text()=="admin"){
        hide();
        MenuUsuario* menuAdmin = new MenuUsuario;
        menuAdmin->show();
    }else{
        hide();
        aceptarcarrera* menuTaxi = new aceptarcarrera;
        menuTaxi->show();
    }
}
