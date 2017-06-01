#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nouvellepartie.h"
#include "ui_nouvellepartie.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::displayLabel2(){
    int wid,hei;

        wid = ui->label_2->geometry().width();
        hei = ui->label_2->geometry().height();

        QPixmap pixmap(wid,hei);
        pixmap.fill(QColor("white"));
        QPainter painter(&pixmap);

        painter.setBrush(QBrush(Qt::green));
        painter.drawEllipse( 60, 130, 80, 50);
        ui->label_2->setPixmap(pixmap);

        return 0;
}

void MainWindow::on_label_2_clicked()
{
    displayLabel2();
}
