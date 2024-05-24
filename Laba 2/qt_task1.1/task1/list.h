#ifndef LIST_H
#define LIST_H
#include <QString>
#include <QFile>
#include <fstream>
#include <QTextStream>
#include <QDebug>


//using namespace std;


class Value
{
public:
    QString getFio(){
        return fio;
    }
    int getNumberOfOtdel(){
        return NumberOfOtdel;
    }
    QString getDoljnost(){
        return doljnost;
    }
    QString getDate(){
        return date;
    }
    void setFio(QString fio){
        this->fio=fio;
    }
    void setNumberOfOtdel(int NumberOfOtdel){
        this->NumberOfOtdel=NumberOfOtdel;
    }
    void setDoljnost(QString doljnost){
        this->doljnost=doljnost;
    }
    void setDate(QString date){
        this->date=date;
    }

private:
    QString fio;
    int NumberOfOtdel;
    QString doljnost;
    QString date;

};


struct Node {
    Value value;
    Node* next;
    Node* prev;
    Node(Value _val) : value(_val), next(nullptr), prev(nullptr) {}
};




class list
{
public:
    bool is_empty() {
        return first == nullptr;
    }

    void push_back(Value _val) {
           Node* p = new Node(_val);

           if (is_empty()) {

               first = p;
               last = p;
               size++;
               return;
           }
           p->prev=last;
           size++;
           last->next = p;
           last = p;
    }
    void print() {
            if (is_empty()) return;
            Node* p = first;
            while (p) {
                qDebug()<< p->value.getFio() <<'\n'<< p->value.getNumberOfOtdel()<< '\n' << p->value.getDoljnost() << '\n' << p->value.getDate() << '\n';
                p = p->next;
            }
           qDebug()<< '\n';
        }

    int Size() {return size;};

    Node* getElement (const int &index) {
            if (is_empty()) return nullptr;
            Node* p = first;
            for (int i = 0; i < index; i++) {
                p = p->next;
                if (!p) return nullptr;
            }
            return p;
        };
    void remove(const int &index){
        if (is_empty()) return;
        else if(this->Size() == 1){
            delete first;
            first=nullptr;
            last=nullptr;
            this->size--;
            return;
        }
        if(index==size-1){
            Node* elem=this->last;
            last=last->prev;
            last->next=nullptr;
            delete elem;
            size--;
            return;
        }
        if(index==0){
            Node* elem=this->first;
            first=first->next;
            first->prev=nullptr;
            delete elem;
            size--;
            return;
        }
        Node* elem=this->getElement(index);
        elem->next->prev=elem->prev;
        elem->prev->next=elem->next;
        delete elem;
        size--;
        return;

    }




    void changeElement(const int &index, const Value &v)
    {
        Node* n = this->getElement(index);

        n->value = v;
    }

    Node* mergeSortFio(Node *head)
    {
        qDebug() << 23432;
        if (!head || !head->next)
                return head;
            Node* second = split(head);

            head = mergeSortFio(head);
            second = mergeSortFio(second);

            return mergeFio(head, second);
    }

    Node* mergeFio(Node *first, Node *second)
    {
        if (!first)
                return second;

            if (!second)
                return first;

            if (first->value.getFio() < second->value.getFio())
            {
                first->next = mergeFio(first->next, second);
                first->next->prev = first;
                first->prev = nullptr;
                return first;
            }
            else
            {
                second->next = mergeFio(first, second->next);
                second->next->prev = second;
                second->prev = nullptr;
                return second;
            }
    }

    Node* mergeSortOtdel(Node *head)
    {
        if (!head || !head->next)
                return head;
            Node* second = split(head);

            head = mergeSortOtdel(head);
            second = mergeSortOtdel(second);

            return mergeOtdel(head, second);
    }

    Node* mergeOtdel(Node *first, Node *second)
    {
        if (!first)
                return second;

            if (!second)
                return first;

            if (first->value.getNumberOfOtdel() < second->value.getNumberOfOtdel())
            {
                first->next = mergeOtdel(first->next, second);
                first->next->prev = first;
                first->prev = nullptr;
                return first;
            }
            else
            {
                second->next = mergeOtdel(first, second->next);
                second->next->prev = second;
                second->prev = nullptr;
                return second;
            }
    }

    Node* mergeSortDoljnost(Node *head)
    {
        if (!head || !head->next)
                return head;
            Node* second = split(head);

            head = mergeSortDoljnost(head);
            second = mergeSortDoljnost(second);

            return mergeDoljnost(head, second);
    }

    Node* mergeDoljnost(Node *first, Node *second)
    {
        if (!first)
                return second;

            if (!second)
                return first;

            if (first->value.getDoljnost() < second->value.getDoljnost())
            {
                first->next = mergeDoljnost(first->next, second);
                first->next->prev = first;
                first->prev = nullptr;
                return first;
            }
            else
            {
                second->next = mergeDoljnost(first, second->next);
                second->next->prev = second;
                second->prev = nullptr;
                return second;
            }
    }

    Node *split(Node *head)
    {
        Node* fast = head, *slow = head;
            while (fast->next && fast->next->next)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
            Node* temp = slow->next;
            slow->next = nullptr;
            return temp;
    }
    Node* first;
    Node* last;
     list() {size = 0; first = nullptr; last = nullptr;};
private:
    int size;

};

#endif // LIST_H
