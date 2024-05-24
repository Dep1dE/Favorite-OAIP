#ifndef VECTOR_H
#define VECTOR_H
#include <stdexcept>
#include <algorithm>
using namespace std;
#define int8_t char
#define iterator Iterator
template<typename T1, typename T2>
struct Pair
{
    T1 first;
    T2 second;

    Pair() {
        first = T1();
        second = T2();
    }

    Pair(T1& val, T2& val1) {
        first = T1(val);
        second = T2(val1);
    }

    Pair(T1&& val, T2&& val1) {
        first = T1(val);
        second = T2(val1);
    }
    Pair(T1& val, T2&& val1) {
        first = T1(val);
        second = T2(val1);
    }
    Pair(T1&& val, T2& val1) {
        first = T1(val);
        second = T2(val1);
    }

    Pair(Pair<T1, T2 >& p) {
        first = T1(p.first);
        second = T2(p.second);
    }

    Pair(Pair<T1, T2 >&& p) {
        first = T1(p.first);
        second = T2(p.second);
    }
    ~Pair() {
        first.~T1();
        second.~T2();
    }
    Pair<T1, T2>& operator=(Pair<T1, T2>& p) {
        first = p.first;
        second = p.second;
        return *this;
    }
    Pair<T1, T2>& operator=(Pair<T1, T2>&& p) {
        first = p.first;
        second = p.second;
        return *this;
    }
};


template <typename T>
class iterator {
private:
    T* p;
public:
    iterator() { p = nullptr; }
    iterator(T* value) {
        p = value;
    }
    iterator<T> operator++() {
        ++p;
        return iterator<T>(p);
    }
    iterator<T> operator--() {
        --p;
        return iterator<T>(p);
    }
    iterator<T> operator+=(int n) {
        p += n;
        return iterator<T>(p);
    }
    iterator<T> operator-=(int n) {
        p -= n;
        return iterator<T>(p);
    }
    bool operator==(iterator n) {
        if (n == p) {
            return true;
        }
        return false;
    }
    bool operator>=(iterator n) {
        if (n >= p) {
            return true;
        }
        return false;
    }
    bool operator<=(iterator n) {
        if (n <= p) {
            return true;
        }
        return false;
    }
    bool operator<(iterator n) {
        if (n < p) {
            return true;
        }
        return false;
    }
    bool operator>(iterator n) {
        if (n > p) {
            return true;
        }
        return false;
    }
    T& operator*() {
        return *p;
    }

};

template <typename T>
class constIterator {
private:
    T* p;
public:
    constIterator() { p = nullptr; }
    constIterator(T* value) {
        p = value;
    }
    constIterator<T> operator++() {
        ++p;
        return constIterator<T>(p);
    }
    constIterator<T> operator--() {
        --p;
        return constIterator<T>(p);
    }
    constIterator<T> operator+=(int n) {
        p += n;
        return constIterator<T>(p);
    }
    constIterator<T> operator-=(int n) {
        p -= n;
        return constIterator<T>(p);
    }
    bool operator==(constIterator n) {
        if (n == p) {
            return true;
        }
        return false;
    }
    bool operator>=(constIterator n) {
        if (n >= p) {
            return true;
        }
        return false;
    }
    bool operator<=(constIterator n) {
        if (n <= p) {
            return true;
        }
        return false;
    }
    bool operator<(constIterator n) {
        if (n < p) {
            return true;
        }
        return false;
    }
    bool operator>(constIterator n) {
        if (n > p) {
            return true;
        }
        return false;
    }
    T operator*() {
        return *p;
    }
};

template <typename T>
class reversedIterator {
private:
    T* p;
public:
    reversedIterator() { p = nullptr; }
    reversedIterator(T* value) {
        p = value;
    }
    reversedIterator<T> operator++() {
        --p;
        return reversedIterator<T>(p);
    }
    reversedIterator<T> operator--() {
        ++p;
        return reversedIterator<T>(p);
    }
    reversedIterator<T> operator+=(int n) {
        p -= n;
        return reversedIterator<T>(p);
    }
    reversedIterator<T> operator-=(int n) {
        p += n;
        return reversedIterator<T>(p);
    }
    bool operator==(reversedIterator n) {
        if (n == p) {
            return true;
        }
        return false;
    }
    bool operator>=(reversedIterator n) {
        if (n <= p) {
            return true;
        }
        return false;
    }
    bool operator<=(reversedIterator n) {
        if (n >= p) {
            return true;
        }
        return false;
    }
    bool operator<(reversedIterator n) {
        if (n > p) {
            return true;
        }
        return false;
    }
    bool operator>(reversedIterator n) {
        if (n < p) {
            return true;
        }
        return false;
    }
    T& operator*() {
        return *p;
    }

};

