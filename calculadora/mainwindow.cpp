#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_mais_clicked()
{
    QString numero1 = ui->numero1->text();
    QString numero2 = ui->numero2->text();

    int n1 = numero1.toInt();
    int n2 = numero2.toInt();

    ui->resultado->setText(QString::number(n1+n2));
}


void MainWindow::on_menos_clicked()
{
    QString numero1 = ui->numero1->text();
    QString numero2 = ui->numero2->text();

    int n1 = numero1.toInt();
    int n2 = numero2.toInt();

    ui->resultado->setText(QString::number(n1-n2));
}


void MainWindow::on_vezes_clicked()
{
    QString numero1 = ui->numero1->text();
    QString numero2 = ui->numero2->text();

    int n1 = numero1.toInt();
    int n2 = numero2.toInt();

    ui->resultado->setText(QString::number(n1*n2));
}


void MainWindow::on_dividido_clicked()
{
    QString numero1 = ui->numero1->text();
    QString numero2 = ui->numero2->text();

    int n1 = numero1.toInt();
    int n2 = numero2.toInt();

    if (n2==0){
        ui->resultado->setText("Resultado inválido");
    }else{
        ui->resultado->setText(QString::number(n1/n2));
    }
}

