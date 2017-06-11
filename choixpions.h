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
    explicit ChoixPions(QWidget *parent, int c);
    ~ChoixPions();

private slots:
    void on_comboBox_currentIndexChanged(int i);
    void on_buttonBox_accepted();

signals:
    void retourWindow(int nbPions, int caseArrivee);

private:
    Ui::ChoixPions *ui;
    int caseDepart;
    QString c1;
    QString c2;
    QString c3;
    QString c4;
    QString c5;
    QString c6;
    QString c7;
    QString c8;
    QString c9;
};

#endif // CHOIXPIONS_H
