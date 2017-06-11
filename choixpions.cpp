#include "choixpions.h"
#include "ui_choixpions.h"

ChoixPions::ChoixPions(QWidget *parent, int c) :
    QDialog(parent),
    ui(new Ui::ChoixPions)
{
    ui->setupUi(this);
    caseDepart = c;
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
    switch(caseDepart){
    case 2:
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
        break;
    default:
        break;
    }
}

void ChoixPions::on_buttonBox_accepted()
{
    bool ok;
    int nbPions, caseArrivee;
    QString caseArriveeString;
    nbPions = ui->comboBox->currentText().toInt(&ok, 10);
    caseArriveeString = ui->comboBox_2->currentText();
    if(caseArriveeString == "A1"){
        caseArrivee = 2;
    }else if (caseArriveeString == "A2") {
        caseArrivee = 4;
    }else if (caseArriveeString == "A3") {
        caseArrivee = 3;
    }else if (caseArriveeString == "B1") {
        caseArrivee = 8;
    }else if (caseArriveeString == "B2") {
        caseArrivee = 9;
    }else if (caseArriveeString == "B3") {
        caseArrivee = 10;
    }else if (caseArriveeString == "C1") {
        caseArrivee = 7;
    }else if (caseArriveeString == "C2") {
        caseArrivee = 6;
    }else if (caseArriveeString == "C3") {
        caseArrivee = 5;
    }

    emit retourWindow(nbPions, caseArrivee);
    this->close();
}
