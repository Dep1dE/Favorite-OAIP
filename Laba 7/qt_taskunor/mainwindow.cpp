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
    QString boof;
    switch (k) {
    case 0:
        u.insert(ui->lineEdit_2->text().toInt(), ui->lineEdit->text().toInt());
        break;
    case 1:
        u.rehash();
        break;
    case 2:
        ui->textBrowser->setText(QString::number(u.contains(ui->lineEdit_2->text().toInt())));
        break;
    case 3:
        u.erase(ui->lineEdit_2->text().toInt());
        break;
    }
}

