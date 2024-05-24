#ifndef MYSTRING_H
#define MYSTRING_H
#include <memory>
#include <cstring>

#include "mystring_global.h"
#include <string>

class MYSTRING_EXPORT String
{
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
        capacity = i+1;
        arr = std::unique_ptr<char[]>(new char[capacity]);
        for (size_t i = 0; i < size; ++i) {
            arr[i]=value;
        }

        arr[size]='\0';
    }

   String(size_t i, const char&& value = '\0') {
        size = i;
        capacity = i+1;
        arr = std::unique_ptr<char[]>(new char[capacity]);
        for (size_t i = 0; i < size; ++i) {
            arr[i] = value;
        }
        arr[size]='\0';
    }


    String(const String& v) {
        capacity = v.capacity+1;
        size = v.size;
        arr = std::unique_ptr<char[]>(new char[capacity]);
        for (size_t i = 0; i < size; ++i) {
            arr[i] = v.arr[i];
        }
        arr[size]='\0';
    }

    String(const String&& v) {
        capacity = v.capacity+1;
        size = v.size;
        arr = std::unique_ptr<char[]>(new char[capacity]);
        for (size_t i = 0; i < size; ++i) {
            arr[i] = v.arr[i];
        }
        arr[size]='\0';
    }

    String(const char* str) {
        size = std::strlen(str);
        capacity = size+1;
        arr = std::unique_ptr<char[]>(new char[capacity]);
        for (size_t i = 0; i < size; ++i) {
            arr[i] = str[i];
        }
        arr[size]='\0';
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

    char* c_str() {
        return arr.get();
    }

    std::string to_string() const {
        std::string s;
        for (size_t i = 0; i < size; ++i) s += (*this)[i];
        return s;
    }

    String& operator+=(const char& c) {
        if (size + 1 >= capacity) reserve(capacity * 2 + 1);
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
        *this += '\0';
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

    char* strcat(char* s1, const char* s2)
      {
        char* first = s1;
        const char* second = s2;

        while (*first != '\0') ++first;

        while (*second != '\0') *(first++) = *(second++);

        *first = '\0';

        return s1;
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
    size_t strxfrm(char* s1, const char* s2, size_t n) {
        size_t len2 = std::strlen(s2);
        size_t copy_len = (len2 < n) ? len2 : n;
        strncpy(s1, s2, copy_len);
        s1[copy_len] = '\0';
        return len2;
    }

    void* myMemset(void* s, int c, size_t n) {
        unsigned char* p = static_cast<unsigned char*>(s);
        unsigned char value = static_cast<unsigned char>(c);

        for (size_t i = 0; i < n; ++i) {
            *p = value;
            ++p;
        }

        return s;
    }

    char* myStrerror(int errnum) {
        return std::strerror(errnum);
    }

    size_t myStrlen(const char* s) {
        return std::strlen(s);
    }
};

#endif // MYSTRING_H
