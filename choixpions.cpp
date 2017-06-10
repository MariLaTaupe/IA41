#include "choixpions.h"
#include "ui_choixpions.h"

ChoixPions::ChoixPions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChoixPions)
{
    ui->setupUi(this);
}

ChoixPions::~ChoixPions()
{
    delete ui;
}
