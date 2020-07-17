#ifndef CREARUSUARIO_H
#define CREARUSUARIO_H

#include <QWidget>

namespace Ui {
class crearusuario;
}

class crearusuario : public QWidget
{
    Q_OBJECT

public:
    explicit crearusuario(QWidget *parent = nullptr);
    ~crearusuario();

private:
    Ui::crearusuario *ui;
};

#endif // CREARUSUARIO_H
