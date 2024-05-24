#include "pushbackelement.h"
#include "ui_pushbackelement.h"

pushBackElement::pushBackElement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pushBackElement)
{
    ui->setupUi(this);

    day=1;
    month=1;
    year=2000;

    ui->yearSpinBox->setValue(2000);
}

pushBackElement::~pushBackElement()
{
    delete ui;
}

void pushBackElement::on_dayComboBox_currentIndexChanged(int index)
{
    day = index + 1;
}


void pushBackElement::on_monthComboBox_currentIndexChanged(int index)
{
    month = index + 1;

    if (month ^ 2)
    {
        int days = 30 + (month + (month / 8)) % 2;

        if (ui->dayComboBox->count() > days)
        {
            for (; ui->dayComboBox->count() - days; )
                ui->dayComboBox->removeItem(ui->dayComboBox->count() - 1);
        }
        else if (ui->dayComboBox->count() < days)
        {
            for (; days - ui->dayComboBox->count(); )
                ui->dayComboBox->addItem(QString::number(ui->dayComboBox->count() + 1), QVariant());
        }
    }
    else
    {
        if ((!(year % 4) && (year % 100)) || !(year  % 400))
        {
            for (; ui->dayComboBox->count() - 29; )
                ui->dayComboBox->removeItem(ui->dayComboBox->count() - 1);
        }
        else
        {
            for (; ui->dayComboBox->count() - 28; )
                ui->dayComboBox->removeItem(ui->dayComboBox->count() - 1);
        }
    }
}


void pushBackElement::on_yearSpinBox_valueChanged(int arg1)
{
    year = arg1;

    if (!(month ^ 2))
    {
        if ((!(arg1 % 4) && (arg1 % 100)) || !(arg1  % 400))
        {
            if (!(ui->dayComboBox->count() ^ 28))
                ui->dayComboBox->addItem("29", QVariant ());
        }
        else if (!(ui->dayComboBox->count() ^ 29))
        {
            ui->dayComboBox->removeItem(28);
        }
    }
}


void pushBackElement::on_pushButton_clicked()
{
    QString day1, month1, year1;
    if(day<10){
        day1='0'+QString::number(day);
    }
    else{
        day1=QString::number(day);
    }
    if(month<10){
        month1='0'+QString::number(month);
    }
    else{
        month1=QString::number(month);
    }
    if(year<10){
        year1="000"+QString::number(year);
    }
    else if(year>9 && year<100){
        year1="00"+QString::number(year);
    }
    else if(year>99&&year<1000){
        year1='0'+QString::number(year);
    }
    else{
        year1=QString::number(year);
    }
    per.setFio(ui->fioLineEdit->text());
    per.setDate(day1 + '.' + month1 + '.' + year1);
    per.setDoljnost(ui->dolzhnostSpinBox->text());
    per.setNumberOfOtdel(ui->otdelSpinBox->text().toInt());
    emit sendIformation(per);
    close();
}

