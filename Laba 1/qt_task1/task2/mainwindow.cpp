  #include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSet>
#include <QFile>
#include <QFileDialog>
#include <fstream>
#include <QTextStream>
#include <QTime>
#include <QDate>
#include <stdio.h>
#include <QDebug>
#include <iostream>

using namespace std;
QString bithdaydate,path;

bool chek(QString s){
    QString text, s1;
    bool flag1= false, flag2=false;
    for(int i=0;i<s.size();i++){
        if((s[i]>='0' && s[i]<='9')||s[i]=='.' || s[i]==' ' || s[i]=='\0' || s[i]=='\n' || s[i]=='\xd'){
            flag2=true;
        }
        else{
            flag2=false;

            break;
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
        s1+=s[i];
        }
        if(s1.size()==10){
            int day = (s1.mid(0, 2)).toInt();
            int month= (s1.mid(3, 2)).toInt();
            int year= (s1.mid(6, 4)).toInt();
            if(year<0 || year>9999){
                flag1=false;
                break;
            }
            else{
                if(month<1 || month >12){
                    flag1=false;
                    break;
                }
                else{
                    if (year % 4 == 0 || year % 100 == 0 || year % 400==0) {
                        int months[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
                        if(day<1 || day>months[month-1]){
                            flag1=false;
                            break;
                        }
                        else{
                            flag1=true;
                        }
                    }
                    else {
                        int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
                        if(day<1 || day>months[month-1]){
                            flag1=false;
                            break;
                        }
                        else{
                            flag1=true;
                        }
                    }
                }
            }
            s1="";
        }
    }
    if(flag1==true && flag2==true){
        return true;
    }
    else{
        return false;
    }
}

void nextday(int* day, int* month, int* year, int months[12])
{
    if (*month == 12) {
        if (*day == months[*month - 1]) {
            (*year)++;
            *month = 1;
            *day = 1;
        }
        else {
            (*day)++;
        }
    }
    else {
        if (*day == months[*month - 1]) {
            (*month)++;
            *day = 1;
        }
        else {
            (*day)++;
        }
    }
}
void lastday(int* day, int* month, int* year, int months[12])
{
    if (*month == 1) {
        if (*day == 1) {
            (*year)--;
            *month = 12;
            *day = months[*month - 1];
        }
        else {
            (*day)--;
        }
    }
    else {
        if (*day == 1) {
            (*month)--;
            *day = months[*month - 1];
        }
        else {
            (*day)--;
        }
    }
}
short numberofweek(int* day, int* month, int* year, int months[12])
{
    double count=0;
    short number;
        for (int i = 0; i < *month-1; i++) {
            count += months[i];
        }
    count += *day;
    number = ceil(count / 7);
    return number;
}MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
     ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sizearray = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked() {
    QString text,s,s1;
    path = QFileDialog::getOpenFileName(this,"Выбрать файл","C:/",
                                               "All Files (*.txt)");
   QFile file(path);
   if(file.open(QIODevice::ReadOnly))
       {
           bool flag=false;
           QTextStream out(&file);
           s = out.readAll();
           flag=chek(s);
           if(flag==true || s==""){
                ui->listWidget->clear();
                ui->textBrowser->clear();
               for(int i=0;i<s.size();i++){
                   if(s[i]!=' '){
                   text+=s[i];}

                   if(text.size()==10){
                       ui->listWidget->addItem(text);
                       text="";
                       sizearray++;
                   }
               }
               qDebug()<<QString::number(sizearray);
               array = new Date[sizearray];
               int j=0;
               for(int i=0;i<s.size();i++){
                   if(s[i]!=' '){
                   text+=s[i];}

                   if(text.size()==10){
                       array[j]=Date(text);
                       text="";
                       j++;
                   }
               }
           }
           else{
              ui->textBrowser->setText("Данные файла не соответствуют правильному формату. Пример: 12.08.2004");
           }
       }
    }




void MainWindow::on_pushButton_2_clicked()
{

    bithdaydate=ui->Edit->text();
    bool flag=false;
    flag=chek(bithdaydate);
    if(flag){
        ui->textBrowser->clear();
        bithdaydate = ui->Edit->text();
    }
    else{
        ui->textBrowser->clear();
         ui->textBrowser->setText("Неправильный формат даты рождения. Пример: 28.09.2004");
         bithdaydate="";
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    QString adddate;
    bool flag=false;
    adddate=ui->lineEdit->text();
    flag=chek(adddate);
    QFile file(path);
    if(flag){
        if (file.open(QIODevice::Append)) {
             QTextStream writeStream(&file);
             writeStream<<" "<<adddate;
             ui->listWidget->addItem(adddate);
             ui->textBrowser->clear();
             sizearray+=1;
             array1 = new Date[sizearray];
            for(int i=0;i<sizearray-1; i++){
                array1[i]=array[i];
            }
             array1[sizearray - 1] = Date(adddate);
             array = new Date[sizearray];
             for(int i=0;i<sizearray; i++){
                 array[i]=array1[i];
             }
        }
        else{
            ui->textBrowser->clear();
             ui->textBrowser->setText("Вы не открыли файл");
        }
        file.close();
    }
    else{
        ui->textBrowser->clear();
        ui->textBrowser->setText("Неправильный формат даты. Пример: 12.08.2004");
    }


}

void MainWindow::on_pushButton_3_clicked()
{
    ui->textBrowser->clear();
    if(bithdaydate==""){
        ui->textBrowser->setText("Вы не ввели дату рождения");

    }
    else{
    QDate cd = QDate::currentDate();
    QString qs = cd.toString("dd.MM.yyyy");

    // QString qs = QString::fromStdString(cd.);
    Date myclass;
    int item=ui->listWidget->currentRow();
    if(item==-1){
        ui->textBrowser->clear();
         ui->textBrowser->setText("Вы не выбрали элемент");
    }
    else{
        ui->textBrowser->clear();
    ui->textBrowser->append("*Следующий день от выбранной даты: ");
    ui->textBrowser->append(myclass.NextDay(array[item].getdata()));
    ui->textBrowser->append("*Предыдущий день от выбранной даты ");
    ui->textBrowser->append(myclass.PreviousDay(array[item].getdata()));
    ui->textBrowser->append("*Проверка на високосный год: ");
    if(myclass.IsLeap(array[item].getdata()) == 1){
        ui->textBrowser->append("Год является високосным");
    }else{
        ui->textBrowser->append("Год не является високосныи");
    }
    ui->textBrowser->append("*Номер недели в этом году: ");
    ui->textBrowser->append(QString::number(myclass.WeekNumber(array[item].getdata())));
    ui->textBrowser->append("*Количество дней до вашего дня рождения: ");
    ui->textBrowser->append(QString::number(myclass.DaysTillYourBithday(array[item].getdata(),myclass.bithgetdate(bithdaydate))));
    ui->textBrowser->append("*Количество дней между текущей и выбранной датой: ");
    ui->textBrowser->append(QString::number(myclass.Duration(array[item].getdata(),qs)));
    ui->textBrowser->append("*Количество дней между выбранной датой в списке и следующей датой в списке: ");
    if(item==sizearray-1){
        ui->textBrowser->append("выбранная дата является последней в списке");
    }
    else{
        ui->textBrowser->append(QString::number(myclass.Duration(array[item].getdata(),array[item+1].getdata())));
    }


}
}
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->textBrowser->clear();
    Date myclass;
    if(path==""){
        ui->textBrowser->clear();
        ui->textBrowser->setText("Вы не открыли файл и не выбрали элемент который хотите изменить");}
    else{

    QFile file(path);
    bool flag=false;
    int item=ui->listWidget->currentRow();
    if(item==-1){
        ui->textBrowser->clear();
        ui->textBrowser->setText("Вы не выбрали элемент который хотите изменить");}
    else{
    QString newdata=ui->lineEdit->text();
    QString olddata=array[item].getdata();
    array[item]=newdata;
    flag=chek(newdata);
    if(flag){
        if (file.open(QIODevice::ReadWrite | QIODevice::Text)) {
            QString fileContent = file.readAll();
            int index = fileContent.indexOf(olddata);
            file.seek(index);
                    QTextStream out(&file);
                        out << newdata;
                        fileContent.remove(0, index + olddata.length());
                            out << fileContent;
          ui->listWidget->currentItem()->setText(newdata);
        }

        else{
            ui->textBrowser->clear();
             ui->textBrowser->setText("Вы не открыли файл");
        }
        file.close();
    }
    else{
        ui->textBrowser->clear();
        ui->textBrowser->setText("Неправильный формат даты. Пример: 12.08.2004");
    }}

}
}

