#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"

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


void MainWindow::on_pushButton_clicked()
{
    int g=ui->comboBox->currentIndex();
    switch (g) {
    case 0:{
        QString boof="";
        int a=ui->lineEdit->text().toInt();
        d.push_back(a);
        for (int i = 0; i < d.Size(); ++i) {
                boof+=QString::number(d[i])+" ";
            }
        ui->textEdit->setText(boof);
        break;}
    case 1:{
            QString boof="";
            int a=ui->lineEdit->text().toInt();
            d.push_front(a);
            for (int i = 0; i < d.Size(); ++i) {
                    boof+=QString::number(d[i])+" ";
                }
            ui->textEdit->setText(boof);
        break;}
    case 2:{
        QString boof="";
        d.pop_back();
        for (int i = 0; i < d.Size(); ++i) {
                boof+=QString::number(d[i])+" ";
            }
        ui->textEdit->setText(boof);
        break;}
    case 3:{
        QString boof="";
        d.pop_front();
        for (int i = 0; i < d.Size(); ++i) {
                boof+=QString::number(d[i])+" ";
            }
        ui->textEdit->setText(boof);
        break;}
    case 4:{
        QString boof="";
        int g=d.Size();
        boof+=QString::number(g)+" ";
        ui->textEdit->setText(boof);
        break;}
    case 5:{
        QString boof="";
        if(d.isempty()){
            boof="Deque пустой";
        }
        else{
            boof="Deque не пустой";
        }
        ui->textEdit->setText(boof);
        break;}
    case 6:{
        QString boof="";
        d.clear();
        for (int i = 0; i < d.Size(); ++i) {
                boof+=QString::number(d[i])+" ";
            }
        ui->textEdit->setText(boof);
        break;}
    default:
        break;
    }
}

