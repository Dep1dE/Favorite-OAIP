#include <iostream>
#include <string>

template<class T>
class shared_ptr {

private:
    T* ptr_;
    int* count_;

public:
    shared_ptr(T* ptr = nullptr) {
        count_ = new int(1);
        ptr_ = ptr;
    }

    shared_ptr(const shared_ptr<T>& other) {
        ptr_ = other.ptr_;
        count_ = other.count_;
        ++(*count_);
    }

    ~shared_ptr() {
        if (--(*count_) == 0) {
            delete count_;
            delete ptr_;
        }
    }

    shared_ptr<T>& operator=(const shared_ptr<T>& other) {
        if (this != &other) {
            if (--(*count_) == 0) {
                delete count_;
                delete ptr_;
            }
            ptr_ = other.ptr_;
            count_ = other.count_;
            ++(*count_);
        }
        return *this;
    }

    T& operator*() const {
        return *ptr_;
    }

    T* operator->() const {
        return ptr_;
    }

    int use_count() const {
        return *count_;
    }
};


template<class T>
class unique_ptr {
private:
    T* m_ptr;

public:
    operator bool() const {
        return m_ptr != nullptr;
    }

    unique_ptr(T* ptr = nullptr) {
        std::cout << "pohjmgfbvcx\n";
        m_ptr = ptr;
    }
    ~unique_ptr() {
        std::cout << "fdfd\n";
        delete m_ptr;
    }
    unique_ptr(unique_ptr&& x) {
        m_ptr = x.m_ptr;
        x.m_ptr = nullptr;
    }
    unique_ptr(const unique_ptr& x) = delete;

    unique_ptr& operator=(unique_ptr& a) = delete;
    unique_ptr& operator=(unique_ptr&& x) {
        if (&x == this)
            return *this;
        delete m_ptr;

        m_ptr = x.m_ptr;
        x.m_ptr = nullptr;

        return *this;
    }

    T& operator*() const {
        return *m_ptr;
    }

    T* operator->() const {
        return m_ptr;
    }

    bool isNull() const {
        return m_ptr == nullptr;
    }
};



class Item
{
public:
    Item() { std::cout << "Item acquired\n"; }
    ~Item() { std::cout << "Item destroyed\n"; }
};
int main() {
    for (int i = 0; i < 5; ++i) {
        unique_ptr<Item> item1 (new Item);
    }
    return 0;
}