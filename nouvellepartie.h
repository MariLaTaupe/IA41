#ifndef NOUVELLEPARTIE_H
#define NOUVELLEPARTIE_H

#include <QDialog>

namespace Ui {
class NouvellePartie;
}

class NouvellePartie : public QDialog
{
    Q_OBJECT

public:
    explicit NouvellePartie(QWidget *parent = 0);
    ~NouvellePartie();

private:
    Ui::NouvellePartie *ui;
};

#endif // NOUVELLEPARTIE_H
