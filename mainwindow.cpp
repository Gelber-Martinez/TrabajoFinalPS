#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "perdicarrera.h"
#include "loginpersonal.h"
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
    loginPersonal* MenuTaxi = new loginPersonal;
    MenuTaxi->show();


}

void MainWindow::on_pushButton_3_clicked()
{
    hide();
    perdicarrera* MenuCliente = new perdicarrera;
    MenuCliente->show();
}
