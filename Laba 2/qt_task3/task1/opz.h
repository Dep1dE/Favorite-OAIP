#ifndef OPZ_H
#define OPZ_H

#include <QString>
#include "list.h"
#include "stack.h"

class OPZ
{
    QString og;
    List opz;
    double evaluation;
    double evaluate(List);
    double oper(double &, double &, const QString &);
    void swap();
    List infix(QString);
    void change(QString &, int);
    int getPriority(const QChar &);

    QString a[5]{};
    QString arr[5] = {"a", "b", "c", "d", "e"};
    int size; // его размер
public:
    OPZ();
    OPZ(const QString &, QString [], const int &_size);
    QString getOpz();
    double getEvaluation();
};

#endif // OPZ_H
