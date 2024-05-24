#include "otdelinfo.h"
#include "ui_otdelinfo.h"

otdelinfo::otdelinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::otdelinfo)
{
    ui->setupUi(this);
}

otdelinfo::~otdelinfo()
{
    delete ui;
}

void otdelinfo::on_pushButton_clicked()
{
    emit sendOtdel(ui->lineEdit->text());
    this->close();
}

