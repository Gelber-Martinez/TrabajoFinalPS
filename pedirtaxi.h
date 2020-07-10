#ifndef PEDIRTAXI_H
#define PEDIRTAXI_H

#include <QWidget>

namespace Ui {
class pedirTaxi;
}

class pedirTaxi : public QWidget
{
    Q_OBJECT

public:
    explicit pedirTaxi(QWidget *parent = nullptr);
    ~pedirTaxi();

private slots:
    void on_pushButton_clicked();

private:
    Ui::pedirTaxi *ui;
};

#endif // PEDIRTAXI_H
