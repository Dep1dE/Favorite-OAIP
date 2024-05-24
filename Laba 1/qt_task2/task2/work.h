#ifndef WORK_H
#define WORK_H

#include <QString>
class WORK{
private:
    QString fio;
    QString name_of_project;
    QString task;
    QString deadline;
    QString date_start;
    QString date_finish;
    int day;
    int month;
    int year;

    int startDay;
    int startMonth;
    int startYear;
public:
    WORK (	QString fio = "", QString name_of_project = "", QString task = "", QString deadline = "", QString date_start = "", QString date_finish = "");
    QString getQString();
    QString getFio();
    QString getName();
    QString getTask();
    QString getDeadline();
    QString getStartDate();
    QString getFinishDate();

    int getDay();
    int getMonth();
    int getYear();
    int getStartDay();
    int getStartMonth();
    int getStartYear();

    int hours();
};

#endif // WORK_H
