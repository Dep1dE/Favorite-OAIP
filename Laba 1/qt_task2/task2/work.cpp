#include "work.h"
#include <QDate>

WORK::WORK(QString fio, QString name_of_project, QString task, QString deadline, QString date_start, QString date_finish){
   this->fio = fio;
   this->name_of_project = name_of_project;
   this->task = task;
   this->deadline = deadline;
   this->date_start = date_start;
   this -> date_finish = date_finish;

   QString _day = "";
   QString _month = "";
   QString _year = "";

   for (int i = 0; i < date_finish.length(); ++i)
   {
       if (date_finish[i] == '.')
        {
            ++i;
            for (int j = i; j < date_finish.length(); ++j)
            {
               if (date_finish[j] == '.')
               {
                    ++j;
                    for (int k = j; k < date_finish.length(); ++k)
                    {
                        _year += date_finish[k];
                        j = k;
                        i = k;
                    }
               }
                if (j !=  date_finish.length() - 1)
               _month += date_finish[j];
            }
        }
        if (i !=  date_finish.length() - 1)
       _day += date_finish[i];
   }

   day = _day.toInt();
   month = _month.toInt();
   year = _year.toInt();

   _day = "";
   _month = "";
   _year = "";

   for (int i = 0; i < date_start.length(); ++i)
   {
       if (date_start[i] == '.')
        {
            ++i;
            for (int j = i; j < date_start.length(); ++j)
            {
               if (date_start[j] == '.')
               {
                    ++j;
                    for (int k = j; k < date_start.length(); ++k)
                    {
                        _year += date_start[k];
                        j = k;
                        i = k;
                    }
               }
                if (j !=  date_start.length() - 1)
               _month += date_start[j];
            }
        }
        if (i !=  date_start.length() - 1)
       _day += date_start[i];
   }

   startDay = _day.toInt();
   startMonth = _month.toInt();
   startYear = _year.toInt();
}

QString WORK::getQString()
{
    return fio + "," + name_of_project + "," + task + "," + deadline + "," + date_start + "," + date_finish + '\n';
}

QString WORK::getFio()
{
    return fio;
}

QString WORK::getName()
{
    return name_of_project;
}

QString WORK::getTask()
{
    return task;
}

QString WORK::getDeadline()
{
    return deadline;
}

QString WORK::getStartDate()
{
    return date_start;
}

QString WORK::getFinishDate()
{
    return date_finish;
}

int WORK::getDay()
{
    return day;
}

int WORK::getMonth()
{
    return month;
}

int WORK::getYear()
{
    return year;
}

int WORK::getStartDay()
{
    return startDay;
}

int WORK::getStartMonth()
{
    return startMonth;
}

int WORK::getStartYear()
{
    return startYear;
}

int WORK::hours()
{
    if (year < 2023) return 0;
    if (startYear > 2023) return 0;

    if (month < 2) return 0;
    if (startMonth > 2) return 0;

    if (month != 2)
    {
        if (startMonth != 2) return 28;
        return 28 - startDay;
    }
    if (startMonth != 2) return day;

    return (day - startDay > 0) ? day - startDay : 0;
}

