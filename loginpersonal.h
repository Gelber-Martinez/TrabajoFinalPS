#ifndef LOGINPERSONAL_H
#define LOGINPERSONAL_H

#include <QWidget>

namespace Ui {
class loginPersonal;
}

class loginPersonal : public QWidget
{
    Q_OBJECT

public:
    explicit loginPersonal(QWidget *parent = nullptr);
    ~loginPersonal();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::loginPersonal *ui;
};

#endif // LOGINPERSONAL_H
