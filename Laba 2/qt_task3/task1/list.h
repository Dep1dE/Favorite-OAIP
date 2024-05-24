#define LIST_H

#include <QString>

class List
{
public:
    List();
    ~List();

    struct Element
    {
        Element* next;
        Element* prev;
        QString data;
        bool isOperator();
    };

    Element* begin;
    Element* end;
    int size;

    Element* getElement(const int&);
    void pushFront(QString);
    void pushBack(QString);
    void pushBack(QChar);
    void addElement(const int&, QString);
    void deleteElement(const int&);
};
