#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menuusuario.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Login");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    hide();
    MenuUsuario* MenuUsuario = new class MenuUsuario();
    MenuUsuario->show();


}
