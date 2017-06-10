#ifndef CHOIXPIONS_H
#define CHOIXPIONS_H

#include <QDialog>

namespace Ui {
class ChoixPions;
}

class ChoixPions : public QDialog
{
    Q_OBJECT

public:
    explicit ChoixPions(QWidget *parent = 0);
    ~ChoixPions();

private:
    Ui::ChoixPions *ui;
};

#endif // CHOIXPIONS_H
