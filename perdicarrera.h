#ifndef PERDICARRERA_H
#define PERDICARRERA_H

#include <QWidget>

namespace Ui {
class perdicarrera;
}

class perdicarrera : public QWidget
{
    Q_OBJECT

public:
    explicit perdicarrera(QWidget *parent = nullptr);
    ~perdicarrera();

private slots:


    void on_pushButton_11_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::perdicarrera *ui;
};

#endif // PERDICARRERA_H
