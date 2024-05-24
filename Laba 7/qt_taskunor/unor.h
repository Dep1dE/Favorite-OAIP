#ifndef UNOR_H
#define UNOR_H
#include <iostream>
template <typename T>
class LNode
{
public:
    LNode* next;
    LNode* prev;

    T* data;

    LNode(T* t) : next(nullptr), prev(nullptr), data(t) { }
};

template <typename T>
class List
{
private:
    LNode<T>* first;
    LNode<T>* last;
    int Size;
public:
    List() : first(nullptr), last(nullptr), Size(0) { }

    void push(T* t)
    {
        auto node = new LNode<T>(t);

        if (!Size) { first = last = node; ++Size; return; }

        node->prev = last;
        last->next = node;

        last = node;

        ++Size;
    }

    int size() { return Size; }

    LNode<T>* operator [] (const int& index)
    {
        auto node = first;

        for (auto i = 0; i < index; ++i) { node = node->next; }

        return node;
    }
};


template <typename T, typename K, typename HF = std::hash<K>>
class Unordered_map
{
private:
    List<std::pair<T, K>>* arr;
    int capacity;
    int size;

    HF hash;

public:
    Unordered_map() : arr(new List<std::pair<T, K>>[10]), capacity(10), size(0) { }

    void insert(const T& t, const K& k)
    {
        arr[hash(k) % capacity].push(std::make_pair(t, k));

        ++size;

        if (3 * size > 2 * capacity) rehash();
    }

    void rehash()
    {
        List<std::pair<T, K>>* _arr = new List<std::pair<T, K>>[2 * capacity];

        auto _capacity = 2 * capacity;

        for (auto i = 0; i < capacity; ++i)
        {
            for (auto j = 0; j < arr[i].size(); ++j) { _arr[hash(arr[i][j].second) % _capacity].push(arr[i][j]); }
        }

        delete[] arr;

        capacity = _capacity;
        arr = _arr;
    }

    bool contains(const K& k)
    {
        auto l = arr[hash(k) % capacity];

        for (auto i = 0; i < l.size(); ++i) { if (l[i].second == k) return true; }

        return false;
    }

    std::pair<T, K> find(const K& k)
    {
        auto l = arr[hash(k) % capacity];

        for (auto i = l.size() - 1; i >= 0; --i)
        {
            if (l[i].second == k) return l[i];
        }

        return std::make_pair(T(), K());
    }

    void erase(const K& k)
    {
        size -= arr[hash(k) % capacity].size();

        arr[hash(k) % capacity].clear();
    }
};
#endif // UNOR_H
