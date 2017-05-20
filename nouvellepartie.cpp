#include "nouvellepartie.h"
#include "ui_nouvellepartie.h"

NouvellePartie::NouvellePartie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NouvellePartie)
{
    ui->setupUi(this);
}

NouvellePartie::~NouvellePartie()
{
    delete ui;
}
