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
        String s1(ui->lineEdit->text().toStdString().c_str());
        s1.strcpy(s1.c_str(),ui->lineEdit_2->text().toStdString().data());
        ui->textBrowser->setText(QString(s1.c_str()));
        break;}

    case 1:{
        String s1(ui->lineEdit->text().toStdString().c_str());
        String s2(ui->lineEdit_2->text().toStdString().c_str());

        s1=s1.strncat(s1.c_str(),s2.c_str(),s2.Size());
        ui->textBrowser->setText(QString(s1.c_str()));
        break;}
    case 2:{
        String s1(ui->lineEdit->text().toStdString().c_str());
        String s2(ui->lineEdit_2->text().toStdString().c_str());

        s1=s1.strncat(s1.c_str(),s2.c_str(),ui->lineEdit_3->text().toInt());
        ui->textBrowser->setText(QString(s1.c_str()));
        break;}
    case 3:{
        String s1(ui->lineEdit->text().toStdString().c_str());
        String s2(ui->lineEdit_2->text().toStdString().c_str());

        int g=s1.memcmp(s1.c_str(),s2.c_str(),ui->lineEdit_3->text().toInt());
        ui->textBrowser->setText(QString::number(g));
        break;}
    case 4:{
        String s1(ui->lineEdit->text().toStdString().c_str());
        String s2(ui->lineEdit_2->text().toStdString().c_str());

        int g=s1.strcmp(s1.c_str(),s2.c_str());
        if(g==0){
            ui->textBrowser->setText("s1=s2");
        }
        else if(g<0){
            ui->textBrowser->setText("s1 лексикографически меньше s2");
        }
        else{
             ui->textBrowser->setText("s1 лексикографически больше s2");
        }
        break;}
    case 5:{
        String s1(ui->lineEdit->text().toStdString().c_str());
        String s2(ui->lineEdit_2->text().toStdString().c_str());

        int g=s1.strncmp(s1.c_str(),s2.c_str(),ui->lineEdit_3->text().toInt());
        if(g==0){
            ui->textBrowser->setText("s1=s2");
        }
        else if(g<0){
            ui->textBrowser->setText("s1 лексикографически меньше s2");
        }
        else{
             ui->textBrowser->setText("s1 лексикографически больше s2");
        }
        break;}
    case 6:{
        String s1(ui->lineEdit->text().toStdString().c_str());
        String s2(ui->lineEdit_2->text().toStdString().c_str());

        size_t g=s1.strxfrm(s1.c_str(),s2.c_str(),ui->lineEdit_3->text().toInt());

            ui->textBrowser->setText(QString::number(g));

        break;}
    case 7:{
        String s1(ui->lineEdit->text().toStdString().c_str());
        int c(ui->lineEdit_2->text().toInt());

        s1.myMemset(s1.c_str(),c,ui->lineEdit_3->text().toInt());

            ui->textBrowser->setText(QString(s1.c_str()));

        break;}
    case 8:{
        int a=ui->lineEdit_3->text().toInt();
        String s1=s1.myStrerror(a);

            ui->textBrowser->setText(QString(s1.c_str()));

        break;}
    case 9:{

        String s1(ui->lineEdit->text().toStdString().c_str());
        size_t a=s1.myStrlen(s1.c_str());
            ui->textBrowser->setText(QString::number(a));

        break;}
    default:
        break;
    }
}

