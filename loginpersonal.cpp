#include "loginpersonal.h"
#include "ui_loginpersonal.h"
#include "aceptarcarrera.h"
#include "menuusuario.h"
#include "QFile"
#include "QTextStream"
#include "QDebug"

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
    if(ui->usuario->text().length()==0 && ui->clave->text().length()==0){
        return;
    }
    QFile usuario;
    usuario.setFileName("C:\\Users\\DELL\\Documents\\TrabajoFinalPS\\fonts\\usuarios.txt");
        if (!usuario.open(QIODevice::ReadOnly | QIODevice::Text))
                return;
    QTextStream in(&usuario);
    while (!in.atEnd()){
        QString line = in.readLine();
        if(line.length()==0)
            break;
        if(line.mid(0,line.indexOf("-")) == (ui->usuario->text())){
            if(line.mid(line.indexOf("-")+1,line.length()-line.indexOf("-")-3) == (ui->clave->text())){
                if(line.mid(line.indexOf("/")+1)=="1"){
                    hide();
                    MenuUsuario* menuAdmin = new MenuUsuario;
                    menuAdmin->show();

                }else{
                    hide();
                    aceptarcarrera* menuTaxi = new aceptarcarrera;
                    menuTaxi->show();
                }
            }
            break;
        }
    }
    usuario.close();

}
