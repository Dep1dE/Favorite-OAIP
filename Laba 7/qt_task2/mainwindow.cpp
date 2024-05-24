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
        int key=ui->lineEdit->text().toInt();
        int value=ui->lineEdit_2->text().toInt();
        map.insert(value,key);
        QString boof;
        std::vector<std::pair<int, int>> arr;
        map.toArray(arr);
        for(size_t i=0;i<arr.size();++i){
            boof+="Ключ:"+QString::number(arr[i].first)+' '+"Значение:"+QString::number(arr[i].second)+'\n';
        }
        ui->textBrowser->setText(boof);

        break;}
    case 1:{
        int key=ui->lineEdit->text().toInt();
        map.erase(key);
        QString boof;
        std::vector<std::pair<int, int>> arr;
        map.toArray(arr);
        for(size_t i=0;i<arr.size();++i){
            boof+="Ключ:"+QString::number(arr[i].first)+' '+"Значение:"+QString::number(arr[i].second)+'\n';
        }
        ui->textBrowser->setText(boof);
        break;}
    }
}

