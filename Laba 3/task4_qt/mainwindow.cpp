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
    int curentPosition=ui->comboBox->currentIndex();
    qDebug()<<QString::number(curentPosition);
    switch (curentPosition) {
    case 0://assign
        if(v.Size()==0){
            ui->textBrowser->clear();
            ui->textBrowser->setText("Вектор пуст");
        }
        else{
            boof="";
            ui->textBrowser->clear();
            v.assign(ui->lineEdit_3->text().toInt(), ui->lineEdit->text().toInt());
            for(int i=0;i<v.Size();++i){
                boof+=QString::number(v.at(i))+" ";
            }
           ui->textBrowser->setText(boof);
        }
        break;
    case 1: //at
        k=ui->lineEdit_2->text().toInt();
        if(k<0||k>=v.Size()){
            ui->textBrowser->clear();
            ui->textBrowser->setText("Неправильный индекс");
        }
        else{
             ui->textBrowser->clear();
            ui->textBrowser->setText(QString::number(v.at(k)));
        }
        break;
    case 2://capacity
        if(v.Size()==0){
            ui->textBrowser->clear();
            ui->textBrowser->setText("Вектор пуст");
        }
        else{
            ui->textBrowser->clear();
           ui->textBrowser->setText(QString::number(v.Capacity()));
        }
        break;
    case 3://clear
        if(v.Size()==0){
            ui->textBrowser->clear();
            ui->textBrowser->setText("Вектор пуст");
        }
        else{
            ui->textBrowser->clear();
            v.clear();
            ui->textBrowser->setText("Теперь вектор пуст");
        }
        break;
    case 4://emplace
        boof="";
        v.emplace(ui->lineEdit_2->text().toInt(),ui->lineEdit->text().toInt());
        ui->textBrowser->clear();
        for(int i=0;i<v.Size();++i){
            boof+=QString::number(v.at(i))+" ";
        }
        ui->textBrowser->setText(boof);
        break;
    case 5://emplace_back
        boof="";
        v.emplace_back(ui->lineEdit->text().toInt());
        ui->textBrowser->clear();
        for(int i=0;i<v.Size();++i){
            boof+=QString::number(v.at(i))+" ";
        }
        ui->textBrowser->setText(boof);
        break;
    case 6://empty
        if(v.empty()){
            ui->textBrowser->setText("Вектор пуст");
        }
        else{
            ui->textBrowser->setText("Вектор не пуст");
        }
        break;
    case 7://erase
        if(v.Size()==0){
            ui->textBrowser->clear();
            ui->textBrowser->setText("Вектор пуст");
        }
        else{
            boof="";
            ui->textBrowser->clear();
            v.erase(ui->lineEdit_2->text().toInt(), ui->lineEdit_3->text().toInt());
            for(int i=0;i<v.Size();++i){
                boof+=QString::number(v.at(i))+" ";
            }
            ui->textBrowser->setText(boof);
        }
        break;
    case 8://front
        if(v.Size()==0){
            ui->textBrowser->clear();
            ui->textBrowser->setText("Вектор пуст");
        }
        else{
            ui->textBrowser->clear();
            ui->textBrowser->setText(QString::number(v.front()));
        }
        break;
    case 9://pop_back
        if(v.Size()==0){
            ui->textBrowser->clear();
            ui->textBrowser->setText("Вектор пуст");
        }
        else{
        boof="";
        v.pop_back();
        ui->textBrowser->clear();
        for(int i=0;i<v.Size();++i){
            boof+=QString::number(v.at(i))+" ";
        }
        ui->textBrowser->setText(boof);}
        break;
    case 10://push_back
        boof="";
        v.push_back(ui->lineEdit->text().toInt());
        ui->textBrowser->clear();
        for(int i=0;i<v.Size();++i){
            boof+=QString::number(v.at(i))+" ";
        }
        ui->textBrowser->setText(boof);
        break;
    case 11://reserve
        boof="";
        v.reserve(ui->lineEdit_3->text().toInt());
        ui->textBrowser->clear();
        for(int i=0;i<v.Size();++i){
            boof+=QString::number(v.at(i))+" ";
        }
        ui->textBrowser->setText(boof);
        break;
    case 12://size
        if(v.Size()==0){
            ui->textBrowser->clear();
            ui->textBrowser->setText("Вектор пуст");
        }
        else{
            ui->textBrowser->clear();
           ui->textBrowser->setText(QString::number(v.Size()));
        }
        break;
    }
}

