#ifndef LISTAPEDIDOS_H
#define LISTAPEDIDOS_H

#include <QWidget>

namespace Ui {
class listaPedidos;
}

class listaPedidos : public QWidget
{
    Q_OBJECT

public:
    explicit listaPedidos(QWidget *parent = nullptr);
    ~listaPedidos();

private:
    Ui::listaPedidos *ui;
};

#endif // LISTAPEDIDOS_H
