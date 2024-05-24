#include <QDebug>
#include "list.h"

List::List()
{
    begin = nullptr;
    end = nullptr;
    size = 0;
}

List::~List() {}

List::Element* List::getElement(const int& index)
{
        int pos = 0;
        Element* temp = this->begin;

        for (; pos < index; ++pos)
            temp = temp->next;

        return temp;
}

void List::pushFront(QString n)
{
    if (this->size)
    {
        Element* newElement = new Element;

        newElement->prev = nullptr;
        newElement->next = this->begin;
        newElement->data = n;
        //newElement->data = info;

        begin->prev = newElement;

        begin = newElement;

        ++this->size;

        return;
    }

    Element* newElement = new Element;

    newElement->next = nullptr;
    newElement->prev = nullptr;
    newElement->data = n;

    begin = newElement;
    end = newElement;

    ++this->size;
}

void List::pushBack(QString n)
{
    if (!this->size)
    {
        Element* newElement = new Element;
        //newElement->data = info;
        newElement->data = n;
        newElement->next = nullptr;
        newElement->prev = nullptr;

        begin = newElement;
        end = newElement;

        ++this->size;

        return;
    }

    Element* newElement = new Element;
    //newElement->data = info;
    newElement->data = n;
    newElement->next = nullptr;
    newElement->prev = end;

    end->next = newElement;

    end = newElement;

    ++this->size;

    return;
}

void List::pushBack(QChar n)
{
    if (!this->size)
    {
        Element* newElement = new Element;
        //newElement->data = info;
        newElement->data = n;
        newElement->next = nullptr;
        newElement->prev = nullptr;

        begin = newElement;
        end = newElement;

        ++this->size;

        return;
    }

    Element* newElement = new Element;
    //newElement->data = info;
    newElement->data = n;
    newElement->next = nullptr;
    newElement->prev = end;

    end->next = newElement;

    end = newElement;

    ++this->size;

    return;
}

void List::addElement(const int& index, QString n)
{
    if (size < index)
        return;

    if (index < 0)
        return;

    if (!index)
    {
        if (this->size)
        {
            this->pushFront(n);

            return;
        }

        this->pushBack(n);

        return;
    }

    if (index ^ size)
    {
        Element* newElement = new Element;

        newElement->data = n;
        //newElement->data = info;
        newElement->prev = this->getElement(index - 1);
        newElement->next = this->getElement(index);

        this->getElement(index - 1)->next = newElement;
        this->getElement(index)->prev = newElement;

        ++this->size;

        return;
    }

    this->pushBack(n);
}

void List::deleteElement(const int& index)
{
    if (index < 0 || index >= this->size) return;

    if (!(this->size ^ 1))
    {
        Element* elem = this->begin;

        begin->next = nullptr;
        end->prev = nullptr;

        begin = nullptr;
        end = nullptr;

        delete elem;

        --this->size;

        return;
    }

    if (!index)
    {
        Element* elem = this->begin;

        begin = begin->next;
        begin->prev = nullptr;

        delete elem;

        --this->size;

        return;
    }

    if ((this->size - 1) ^ index)
    {
        Element* elem = this->getElement(index);

        elem->next->prev = elem->prev;
        elem->prev->next = elem->next;

        delete elem;

        --this->size;

        return;
    }

    Element* elem = this->end;

    end = end->prev;
    end->next = nullptr;

    delete elem;

    --this->size;
}

bool List::Element::isOperator()
{
    if (data == "-" || data == "+" || data == "/" || data == "*") return true;
    return false;
}
