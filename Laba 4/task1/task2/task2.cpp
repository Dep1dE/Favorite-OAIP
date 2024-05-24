#include <iostream>
#include <string>

class String {
private:
    std::unique_ptr<char[]> arr;
    size_t size;
    size_t capacity;
public:
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

    String() {
        size = 0;
        capacity = 0;
        arr = nullptr;
    }


    String(size_t i, const char& value='\0') {
        size = i;
        capacity = i;
        arr = std::unique_ptr<char[]>(new char[capacity]);
        for (size_t i = 0; i < size; ++i) {
            arr[i]=value;
        }                      
    }

   String(size_t i, const char&& value = '\0') {
        size = i;
        capacity = i;
        arr = std::unique_ptr<char[]>(new char[capacity]);
        for (size_t i = 0; i < size; ++i) {
            arr[i] = value;
        }
    }

   
    String(const String& v) {
        capacity = v.capacity;
        size = v.size;
        arr = std::unique_ptr<char[]>(new char[capacity]);
        for (size_t i = 0; i < size; ++i) {
            arr[i] = v.arr[i];
        }
    }
    
    String(const String&& v) {
        capacity = v.capacity;
        size = v.size;
        arr = std::unique_ptr<char[]>(new char[capacity]);
        for (size_t i = 0; i < size; ++i) {
            arr[i] = v.arr[i];
        }
    }

    String(const char* str) {
        size = std::strlen(str);
        capacity = size;
        arr = std::unique_ptr<char[]>(new char[capacity]);
        for (size_t i = 0; i < size; ++i) {
            arr[i] = str[i];
        }
    }
   
    
    ~String() {
        arr.reset();
    }

    String& operator=(const String& v) {
        if (this != &v) {
            size = v.size;
            capacity = v.capacity;
            arr.reset(new char[capacity]);
            std::memcpy(arr.get(), v.arr.get(), size);
        }
        return *this;
    }

    size_t Size() const
    {
        return size;
    }

    char& operator [](const int& i) const 
    {
        return arr[i];
    }

    void clear()
    {
        size = 0;
    }

    void reserve(const int& n)
    {
        if (n <= capacity) return;
        char* new_arr = new char[n];
        for (size_t i = 0; i < size; ++i)
        {
            new_arr[i] = arr[i];
        }
        new_arr[size] = '\0';
        arr.reset(new_arr);
        capacity = n;
    }

    String& operator+=(const char& c) {
        if (size + 1 >= capacity) reserve(2 * capacity);
        arr[size++] = c;
        arr[size] = '\0';
        return *this;
    }

    String& operator+=(const String& str)
    {
        for (size_t i = 0; i < str.Size(); ++i)
        {
            *this += str[i];
        } 
        return *this;
    }

    void* memcpy(void* s1, const void* s2, size_t n) {
        char* boof = static_cast<char*>(s1);
        const char* src = static_cast<const char*>(s2);
        for (size_t i = 0; i < n; ++i) {
            boof[i] = src[i];
        }
        return s1;
    }

    void* memmove(void* s1, const void* s2, size_t n) {
        char* boof = static_cast<char*>(s1);
        const char* src = static_cast<const char*>(s2);
        if (boof == src) {
            return s1;
        }
        if (boof < src) {
            for (size_t i = 0; i < n; ++i) {
                *(boof + i) = *(src + i);
            }
        }
        else {
            for (size_t i = n; i > 0; --i) {
                *(boof + i - 1) = *(src + i - 1);
            }
        }
        return s1;
    }

    char* strcpy(char* s1, const char* s2) {
        char* boof = s1;
        while (*s2 != '\0') {
            *boof = *s2;
            boof++;
            s2++;
        }
        *boof = '\0';
        return s1;
    }

    char* strncpy(char* s1, const char* s2, size_t n) {
        size_t i;
        for (i = 0; i < n && s2[i] != '\0'; ++i) {
            s1[i] = s2[i];
        }
        for (; i < n; ++i) {
            s1[i] = '\0';
        }
        return s1;
    }

    char* strcat(char* s1, const char* s2) {
        size_t len1 = strlen(s1);
        size_t len2 = strlen(s2);
        char* result = new char[len1 + len2 + 1];
        strcpy(result, s1);
        strcpy(result + len1, s2);
        return result;
    }

    char* strncat(char* s1, const char* s2, size_t n) {
        char* result = s1;
        while (*s1) { 
            s1++;
        }
        for (size_t i = 0; i < n && *s2; i++) { 
            *s1++ = *s2++;
        }
        *s1 = '\0';
        return result;
    }

    int memcmp(const void* s1, const void* s2, size_t n) {
        const char* p1 = static_cast<const char*>(s1);
        const char* p2 = static_cast<const char*>(s2);
        for (size_t i = 0; i < n; ++i) {
            if (p1[i] < p2[i]) {
                return -1;
            }
            else if (p1[i] > p2[i]) {
                return 1;
            }
        }
        return 0;
    }

    int strcmp(const char* s1, const char* s2) {
        while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
            ++s1;
            ++s2;
        }
        return static_cast<int>(*s1) - static_cast<int>(*s2);
    }

    int strncmp(const char* s1, const char* s2, size_t n) {
        for (size_t i = 0; i < n; ++i) {
            if (s1[i] < s2[i]) {
                return -1;
            }
            else if (s1[i] > s2[i]) {
                return 1;
            }
            else if (s1[i] == '\0') {
                return 0;
            }
        }
        return 0;
    }
    
};

using namespace std;

int main() {
    String s1("hh");
    String s2("kk");
    cout << s1.memcpy(s1, s2*, 3);
    String v(2, 'f'), f;
    String g("d");
    String h = "fdv";
    for (char c = 'a'; c <= 'z'; ++c) h += c;
    h += String("1234567890");
    for (int i = 0; i < h.Size(); ++i) std::cout << h[i];
    h.clear();
    for (int i = 0; i < h.Size(); ++i) std::cout << h[i];
    /* Pair<int, double> p;
     p.first = 10;
     p.second = 1.2;
     Vector<Pair<int, double>> v;
     v.push_back(p);
     for (size_t i = 0; i < v.Size(); ++i) {
         cout << v.at(i).first <<" " << v.at(i).second;;
     }*/
     //// Vector<Vector <int>>b(3, Vector<int>(3, 5));
     //Vector < Vector < Vector < Pair < Pair<string, string>, Pair<string, string> > > > > v;
     //v.push_back(Vector < Vector < Pair < Pair<string, string>, Pair<string, string> > > >(1, Vector < Pair < Pair<string, string>, Pair<string, string> > >(3, Pair < Pair<string, string>, Pair<string, string> >(Pair<string, string>("fdszf", "dfsd"), Pair<string, string>("dsf", "dsf")))));
     //cout << v[0][0][0].first.first;
     //pair<int, int> p(0, 10);
     //Vector<pair<string, string>> c;
    // c.push_back(p);
     //cout <<p.first<<" "<<p.second;

}