#include "stack.h"

stack::stack()
{
    size = 0;
    top = nullptr;
}

void stack::push(const double& n, const QChar& c)
{
    Element* newElement = new Element;
    newElement->num = n;
    newElement->op = c;

    if (!this->size)
    {
        this->top = newElement;
        this->top->next = nullptr;
        ++size;

        return;
    }

    newElement->next = this->top;
    this->top = newElement;

    ++size;
}

stack::Element* stack::peek(const int& index)
{
    if (index <= 0) return this->top;

    int i = index;
    if (index >= this->size - 1) i = this->size - 1;

    Element* p = this->top;

    for (int j = 0; j < i; ++j) p = p->next;

    return p;
}

void stack::pop(const int& index)
{
    Element* p = this->top;
    Element* prev = this->top;

    if (index <= 0)
    {
        this->top = p->next;
        delete p;
        --this->size;

        return;
    }

    int i = index;

    if (index >= this->size - 1) i = this->size - 1;
    for (int j = 0; j < i; ++j) { prev = p; p = p->next; }

    prev->next = p->next;
    delete p;

    --this->size;
}

int stack::Size()
{
    return this->size;
}
