#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
#include <QCoreApplication>
#include <QDateTime>
#include<QString>
#include <QDebug>

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
    QString boof="";
    srand(time(NULL));

    for (int i = 0; i < 15; ++i)
    {
        int num = rand() % 100;
        q.pushBack(num);
    }
    std::shared_ptr<Node> n=q.begin;
    while (n)
        {

            boof+=QString::number( n->data) + ' ';
            n = n->next;
        }

    ui->textBrowser->setText(boof);
    int Min=110;
    int Max=-1;
    n=q.begin;
    while (n)
        {

            if(Min>n->data){
                Min=n->data;
            }
            if(Max<n->data){
                Max=n->data;
            }
            n = n->next;
        }
    qDebug()<<Min;
    qDebug()<<Max;
    n=q.begin;
    bool flag=false;
    while (n)
        {

            if(!flag){
                if(n->data==Max||n->data==Min){
                    flag=true;
                }
                else{
                    q1.pushBack(n->data);
                }
            }
            else{
                if(n->data==Max||n->data==Min){
                    flag=false;
                }
                else{
                    q2.pushBack(n->data);
                }
            }
            n=n->next;
        }
    n=q1.begin;
    boof="";
    while (n)
        {

            boof+=QString::number( n->data) + ' ';
            n = n->next;
        }
    ui->textBrowser_3->setText(boof);

    n=q2.begin;
    boof="";
    while (n)
        {

            boof+=QString::number( n->data) + ' ';
            n = n->next;
        }
    ui->textBrowser_2->setText(boof);
}

