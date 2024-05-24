#include "nameinfo.h"
#include "ui_nameinfo.h"

nameinfo::nameinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nameinfo)
{
    ui->setupUi(this);
}

nameinfo::~nameinfo()
{
    delete ui;
}

void nameinfo::on_pushButton_clicked()
{
    emit sendName(ui->lineEdit->text());
    this->close();
}

