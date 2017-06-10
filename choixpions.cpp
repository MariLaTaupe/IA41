#include "choixpions.h"
#include "ui_choixpions.h"

ChoixPions::ChoixPions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChoixPions)
{
    ui->setupUi(this);
    c1 = "A1";
    c2 = "A2";
    c3 = "A3";
    c4 = "B1";
    c5 = "B2";
    c6 = "B3";
    c7 = "C1";
    c8 = "C2";
    c9 = "C3";
}

ChoixPions::~ChoixPions()
{
    delete ui;
}

void ChoixPions::on_comboBox_currentIndexChanged(int i){

    QStringList cb;
    switch (i) {
    case 1:
        ui->comboBox_2->clear();
        cb << c2 << c4;
        ui->comboBox_2->insertItems(0,cb);
        break;
    case 2:
        ui->comboBox_2->clear();
        cb << c3 << c5 << c7;
        ui->comboBox_2->insertItems(0,cb);
        break;
    case 3:
        ui->comboBox_2->clear();
        cb << c6 << c8;
        ui->comboBox_2->insertItems(0,cb);
        break;
    case 4:
        ui->comboBox_2->clear();
        cb << c9;
        ui->comboBox_2->insertItems(0,cb);
        break;
    default:
        break;
    }
}
