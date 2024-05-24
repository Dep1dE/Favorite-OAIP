template <typename T>
struct Node
{
    Node<T>* next;
    Node<T>* prev;

    T data;

    Node() {
        next = nullptr;
        prev = nullptr;
        data = 0;
    }
    Node(T t) {
        next = nullptr;
        prev = nullptr;
        data = t;
    }

};

template <typename T>
class Stack
{
private:
    Node<T>* begin;
    Node<T>* end;
    int size;

public:
    Stack() {
        begin = nullptr;
        end = nullptr;
        size = 0;
    } 

    ~Stack()
    {
        while (size)
        {
            erase();
        }
    }

    void push(const T& t)
    {
        Node<T>* node = new Node<T>(t);

        if (!size)
        {
            begin = end = node;

            ++size;

            return;
        }

        end->next = node;
        node->prev = end;

        end = node;

        ++size;
    }

    Node<T>* peek() const
    {
        return end;
    }

    void erase()
    {
        if (!size) return;

        Node<T>* node = end;

        if (begin == end)
        {
            begin = end = nullptr;

            delete node;

            --size;

            return;
        }

        end->prev->next = nullptr;

        end = end->prev;

        node->prev = nullptr;

        delete node;

        --size;
    }

    int Size() const { return size; }
};

template <typename T>
class hashTable
{
private:
    Stack<T>* arr;
    int capacity;

    int hash(const int& i)
    {
        return i % capacity;
    }

public:
    hashTable(const int& i) : arr(new Stack<T>[i]), capacity(i) {}

    ~hashTable() { delete[] arr; }

    void insert(const T& t, const int& i)
    {
        arr[hash(i)].push(t);
    }

    void erase(const int& i)
    {
        arr[hash(i)].erase();
    }

    Node<T>* find(const int& i)
    {
        return arr[hash(i)].peek();
    }
};