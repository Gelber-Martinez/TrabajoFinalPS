#ifndef PERFILUSUARIO_H
#define PERFILUSUARIO_H

#include <QWidget>

namespace Ui {
class perfilUsuario;
}

class perfilUsuario : public QWidget
{
    Q_OBJECT

public:
    explicit perfilUsuario(QWidget *parent = nullptr);
    ~perfilUsuario();

private:
    Ui::perfilUsuario *ui;
};

#endif // PERFILUSUARIO_H
