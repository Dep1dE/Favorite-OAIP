#include <iostream>

template<typename T1,typename T2>
struct pair
{
    T1 first;
    T2 second;

    pair() {
        first = T1();
        second = T2();
    }

    pair( T1& val,  T2& val1) {
        first = T1(val);
        second = T2(val1);
    }

    pair( T1&& val,  T2&& val1) {
        first = T1(val);
        second = T2(val1);
    }
    pair(T1& val, T2&& val1) {
        first = T1(val);
        second = T2(val1);
    }
    pair(T1&& val, T2& val1) {
        first = T1(val);
        second = T2(val1);
    }

    pair(pair<T1 , T2 > &p) {
        first = p.first;
        second = p.second;
    }

    pair(pair<T1, T2 >&& p) {
        first = p.first;
        second = p.second;
    }
    ~pair() {
        ~first;
        ~second;
    }
    pair<T1, T2>&operator=(pair<T1, T2>& p) {
        first = p.first;
        second = p.second;
        return *this;
    }
    pair<T1, T2>& operator=(pair<T1, T2>&& p) {
        first = p.first;
        second = p.second;
        return *this;
    }
};



int main() {

    pair <int, int> p (10, 10);

}