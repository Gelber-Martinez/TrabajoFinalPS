#ifndef LISTAREGISTROS_H
#define LISTAREGISTROS_H

#include <QWidget>

namespace Ui {
class listaRegistros;
}

class listaRegistros : public QWidget
{
    Q_OBJECT

public:
    explicit listaRegistros(QWidget *parent = nullptr);
    ~listaRegistros();

private:
    Ui::listaRegistros *ui;
};

#endif // LISTAREGISTROS_H
