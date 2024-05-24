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
        set.insert(ui->lineEdit->text().toInt());
        std::vector<int> arr;
        set.toArray(arr);
        QString boof;
        for(size_t i=0; i<arr.size();++i){
            boof+=QString::number(arr[i])+' ';
        }
        ui->textBrowser->setText(boof);

        break;}
    case 1:{
        set.erase(ui->lineEdit->text().toInt());
        std::vector<int> arr;
        set.toArray(arr);
        QString boof;
        for(size_t i=0; i<arr.size();++i){
            boof+=QString::number(arr[i])+' ';
        }
        ui->textBrowser->setText(boof);
        break;}
    }
}

