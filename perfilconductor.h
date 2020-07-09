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

private:
    Ui::perfilConductor *ui;
};

#endif // PERFILCONDUCTOR_H
