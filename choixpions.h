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

private slots:
    void on_comboBox_currentIndexChanged(int i);

private:
    Ui::ChoixPions *ui;
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
