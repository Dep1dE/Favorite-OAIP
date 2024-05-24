#include "costinfo.h"
#include "ui_costinfo.h"

costinfo::costinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::costinfo)
{
    ui->setupUi(this);
}

costinfo::~costinfo()
{
    delete ui;
}

void costinfo::on_pushButton_clicked()
{
    emit sendCost(ui->lineEdit->text());
    this->close();
}

