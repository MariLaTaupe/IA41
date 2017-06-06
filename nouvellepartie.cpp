#include "nouvellepartie.h"
#include "ui_nouvellepartie.h"

NouvellePartie::NouvellePartie(QWidget *parent) : // TODO : envoyer au modèle
    QDialog(parent),
    ui(new Ui::NouvellePartie)
{
    ui->setupUi(this);
}

NouvellePartie::~NouvellePartie()
{
    delete ui;
}
