#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    int k=ui->comboBox->currentIndex();
    switch (k) {
    case 0:{
        bin.insert(ui->lineEdit->text().toInt());
        QString boof;
        for(int i=0;i<bin.Size();++i){
            boof+=QString::number(bin[i])+' ';
        }
        ui->textBrowser->setText(boof);
        break;}
    case 1:
        ui->textBrowser->setText(QString::number(bin.Size()));
        break;
    }
}

