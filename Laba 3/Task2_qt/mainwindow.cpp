#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    v.reserve(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()

{
    /*firstVector.push_back(ui->lineEdit_2->text().toInt());
    vtorPair.first=ui->lineEdit_3->text().toInt();
    vtorPair.second=ui->lineEdit_4->text().toDouble();
    secondVector.push_back(vtorPair);
    osnovPair.first=firstVector;
    osnovPair.second=secondVector;
    qDebug()<<"dff";
    v[g++] = osnovPair;
    qDebug()<<"dff";*/

    QString boof, boof2;

    osnovPair.first=firstVector;
    osnovPair.second=secondVector;
    firstVector.clear();
    secondVector.clear();
    v[g++]=osnovPair;
    for(int i=0; i<g;i++){
        boof+="Номер пары в основном векторе: №"+ QString::number(i+1)+'\n';
        boof2+="Номер пары в основном векторе: №"+ QString::number(i+1)+'\n';
        for(int j=0;j<v[i].first.Size();++j){
           boof+=QString::number(v[i].first[j])+" ";
        }
        for(int j=0;j<v[i].second.Size();++j){
           boof2+=QString::number(v[i].second.at(j).first)+" "+QString::number(v[i].second.at(j).second);
           boof2+='\n';
        }
        boof+='\n';
        boof2+='\n';
    }
    qDebug()<<QString::number(v[0].second[0].first);
    ui->textBrowser->setText(boof);
    ui->textBrowser_2->setText(boof2);
}


void MainWindow::on_pushButton_3_clicked()
{

    firstVector.push_back(ui->lineEdit_2->text().toInt());
    for(int i=0; i<firstVector.Size();i++){
        qDebug()<<firstVector.at(i);
    }

}


void MainWindow::on_pushButton_2_clicked()
{

    vtorPair.first=ui->lineEdit_3->text().toInt();
    vtorPair.second=ui->lineEdit_4->text().toDouble();
    secondVector.push_back(vtorPair);
    for(int i=0;i<secondVector.Size();i++){
    qDebug()<<QString::number(secondVector.at(i).first)+' '+ QString::number(secondVector.at(i).second);
    }
}

