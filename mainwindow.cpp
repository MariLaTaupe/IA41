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

int MainWindow::displayLabel3(){
    int wid,hei;

        wid = ui->label_3->geometry().width();
        hei = ui->label_3->geometry().height();

        QPixmap pixmap(wid,hei);
        pixmap.fill(QColor("white"));
        QPainter painter(&pixmap);

        painter.setBrush(QBrush(Qt::green));
        painter.drawEllipse( 60, 130, 80, 50);
        ui->label_3->setPixmap(pixmap);

        return 0;
}

int MainWindow::displayLabel4(){
    int wid,hei;

        wid = ui->label_4->geometry().width();
        hei = ui->label_4->geometry().height();

        QPixmap pixmap(wid,hei);
        pixmap.fill(QColor("white"));
        QPainter painter(&pixmap);

        painter.setBrush(QBrush(Qt::green));
        painter.drawEllipse( 60, 130, 80, 50);
        ui->label_4->setPixmap(pixmap);

        return 0;
}

int MainWindow::displayLabel5(){
    int wid,hei;

        wid = ui->label_5->geometry().width();
        hei = ui->label_5->geometry().height();

        QPixmap pixmap(wid,hei);
        pixmap.fill(QColor("white"));
        QPainter painter(&pixmap);

        painter.setBrush(QBrush(Qt::green));
        painter.drawEllipse( 60, 130, 80, 50);
        ui->label_5->setPixmap(pixmap);

        return 0;
}

int MainWindow::displayLabel6(){
    int wid,hei;

        wid = ui->label_6->geometry().width();
        hei = ui->label_6->geometry().height();

        QPixmap pixmap(wid,hei);
        pixmap.fill(QColor("white"));
        QPainter painter(&pixmap);

        painter.setBrush(QBrush(Qt::green));
        painter.drawEllipse( 60, 130, 80, 50);
        ui->label_6->setPixmap(pixmap);

        return 0;
}

int MainWindow::displayLabel7(){
    int wid,hei;

        wid = ui->label_7->geometry().width();
        hei = ui->label_7->geometry().height();

        QPixmap pixmap(wid,hei);
        pixmap.fill(QColor("white"));
        QPainter painter(&pixmap);

        painter.setBrush(QBrush(Qt::green));
        painter.drawEllipse( 60, 130, 80, 50);
        ui->label_7->setPixmap(pixmap);

        return 0;
}

int MainWindow::displayLabel8(){
    int wid,hei;

        wid = ui->label_8->geometry().width();
        hei = ui->label_8->geometry().height();

        QPixmap pixmap(wid,hei);
        pixmap.fill(QColor("white"));
        QPainter painter(&pixmap);

        painter.setBrush(QBrush(Qt::green));
        painter.drawEllipse( 60, 130, 80, 50);
        ui->label_8->setPixmap(pixmap);

        return 0;
}

int MainWindow::displayLabel9(){
    int wid,hei;

        wid = ui->label_9->geometry().width();
        hei = ui->label_9->geometry().height();

        QPixmap pixmap(wid,hei);
        pixmap.fill(QColor("white"));
        QPainter painter(&pixmap);

        painter.setBrush(QBrush(Qt::green));
        painter.drawEllipse( 60, 130, 80, 50);
        ui->label_9->setPixmap(pixmap);

        return 0;
}

int MainWindow::displayLabel10(){
    int wid,hei;

        wid = ui->label_10->geometry().width();
        hei = ui->label_10->geometry().height();

        QPixmap pixmap(wid,hei);
        pixmap.fill(QColor("white"));
        QPainter painter(&pixmap);

        painter.setBrush(QBrush(Qt::green));
        painter.drawEllipse( 60, 130, 80, 50);
        ui->label_10->setPixmap(pixmap);

        return 0;
}

void MainWindow::on_label_2_clicked()
{
    displayLabel2();
}

void MainWindow::on_label_3_clicked()
{
    displayLabel3();
}

void MainWindow::on_label_4_clicked()
{
    displayLabel4();
}

void MainWindow::on_label_5_clicked()
{
    displayLabel5();
}

void MainWindow::on_label_6_clicked()
{
    displayLabel6();
}

void MainWindow::on_label_7_clicked()
{
    displayLabel7();
}

void MainWindow::on_label_8_clicked()
{
    displayLabel8();
}

void MainWindow::on_label_9_clicked()
{
    displayLabel9();
}

void MainWindow::on_label_10_clicked()
{
    displayLabel10();
}
