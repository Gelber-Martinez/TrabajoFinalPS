#ifndef PERFILCOCHE_H
#define PERFILCOCHE_H

#include <QWidget>

namespace Ui {
class perfilCoche;
}

class perfilCoche : public QWidget
{
    Q_OBJECT

public:
    explicit perfilCoche(QWidget *parent = nullptr);
    ~perfilCoche();

private:
    Ui::perfilCoche *ui;
};

#endif // PERFILCOCHE_H
