#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "perdicarrera.h"
#include "aceptarcarrera.h"
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
    aceptarcarrera* MenuTaxi = new aceptarcarrera;
    MenuTaxi->show();


}

void MainWindow::on_pushButton_3_clicked()
{
    hide();
    perdicarrera* MenuCliente = new perdicarrera;
    MenuCliente->show();
}
