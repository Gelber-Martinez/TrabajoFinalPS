#include "listapedidos.h"
#include "ui_listapedidos.h"
listaPedidos::listaPedidos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::listaPedidos)
{
    ui->setupUi(this);
}

listaPedidos::~listaPedidos()
{
    delete ui;
}

void listaPedidos::on_pushButton_clicked()
{

}
