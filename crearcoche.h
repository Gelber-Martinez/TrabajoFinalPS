#ifndef CREARCOCHE_H
#define CREARCOCHE_H
#include <coche.h>
#include <QDialog>

namespace Ui {
class CrearCoche;
}

class CrearCoche : public QDialog
{
    Q_OBJECT

public:
    explicit CrearCoche(QWidget *parent = nullptr);
    ~CrearCoche();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CrearCoche *ui;
};

#endif // CREARCOCHE_H
