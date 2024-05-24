#include "mainwindow.h"
#include <QtWidgets/QMainWindow>
#include "./ui_mainwindow.h"
#include <string>
#include <QSet>
#include <QFile>
#include <QFileDialog>
#include <fstream>
#include <QTextStream>

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
}






class Date
{
public:
    QString NextDay(QString filedata) {
        int day = (filedata.mid(0, 2)).toInt();
        int month= (filedata.mid(3, 2)).toInt();
        int year= (filedata.mid(6, 4)).toInt();
        QString data;
        int i = 0;
        if (year % 4 == 0 || year % 100 == 0 || year % 400==0) {
            int months[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
            nextday(&day, &month, &year, months);
        }
        else {
            int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
            nextday(&day, &month, &year, months);
        }
        if (day < 10) {
            data += "0" + QString::number(day);
        }
        else {
            data += QString::number(day);
        }
        data += ".";
        if (month < 10) {
            data += "0" + QString::number(month);
        }
        else {
            data += QString::number(month);;
        }
        data += ".";
        if (year < 10) {
            data += "000" + QString::number(year);
        }
        else if (year < 100) {
            data += "00" + QString::number(year);
        }
        else if (year < 1000) {
            data += "0" + QString::number(year);
        }
        else {
            data += QString::number(year);
        }
        return data;
    }
    QString PreviousDay(QString filedata) {
        int day = (filedata.mid(0, 2)).toInt();
        int month = (filedata.mid(3, 2)).toInt();
        int year = (filedata.mid(6, 4)).toInt();
        QString data;
        int i = 0;
        if (year % 4 == 0 || year % 100 == 0 || year%400==0) {
            int months[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
            lastday(&day, &month, &year, months);
        }
        else {
            int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
            lastday(&day, &month, &year, months);
        }
        if (day < 10) {
            data += "0" + QString::number(day);
        }
        else {
            data += QString::number(day);
        }
        data += ".";
        if (month < 10) {
            data += "0" + QString::number(month);
        }
        else {
            data += QString::number(month);
        }
        data += ".";
        if (year < 10) {
            data += "000" + QString::number(year);
        }
        else if (year < 100) {
            data += "00" + QString::number(year);
        }
        else if (year < 1000) {
            data += "0" + QString::number(year);
        }
        else {
            data += QString::number(year);
        }
        return data;
    }
    bool IsLeap(QString filedata) {
        int year = (filedata.mid(6, 4)).toInt();
        if (year % 4 == 0 || year % 100 == 0 || year % 400 == 0) { return 1; }
        else {
            return 0;
        }
    }
    short WeekNumber(QString filedata){
        int day = (filedata.mid(0, 2).toInt());
        int month = (filedata.mid(3, 2).toInt());
        int year = (filedata.mid(6, 4).toInt());
        short i;
        if (year % 4 == 0 || year % 100 == 0 || year % 400 == 0) {
            int months[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
            i= numberofweek(&day, &month, &year, months);
        }
        else {
            int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
            i= numberofweek(&day, &month, &year, months);
        }

        return i;
    }
    int DaysTillYourBithday(QString filedata, QString ) {
        int day1 = (filedata.mid(0, 2).toInt());
        int month1 = (filedata.mid(3, 2).toInt());
        int year1 = (filedata.mid(6, 4).toInt());
        int day2 = (bithdaydate.mid(0, 2).toInt());
        int month2 = (bithdaydate.mid(3, 2).toInt());
        int year2 = (bithdaydate.mid(6, 4).toInt());
        int count1 = 0, count2 = 0, count = 0;
        if (month2 > month1) {
            if (year1 % 4 == 0 || year1 % 100 == 0 || year1 % 400 == 0) {
                int months[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
                for (int i = 0; i < month1; i++) {
                    count1 += months[i];
                }
                for (int i = 0; i < month2; i++) {
                    count2 += months[i];
                }
                count = count2 - count1;
            }
            else {
                int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
                for (int i = 0; i < month1; i++) {
                    count1 += months[i];
                }
                for (int i = 0; i < month2; i++) {
                    count2 += months[i];
                }
                count = count2 - count1;
            }
        }
        else if (month2 == month1) {
            if (day2 >= day1) {
                count = day2 - day1;
            }
            else {
                if (year1 % 4 == 0 || year1 % 100 == 0 || year1 % 400 == 0) {
                    int months[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
                    count1 += 366;
                    int count4 = 0;
                    for (int i = 0; i < month2; i++) {
                        count4 += months[i];
                    }
                    count4 += day2;
                    for (int i = 0; i < month1; i++) {
                        count4 -= months[i];
                    }
                    count4 -= day1;
                    count = count1 - count4;
                }
                else {
                    int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
                    count1 += 365;
                    int count4 = 0;
                    for (int i = 0; i < month1; i++) {
                        count4 += months[i];
                    }
                    count4 += day1;
                    for (int i = 0; i < month2; i++) {
                        count4 -= months[i];
                    }
                    count4 -= day2;
                    count = count1 - count4;
                }
            }
        }
        else {
            if (year1 % 4 == 0 || year1 % 100 == 0 || year1 % 400 == 0) {
                int months[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
                count1 += 366;
                int count4 = 0;
                for (int i = 0; i < month1; i++) {
                    count4 += months[i];
                }
                count4 += day1;
                for (int i = 0; i < month2; i++) {
                    count4 -= months[i];
                }
                count4 -= day2;
                count = count1 - count4;
            }
            else {
                int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
                count1 += 365;
                int count4 = 0;
                for (int i = 0; i < month1; i++) {
                    count4 += months[i];
                }
                count4 += day1;
                for (int i = 0; i < month2; i++) {
                    count4 -= months[i];
                }
                count4 -= day2;
                count = count1 - count4;
            }
        }

        return count;
    }
    int Duration(QString filedata, QString randomdate){
        int day1 = (filedata.mid(0, 2)).toInt();
        int month1 = (filedata.mid(3, 2)).toInt();
        int year1 = (filedata.mid(6, 4)).toInt();
        int day2 = (randomdate.mid(0, 3)).toInt();
        int month2 = (randomdate.mid(3, 2)).toInt();
        int year2 = (randomdate.mid(6, 4)).toInt();
        int count1=0, count2=0,count=0;
        for (int i = 0; i < year1; i++) {
            if (i % 4 == 0 || i % 100 == 0 || i % 400 == 0) {
                count1 += 366;
            }
            else {
                count1 += 365;
            }
        }
        if (year1 % 4 == 0 || year1 % 100 == 0 || year1 % 400 == 0) {
            int months[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
            for (int i = 0; i < month1; i++) {
                count1 += months[i];
            }
        }
        else {
            int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
            for (int i = 0; i < month1; i++) {
                count1 += months[i];
            }
        }
        count1 += day1;

        for (int i = 0; i < year2; i++) {
            if (i % 4 == 0 || i % 100 == 0 || i % 400 == 0) {
                count2 += 366;
            }
            else {
                count2 += 365;
            }
        }
        if (year2 % 4 == 0 || year2 % 100 == 0 || year2 % 400 == 0) {
            int months[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
            for (int i = 0; i < month2; i++) {
                count2 += months[i];
            }
        }
        else {
            int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
            for (int i = 0; i < month2; i++) {
                count2 += months[i];
            }
        }
        count2 += day2;
        count = abs(count2-count1);
        return count;
    }
};






MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
        bithdaydate=ui->Edit->text();
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



