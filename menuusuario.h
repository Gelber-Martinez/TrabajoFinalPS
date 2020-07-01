#ifndef MENUUSUARIO_H
#define MENUUSUARIO_H

#include <QWidget>

namespace Ui {
class MenuUsuario;
}

class MenuUsuario : public QWidget
{
    Q_OBJECT

public:
    explicit MenuUsuario(QWidget *parent = nullptr);
    ~MenuUsuario();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MenuUsuario *ui;
};

#endif // MENUUSUARIO_H
