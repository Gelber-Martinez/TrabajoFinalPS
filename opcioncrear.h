#ifndef OPCIONCREAR_H
#define OPCIONCREAR_H

#include <QWidget>

namespace Ui {
class Opcioncrear;
}

class Opcioncrear : public QWidget
{
    Q_OBJECT

public:
    explicit Opcioncrear(QWidget *parent = nullptr);
    ~Opcioncrear();

private:
    Ui::Opcioncrear *ui;
};

#endif // OPCIONCREAR_H
