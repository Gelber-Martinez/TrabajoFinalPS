#ifndef CREARTAXISTA_H
#define CREARTAXISTA_H

#include <QWidget>

namespace Ui {
class creartaxista;
}

class creartaxista : public QWidget
{
    Q_OBJECT

public:
    explicit creartaxista(QWidget *parent = nullptr);
    ~creartaxista();

private:
    Ui::creartaxista *ui;
};

#endif // CREARTAXISTA_H
