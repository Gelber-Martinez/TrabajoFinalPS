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

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::aceptarcarrera *ui;
};

#endif // ACEPTARCARRERA_H
