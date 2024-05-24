#include "fioinfo.h"
#include "ui_fioinfo.h"

fioInfo::fioInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fioInfo)
{
    ui->setupUi(this);
}

fioInfo::~fioInfo()
{
    delete ui;
}

void fioInfo::on_pushButton_clicked()
{
    emit sendFio(ui->lineEdit->text());
    this->close();
}

