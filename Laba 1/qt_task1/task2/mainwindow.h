#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

void nextday(int* day, int* month, int* year, int months[12]);
void lastday(int* day, int* month, int* year, int months[12]);
short numberofweek(int* day, int* month, int* year, int months[12]);

class Date
{
private:
    QString data,bithdate;



public:

    Date(QString data = "", QString bithdate = ""){
        this->data =  data;
        this ->bithdate = bithdate;
    }
    QString getdata(){
        return data;
    }
    QString bithgetdate(QString bithdate){
        return bithdate;
    }
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
    int DaysTillYourBithday(QString filedata, QString bithdaydate) {
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
        int day2 = (randomdate.mid(0, 2)).toInt();
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

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

private:
    Date *array;
    Date *array1;

    Ui::MainWindow *ui;
    int sizearray;
};




#endif // MAINWINDOW_H
