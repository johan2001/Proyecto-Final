#ifndef JEFEFINAL_H
#define JEFEFINAL_H

#include <QWidget>

namespace Ui {
class Jefefinal;
}

class Jefefinal : public QWidget
{
    Q_OBJECT

public:
    explicit Jefefinal(QWidget *parent = nullptr);
    ~Jefefinal();

private:
    Ui::Jefefinal *ui;
};

#endif // JEFEFINAL_H
