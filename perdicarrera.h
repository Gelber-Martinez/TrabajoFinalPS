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

private:
    Ui::perdicarrera *ui;
};

#endif // PERDICARRERA_H
