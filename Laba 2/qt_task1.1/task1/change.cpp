#include "change.h"
#include "ui_change.h"

change::change(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change)
{
    ui->setupUi(this);

    day=1;
    month=1;
    year=2000;

    ui->yearSpinBox1->setValue(2000);
}

change::~change()
{
    delete ui;
}

void change::on_pushButton_clicked()
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
    per.setFio(ui->lineEdit->text());
    per.setDate(day1 + '.' + month1 + '.' + year1);
    per.setDoljnost(ui->lineEdit_2->text());
    per.setNumberOfOtdel(ui->spinBox->text().toInt());
    emit sendIformation(per);
    close();
}


void change::on_dayComboBox1_currentIndexChanged(int index)
{
    day = index + 1;

}


void change::on_monthComboBox1_currentIndexChanged(int index)
{
    month = index + 1;

    if (month ^ 2)
    {
        int days = 30 + (month + (month / 8)) % 2;

        if (ui->dayComboBox1->count() > days)
        {
            for (; ui->dayComboBox1->count() - days; )
                ui->dayComboBox1->removeItem(ui->dayComboBox1->count() - 1);
        }
        else if (ui->dayComboBox1->count() < days)
        {
            for (; days - ui->dayComboBox1->count(); )
                ui->dayComboBox1->addItem(QString::number(ui->dayComboBox1->count() + 1), QVariant());
        }
    }
    else
    {
        if ((!(year % 4) && (year % 100)) || !(year  % 400))
        {
            for (; ui->dayComboBox1->count() - 29; )
                ui->dayComboBox1->removeItem(ui->dayComboBox1->count() - 1);
        }
        else
        {
            for (; ui->dayComboBox1->count() - 28; )
                ui->dayComboBox1->removeItem(ui->dayComboBox1->count() - 1);
        }
    }
}


void change::on_yearSpinBox1_valueChanged(int arg1)
{
    year = arg1;

    if (!(month ^ 2))
    {
        if ((!(arg1 % 4) && (arg1 % 100)) || !(arg1  % 400))
        {
            if (!(ui->dayComboBox1->count() ^ 28))
                ui->dayComboBox1->addItem("29", QVariant ());
        }
        else if (!(ui->dayComboBox1->count() ^ 29))
        {
            ui->dayComboBox1->removeItem(28);
        }
    }
}


