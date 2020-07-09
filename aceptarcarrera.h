#ifndef ACEPTARCARRERA_H
#define ACEPTARCARRERA_H

#include <QWidget>

namespace Ui {
class aceptarcarrera;
}

class aceptarcarrera : public QWidget
{
    Q_OBJECT

public:
    explicit aceptarcarrera(QWidget *parent = nullptr);
    ~aceptarcarrera();

private:
    Ui::aceptarcarrera *ui;
};

#endif // ACEPTARCARRERA_H
