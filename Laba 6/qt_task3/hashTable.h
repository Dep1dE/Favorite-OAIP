#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <utility>
#include "Stack.h"
#include <random>
template <typename T>
class hashTable
{
private:
    Stack<T>* arr;
    int capacity=10;

    int hash(const int& i)
    {
        return i % capacity;
    }

public:
    hashTable() : arr(new Stack<T>[1]), capacity(10) {}

    ~hashTable() { delete[] arr; }

    void insert(const T& t, const int& i)
    {
        arr[hash(i)].push(t);
    }

    void erase(const int& i)
    {
        arr[hash(i)].erase();
    }

    int numStack(){
        for(int i=0;i<capacity;++i){
            int key=rand()%10;
            arr[key].push(key);
        }
        int minKey = INT_MAX;
        int key;
        for(int i=0;i<capacity;++i){
            key=arr[i].peek();
            if(minKey>key){
                minKey=key;
            }
        }
        return key;
    }

    Node<T>* find(const int& i)
    {
        return arr[hash(i)].peek();
    }
};
#endif // HASHTABLE_H
