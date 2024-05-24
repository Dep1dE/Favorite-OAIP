#include "deletewindow.h"
#include "ui_deletewindow.h"

deletewindow::deletewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletewindow)
{
    ui->setupUi(this);
}

deletewindow::~deletewindow()
{
    delete ui;
}

void deletewindow::addSize(const int &n)
{
    ui->spinBox->setMaximum(n);
}


void deletewindow::on_pushButton_clicked()
{
    emit sendIndex(ui->spinBox->value());

    this->close();
}
