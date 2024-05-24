#include "dateinfo.h"
#include "ui_dateinfo.h"

dateinfo::dateinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dateinfo)
{
    ui->setupUi(this);
}

dateinfo::~dateinfo()
{
    delete ui;
}

void dateinfo::on_pushButton_clicked()
{
    emit sendDate(ui->lineEdit->text());
    this->close();
}

