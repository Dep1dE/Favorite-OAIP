#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "opz.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    a[0] = "1";
    a[1] = "1";
    a[2] = "1";
    a[3] = "1";
    a[4] = "1";
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString h;
    h=ui->lineEdit->text();
    ui->comboBox->addItem(h);
}


void MainWindow::on_pushButton_2_clicked()
{
    OPZ opz1(ui->comboBox->currentText(),a,5);
    ui->textBrowser->setText(ui->comboBox->currentText());

    ui->textBrowser_2->setText("ОПЗ: \n"+opz1.getOpz()+"\n"+"Ответ: "+QString::number(opz1.getEvaluation()));
    qDebug() <<    opz1.getOpz();
    qDebug() << opz1.getEvaluation();

}


void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
    a[0] = arg1;
}


void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{
    a[1]=arg1;
}


void MainWindow::on_lineEdit_4_textChanged(const QString &arg1)
{
    a[2]=arg1;
}


void MainWindow::on_lineEdit_5_textChanged(const QString &arg1)
{
    a[3]=arg1;
}


void MainWindow::on_lineEdit_6_textChanged(const QString &arg1)
{
    a[4]=arg1;
}