template <typename T>
class Vector : public iterator<T>, public constIterator<T>, public reversedIterator<T> {
private:
    T* arr;
    size_t size;
    size_t capacity;
public:

    Vector() {
        size = 0;
        capacity = 0;
        arr = nullptr;

    }

    Vector(std::initializer_list<T> l)
    {
        capacity = l.size();
        size = l.size();

        arr = reinterpret_cast<T*> (new int8_t[sizeof(T) * capacity]);

        for (int i = 0; i < size; ++i) new (arr + i) T(*(l.begin() + i));
    }

    Vector(size_t i, T& value = T()) {
        size = i;
        capacity = i;
        arr = reinterpret_cast<T*>(new int8_t[capacity * sizeof(T)]);
        for (size_t i = 0; i < size; ++i) {
            new (arr + i) T(value);
        }
    }

    Vector(size_t i, T&& value = T()) {
        size = i;
        capacity = i;
        arr = reinterpret_cast<T*>(new int8_t[capacity * sizeof(T)]);
        for (size_t i = 0; i < size; ++i) {
            new (arr + i) T(value);
        }
    }


    Vector(Vector<T>& v) {
        arr = reinterpret_cast<T*>(new int8_t[v.Capacity() * sizeof(T)]);
        capacity = v.Capacity();
        size = v.Size();
        for (size_t i = 0; i < size; ++i) {
            new (arr + i) T(v[i]);
        }
    }

    Vector(Vector<T>&& v) {
        arr = reinterpret_cast<T*>(new int8_t[v.Capacity() * sizeof(T)]);
        capacity = v.Capacity();
        size = v.Size();
        for (size_t i = 0; i < size; ++i) {
            new (arr + i) T(v[i]);
        }
    }

    ~Vector() {
        for (size_t i = 0; i < size; ++i) {
            (arr + i)->~T();
        }
        delete[] reinterpret_cast<int8_t*>(arr);
    }


    void reserve(const size_t& n) {
        if (n < capacity) return;
        T* newarr = reinterpret_cast<T*>(new int8_t[n * sizeof(T)]);
        try
        {
            for (int i = 0; i < size; ++i) new (newarr + i) T(arr[i]);
        }
        catch (...)
        {
           delete[] reinterpret_cast<int8_t*>(newarr);
           throw;
        }
        for (size_t i = 0; i < size; ++i) {
            (arr + i)->~T();
        }
        delete[] reinterpret_cast<int8_t*>(arr);
        arr = newarr;
        capacity = n;
    }

    void resize(const size_t& n, T& value = T()) {

        if (n > capacity) reserve(n);
        for (size_t i = size; i < n; ++i) {
            new (arr + i) T(value);
        }
        if (n < size) {
            size = n;

        }
    }

    void push_back(T& value) {
        if (capacity <= size) {
            reserve(capacity > 1 ? capacity * 1.5 : capacity + 1);
        }
        new (arr + size) T(value);
        ++size;
    }
    void push_back(T&& value) {
        if (capacity <= size) {
            reserve(capacity > 1 ? capacity * 1.5 : capacity + 1);
        }
        new (arr + size) T(value);
        ++size;
    }

    void erase(size_t pos, size_t k) {
        if (empty()) {
            throw out_of_range("vector is clear");
        }
        else if (size < (pos + k)) {
            throw out_of_range("idi nahuy");
        }
        else {
            for (size_t i = 0; i < k; ++i) {
                for (size_t j = pos; j < Size() - 1; ++j) {
                    Swap(j, j + 1);
                }
                --size;
                (arr + size)->~T();
            }

        }
    }

    void pop_back() {
        size--;
        (arr + size)->~T();
    }

    T& operator [](size_t i) {
        return arr[i];
    }


    T& at(size_t i) {
        if (i > size) {
            throw out_of_range("out of range");
        }
        return arr[i];
    }


    size_t Size() {
        return this->size;
    }


    size_t Capacity() {
        return capacity;
    }

    iterator<T>& back() {
        iterator<T> backI(arr);
        if (size == 0) {
            throw out_of_range("vector is clear");
        }
        backI += size - 1;
        return backI;
    }

    iterator<T>& begin() {
        iterator<T> beginI(arr);
        if (size == 0) {
            throw out_of_range("vector is clear");
        }

        return beginI;
    }


    constIterator<T>& cbegin() {
        constIterator<T> beginCI(arr);
        if (size == 0) {
            throw out_of_range("vector is clear");
        }

        return beginCI;
    }

