#ifndef QUEUE_H
#define QUEUE_H

#include<memory>
#include <iostream>


struct Node {
    int data;
    std::shared_ptr<Node> next;
    std::shared_ptr<Node> prev;
    Node() : data(0), next(), prev() {}
    Node(int _data) { data = _data, next = nullptr, prev = nullptr; }
};

class Queue {
public:
    std::shared_ptr<Node>  begin;
    std::shared_ptr<Node>  end;
    int size;
public:

    bool isEmpty() {
        return begin == nullptr;
    }

    void pushBack(const int& k) {
        auto p = std::make_shared<Node>(k);
        //std::shared_ptr <Node> p(new Node(k));
        if (isEmpty()) {
            begin = p;
            end = p;
            size++;
            return;
        }
        end->next = p;
        p->prev = end;
        end = p;
        size++;
        return;
    }
    void pushFront(const int& k) {
        //std::shared_ptr <Node> p(new Node(k));
        auto p = std::make_shared<Node>(k);
        if (isEmpty()) {
            begin = p;
            end = p;
            size++;
            return;
        }

        begin->prev = p;
        p->next = begin;
        begin = p;
        size++;
        return;
    }

    void remove(const int& index) {
        //std::shared_ptr<Node> p = getElement(index);
        auto p = getElement(index);
        if (!p) { return; }
        if (!p->prev)
        {
            p->next->prev = nullptr;
            begin = p->next;
            p->next = nullptr;
            --size;
            return;
        }
        if (!p->next)
        {
            p->prev->next = nullptr;
            end = p->prev;
            p->prev = nullptr;
            --size;
            return;
        }
        p->next->prev = p->prev;
        p->prev->next = p->next;
        size--;
    }

    std::shared_ptr<Node> getElement(const int& index) {
        auto p = begin;
        if (index > size) {
            return nullptr;
        }

        else {
            for (int i = 0; i < index; ++i) {
                p = p->next;
            }
            return p;
        }
    }

};

#endif // QUEUE_H
