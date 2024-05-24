#include "window1.h"
#include "ui_window1.h"
#include "mainwindow.h"

Window1::Window1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window1)
{
    ui->setupUi(this);
    deadlineday=1;
    deadlinemonth=1;
    deadlineyear=1000;
    startday=1;
    startmonth=1;
    startyear=1000;
    finishday=1;
    finishmonth=1;
    finishyear=1000;
}

Window1::~Window1()
{
    delete ui;
}
extern QString path;
extern bool flag;
extern int countrows;

QString familia,name,otchestvo,nameprogect,taskprogect,dedline,startdate,finishdate,fio, s;
void Window1::on_pushButton_clicked()
{

    familia=ui->lineEdit->text();
    name=ui->lineEdit_2->text();
    otchestvo=ui->lineEdit_3->text();
    nameprogect=ui->lineEdit_4->text();
    taskprogect=ui->lineEdit_5->text();
    fio=familia+' '+name+' '+otchestvo;
    dedline = (deadlineday >= 10)?QString::number(deadlineday): "0" + QString::number(deadlineday) + "." + ((deadlinemonth>=10) ? QString::number(deadlinemonth):"0"+QString::number(deadlinemonth)) + "." + QString::number(deadlineyear);
    startdate = ((startday >= 10)?QString::number(startday):"0" + QString::number(startday)) + "." + ((startmonth >= 10)?QString::number(startmonth):"0"+QString::number(startmonth)) + "." + QString::number(startyear);
    finishdate = ((finishday>=10)?QString::number(finishday):"0"+QString::number(finishday)) + "." + ((finishmonth >= 10)?QString::number(finishmonth):"0"+QString::number(finishmonth)) + "." + QString::number(finishyear);

    QFile file(path);
         if (file.open(QIODevice::Append)){
            s += fio + ", ";
            s += nameprogect + ", ";
            s += taskprogect + ", ";
            s += dedline + ", ";
            s += startdate + ", ";
            s += finishdate+'\n';
            qDebug() << s;
            QTextStream out(&file);
            out<< s;
            flag=true;

            emit send(fio, nameprogect, taskprogect, dedline, startdate, finishdate);
            file.close();
         }
    s=  "";
    window()->close();

    //void addItemTable(){
        //++countrows;

    /*void addItemTable(){
        ++countrows;
        ui->tableWidget->setRowCount(countrows);
    }
        MainWindow::tableWidget->setRowCount(countrows);
    } */
}



void Window1::on_comboBox_currentIndexChanged(int index)
{
    deadlineday = index + 1;
}

void Window1::on_comboBox_2_currentIndexChanged(int index)
{
    deadlinemonth = index + 1;

      if (deadlinemonth!=2)
      {
          int days = 30 + (deadlinemonth + (deadlinemonth / 8)) % 2;

          if (ui->comboBox->count() > days)
          {
              for (; ui->comboBox->count() - days; )
                  ui->comboBox->removeItem(ui->comboBox->count() - 1);
          }
          else if (ui->comboBox->count() < days)
          {
              for (; days - ui->comboBox->count(); )
                  ui->comboBox->addItem(QString::number(ui->comboBox->count() + 1), QVariant());
          }
      }
      else
      {
          if ((!(deadlineyear % 4) && (deadlineyear % 100))  ||!(deadlineyear  % 400))
          {
              for (; ui->comboBox->count() - 29; )
                  ui->comboBox->removeItem(ui->comboBox->count() - 1);
          }
          else
          {
              for (; ui->comboBox->count() - 28; )
                  ui->comboBox->removeItem(ui->comboBox->count() - 1);
          }
      }
}


void Window1::on_spinBox_valueChanged(int arg1)
{
    deadlineyear = arg1;

        if (!(deadlinemonth ^ 2))
        {
            if ((!(arg1 % 4) && (arg1 % 100))  ||!(arg1  % 400))
            {
                if (!(ui->comboBox->count() ^ 28))
                    ui->comboBox->addItem("29", QVariant ());
            }
            else if (!(ui->comboBox->count() ^ 29))
            {
                ui->comboBox->removeItem(28);
            }
        }
}


void Window1::on_comboBox_3_currentIndexChanged(int index)
{
    startday = index + 1;
}


void Window1::on_comboBox_4_currentIndexChanged(int index)
{
    startmonth = index + 1;

      if (startmonth!=2)
      {
          int days = 30 + (startmonth + (startmonth / 8)) % 2;

          if (ui->comboBox_3->count() > days)
          {
              for (; ui->comboBox_3->count() - days; )
                  ui->comboBox_3->removeItem(ui->comboBox_3->count() - 1);
          }
          else if (ui->comboBox_3->count() < days)
          {
              for (; days - ui->comboBox_3->count(); )
                  ui->comboBox_3->addItem(QString::number(ui->comboBox_3->count() + 1), QVariant());
          }
      }
      else
      {
          if ((!(startyear % 4) && (startyear % 100))  ||!(startyear  % 400))
          {
              for (; ui->comboBox_3->count() - 29; )
                  ui->comboBox_3->removeItem(ui->comboBox_3->count() - 1);
          }
          else
          {
              for (; ui->comboBox_3->count() - 28; )
                  ui->comboBox_3->removeItem(ui->comboBox_3->count() - 1);
          }
      }
}


void Window1::on_spinBox_2_valueChanged(int arg1)
{
    startyear = arg1;

        if (!(startmonth ^ 2))
        {
            if ((!(arg1 % 4) && (arg1 % 100))  ||!(arg1  % 400))
            {
                if (!(ui->comboBox_3->count() ^ 28))
                    ui->comboBox_3->addItem("29", QVariant ());
            }
            else if (!(ui->comboBox_3->count() ^ 29))
            {
                ui->comboBox_3->removeItem(28);
            }
        }
}


void Window1::on_comboBox_5_currentIndexChanged(int index)
{
    finishday = index + 1;
}


void Window1::on_comboBox_6_currentIndexChanged(int index)
{
    finishmonth = index + 1;

      if (finishmonth!=2)
      {
          int days = 30 + (finishmonth + (finishmonth / 8)) % 2;

          if (ui->comboBox_5->count() > days)
          {
              for (; ui->comboBox_5->count() - days; )
                  ui->comboBox_5->removeItem(ui->comboBox_5->count() - 1);
          }
          else if (ui->comboBox_5->count() < days)
          {
              for (; days - ui->comboBox_5->count(); )
                  ui->comboBox_5->addItem(QString::number(ui->comboBox_5->count() + 1), QVariant());
          }
      }
      else
      {
          if ((!(finishyear % 4) && (finishyear % 100))  ||!(finishyear  % 400))
          {
              for (; ui->comboBox_5->count() - 29; )
                  ui->comboBox_5->removeItem(ui->comboBox_5->count() - 1);
          }
          else
          {
              for (; ui->comboBox_5->count() - 28; )
                  ui->comboBox_5->removeItem(ui->comboBox_5->count() - 1);
          }
      }
}


void Window1::on_spinBox_3_valueChanged(int arg1)
{
    finishyear = arg1;

        if (!(finishmonth ^ 2))
        {
            if ((!(arg1 % 4) && (arg1 % 100))  ||!(arg1  % 400))
            {
                if (!(ui->comboBox_5->count() ^ 28))
                    ui->comboBox_5->addItem("29", QVariant ());
            }
            else if (!(ui->comboBox_5->count() ^ 29))
            {
                ui->comboBox_5->removeItem(28);
            }
        }
}