    reversedIterator<T>& rbegin() {
        if (size == 0) {
            throw out_of_range("vector is clear");
        }
        reversedIterator<T> rbeginI(arr + (size - 1));
        return rbeginI;
    }

    reversedIterator<T>& rend() {
        if (size == 0) {
            throw out_of_range("vector is clear");
        }
        reversedIterator<T> rendI(arr);
        return rendI;
    }


    void clear() {
        for (size_t i = 0; i < size; ++i) {
            (arr + i)->~T();
        }
        size = 0;
    }

    bool empty() {
        return (size == 0) ? 1 : 0;
    }
    void Swap(size_t i, size_t j) {
        size_t g;
        g = arr[i];
        arr[i] = arr[j];
        arr[j] = g;
    }

    template <typename... Args>
    void emplace_back(Args&&... args) {
        if (capacity <= size) {
            reserve(capacity > 1 ? capacity * 1.5 : capacity + 1);
        }
        new (arr + size) T(std::forward<Args>(args)...);
        ++size;
    }
    template <typename... Args>
    void emplace_back(Args&... args) {
        if (capacity <= size) {
            reserve(capacity > 1 ? capacity * 1.5 : capacity + 1);
        }
        new (arr + size) T(std::forward<Args>(args)...);
        ++size;
    }
    void assign(size_t i, T&& value = T()) {
        for (size_t j = 0; j < Size(); ++j) {
            (arr + j)->~T();
        }
        delete[] reinterpret_cast<int8_t*>(arr);
        size = i;
        capacity = i;
        arr = reinterpret_cast<T*>(new int8_t[i * sizeof(T)]);
        for (size_t j = 0; j < i; ++j) {
            new(arr + j) T(value);
        }
    }

    void assign(size_t i, T& value = T()) {
        for (size_t j = 0; j < Size(); ++j) {
            (arr + j)->~T();
        }
        delete[] reinterpret_cast<int8_t*>(arr);
        size = i;
        capacity = i;
        arr = reinterpret_cast<T*>(new int8_t[i * sizeof(T)]);
        for (size_t j = 0; j < i; ++j) {
            new(arr + j) T(value);
        }
    }

    template <typename... Args>
    void emplace(size_t pos, Args&... args) {
        if (capacity <= size) {
            reserve(capacity > 1 ? capacity * 1.5 : capacity + 1);
        }
        new (arr + size) T(std::forward<Args>(args)...);
        ++size;
        for (size_t i = Size() - 1; i > pos; --i) {
            Swap(i, i - 1);
        }
    }


    template <typename... Args>
    void emplace(size_t pos, Args&&... args) {
        if (capacity <= size) {
            reserve(capacity > 1 ? capacity * 1.5 : capacity + 1);
        }
        new (arr + size) T(std::forward<Args>(args)...);
        ++size;
        for (size_t i = Size() - 1; i > pos; --i) {
            Swap(i, i - 1);
        }
    }

    T* data() {
        return arr;
    }

    T& front() {
        return *arr;
    }

    Vector<T>& operator=(Vector<T>& v) {
        for (size_t i = 0; i < Size(); ++i) {
            (arr + i)->~T();
        }
        delete[] reinterpret_cast<int8_t*>(arr);
        size = v.Size();
        capacity = v.Capacity();
        arr = reinterpret_cast<T*>(new int8_t[capacity * sizeof(T)]);
        for (int i = 0; i < size; ++i) new (arr + i) T(v[i]);
        return *this;
    }

    Vector<T>& operator=(Vector<T>&& v) {
        for (size_t i = 0; i < Size(); ++i) {
            (arr + i)->~T();
        }
        delete[] reinterpret_cast<int8_t*>(arr);
        size = v.Size();
        capacity = v.Capacity();
        arr = reinterpret_cast<T*>(new int8_t[capacity * sizeof(T)]);
        for (int i = 0; i < size; ++i) new (arr + i) T(v[i]);
        return *this;
    }

    void insert(std::initializer_list<T> q, size_t index) {
        for (size_t j = 0; j < q.size(); ++j) {
            if (capacity <= size) {
                reserve(capacity > 1 ? capacity * 1.5 : capacity + 1);
            }
            new (arr + size) T(*(q.begin() + j));
            ++size;
            for (size_t i = Size() - 1; i >= index; --i) {
                Swap(i, i - 1);
            }
        }
    }
    void swap(Vector<T>& v) {
        Vector<T> boof;
        boof = *this;
        *this = v;
        v = boof;
    }
};

#endif // VECTOR_H
