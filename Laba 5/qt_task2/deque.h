#ifndef DEQUE_H
#define DEQUE_H


#include <iostream>


template<typename T>
class Deque {
public:
    static const int SIZE = 8;
    T** arr;
    size_t size;
    size_t k;
    size_t capacity;
    std::pair<size_t, size_t> first;
    std::pair<size_t, size_t> last;
public:
    Deque() : arr(new T *), size(0), capacity(SIZE){
        arr[0] = reinterpret_cast<T*>(new int8_t[sizeof(T) * SIZE]);
        k = 1;
        first = std::make_pair(0, 3);
        last = std::make_pair(0, 3);
    }

    void push_back(T value) {
        if (last.second == SIZE) {
            T** arrNew = new T * [k * 2];
            for (int i = 0; i < k; ++i)
                arrNew[i] = arr[i];
            for (int i = k; i < 2 * k; ++i)
                arrNew[i] = reinterpret_cast<T*>(new int8_t[sizeof(T) * SIZE]);
            k *= 2;
            capacity = k * SIZE;
            ++last.first;
            last.second = 0;
            delete[] arr;
            arr = arrNew;
        }
        new (arr[last.first] + last.second) T(value);
        ++last.second;
        if (last.second > SIZE) {
            last.second = 0;
            ++last.first;
        }
        ++size;
    }

    void push_front(T value) {
        if (first.second == 0) {
            T** arrNew = new T * [k * 2];
            for (int i = 0; i < k; ++i)
                arrNew[i] = reinterpret_cast<T*>(new int8_t[sizeof(T) * SIZE]);
            for (int i = k; i < 2 * k; ++i)
                arrNew[i] = arr[i - k];
            first.first += k;
            last.first += k;
            k *= 2;
            capacity = k * SIZE;
            delete[] arr;
            arr = arrNew;
        }
        if (first.second != 0)
            --first.second;
        else {
            --first.first;
            first.second = SIZE - 1;
        }
        ++size;
        new (arr[first.first] + first.second) T(value);

    }

    void pop_back() {
        if (size == 0)
            return;
        if (last.second == 0) {
            last.second = SIZE - 1;
            --last.first;
            arr[last.first][last.second].~T();
            --size;
            return;
        }
        arr[last.first][--last.second].~T();
        --size;
    }

    void pop_front() {
        if (size == 0)
            return;
        arr[first.first][first.second++].~T();
        if (first.second == SIZE)
        {
            ++first.first;
            first.second = 0;
        }
        --size;
    }

    void clear() {
        for (size_t i = 0; i < SIZE*k; ++i) {
            pop_back();
        }
    }

    bool isempty(){
        if(size==0){
            return true;
        }
        else{
            return false;
        }
    }

    T& operator [] (const size_t& i)
    {
        int firstindex = (first.first*SIZE+first.second+i)/SIZE;
        int lastindex = (first.first * SIZE + first.second + i) % SIZE;
        return arr[firstindex][lastindex];
    }

    size_t Size() const {
        return size;
    }
};
#endif // DEQUE_H
