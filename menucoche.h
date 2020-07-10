#ifndef MENUCOCHE_H
#define MENUCOCHE_H

#include <QWidget>
#include <coche.h>
namespace Ui {
class MenuCoche;
}

class MenuCoche : public QWidget
{
    Q_OBJECT

public:
    explicit MenuCoche(QWidget *parent = nullptr);
    ~MenuCoche();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MenuCoche *ui;
};

#endif // MENUCOCHE_H
