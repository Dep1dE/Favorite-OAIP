#include "oshibka.h"
#include "ui_oshibka.h"

oshibka::oshibka(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::oshibka)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(228);
}

oshibka::~oshibka()
{
    delete ui;
}

void oshibka::osibka(const int &code, const int &lin, const int &simbol)
{
    if (code == 0)
    {
        ui->textEdit->setText("Открывающая без закрывающей \n Строка №" + QString::number(lin) + ",столбец №" + QString::number(simbol));
    }
    else if (code == 1)
    {
        ui->textEdit->setText("Закрывающая без открывающей \n Строка №" + QString::number(lin) + ",столбец № " + QString::number(simbol) + "");

    }
    else if (code == 2)
    {
        ui->textEdit->setText("Закрывающая не соответствует открывающей \n Строка №" + QString::number(lin) + ",столбец № " + QString::number(simbol) + "");

    }
    else if (code == 3)
    {
        ui->textEdit->setText("Success");

    }
}
