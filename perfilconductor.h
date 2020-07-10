#ifndef PERFILCONDUCTOR_H
#define PERFILCONDUCTOR_H

#include <QWidget>

namespace Ui {
class perfilConductor;
}

class perfilConductor : public QWidget
{
    Q_OBJECT

public:
    explicit perfilConductor(QWidget *parent = nullptr);
    ~perfilConductor();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::perfilConductor *ui;
};

#endif // PERFILCONDUCTOR_H
