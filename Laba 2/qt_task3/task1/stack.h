#ifndef STACK_H
#define STACK_H

#include <QString>

class stack
{
    struct Element
    {
        Element* next;
        double num;
        QChar op;
    };

    int size;
public:
    stack();
    Element* top;
    void push(const double&, const QChar&);
    stack::Element* peek(const int&);
    void pop(const int&);
    int Size();
};
#endif // STACK_H
