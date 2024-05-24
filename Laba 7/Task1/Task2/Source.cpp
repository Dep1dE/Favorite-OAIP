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

template <typename T, typename K>
struct Node
{
    Node* left;
    Node* right;
    Node* parent;

    bool black;

    T data;
    K key;

    Node() : data(), key(), black(true), right(nullptr), left(nullptr), parent(nullptr) { }
    Node(const T& _data, const K& _key, Node* l = nullptr, Node* r = nullptr, Node* p = nullptr, const bool& _colour = true) :
        data(_data), key(_key), black(_colour), left(l), right(r), parent(p) { }
};

template <typename T, typename K, typename HF = std::hash<K>>
class RBTree
{
protected:
    Node<T, K>* root;
    Node<T, K>* nil;

    HF hash;

    void rotateLeft(Node<T, K>*& x)
    {
        auto y = x->right;

        x->right = y->left;

        y->left->parent = x;

        y->parent = x->parent;

        if (x->parent == nil) root = y;
        else if (x == x->parent->left) x->parent->left = y;
        else x->parent->right = y;

        y->left = x;
        x->parent = y;
    }

    void rotateRight(Node<T, K>*& x)
    {
        auto y = x->left;

        x->left = y->right;

        y->right->parent = x;

        y->parent = x->parent;

        if (x->parent == nil) root = y;
        else if (x == x->parent->left) x->parent->left = y;
        else x->parent->right = y;

        y->right = x;
        x->parent = y;
    }

    void fixInsert(Node<T, K>* z)
    {
        while (!z->parent->black)
        {
            auto gp = z->parent->parent;
            auto uc = root;
            auto parent = z->parent;

            if (parent == gp->right)
            {
                if (gp->left) { uc = gp->left; }

                if (!uc->black)
                {
                    uc->black = true;
                    parent->black = true;
                    gp->black = false;
                }
                else if (z == parent->right)
                {
                    parent->black = true;
                    gp->black = false;

                    rotateLeft(gp);
                }
                else if (z == parent->left)
                {
                    rotateRight(parent);

                    z = parent;

                    parent->black = true;
                    gp->black = false;

                    rotateLeft(gp);
                }
            }
            else
            {
                if (gp->right) { uc = gp->right; }

                if (!uc->black)
                {
                    uc->black = true;
                    parent->black = true;
                    gp->black = false;
                }
                else if (z == parent->left)
                {
                    parent->black = true;
                    gp->black = false;

                    rotateRight(gp);
                }
                else if (z == parent->right)
                {
                    rotateLeft(parent);

                    z = parent;

                    parent->black = true;
                    gp->black = false;

                    rotateRight(gp);
                }
            }

            root->black = true;
            root->parent = nil;

            if (z == root) return;

            z = parent->parent;
        }

    }

    void transplant(Node<T, K>* x, Node<T, K>* y)
    {
        if (x->parent == nil)
        {
            root = y;
        }
        else if (x == x->parent->left)
        {
            x->parent->left = y;
        }
        else
        {
            x->parent->right = y;
        }

        y->parent = x->parent;
    }

    void fixDelete(Node<T, K>* x)
    {
        auto s = nil;

        while (x != root && x->black)
        {
            auto parent = x->parent;

            if (x == x->parent->left)
            {
                s = parent->right;

                if (!s->black)
                {
                    s->black = true;

                    x->parent->black = false;

                    rotateLeft(parent);

                    s = parent->right;
                }

                if (s->left->black && s->right->black)
                {
                    s->black = false;

                    x = parent;
                }
                else
                {
                    if (s->right->black)
                    {
                        s->left->black = true;

                        s->black = false;

                        rotateRight(s);

                        s = parent->right;
                    }

                    s->black = parent->black;

                    x->parent->black = true;

                    s->right->black = true;

                    rotateLeft(parent);

                    x = root;
                }
            }
            else
            {
                s = parent->left;

                if (!s->black)
                {
                    s->black = true;

                    x->parent->black = false;

                    rotateRight(parent);

                    s = parent->left;
                }

                if (s->right->black && s->left->black)
                {
                    s->black = false;

                    x = parent;
                }
                else
                {
                    if (s->left->black)
                    {
                        s->right->black = true;

                        s->black = false;

                        rotateLeft(s);

                        s = parent->left;
                    }

                    s->black = parent->black;

                    x->parent->black = true;

                    s->left->black = true;

                    rotateRight(parent);

                    x = root;
                }
            }
        }
    }

public:
    RBTree() { root = nil = new Node<T, K>(); }
    ~RBTree() = default;

    Node<T, K>* Root() { return root; }

    void getText(Node<T, K>* node, T* arr, int& i)
    {
        if (empty()) return;
        if (node->left != nil) getText(node->left, arr, i);
        arr[i++] = node->data;
        if (node->right != nil) getText(node->right, arr, i);
    }

    bool empty() { return root == nil; }

    class Iterator
    {
    private:
        List<Node<T, K>> nodes;
        Node<T, K>* nil;

        int index;

    public:
        Iterator(Node<T, K>* root, Node<T, K>* null, const int& i) : nil(null), index(i)
        {
            create(root);
        }

        void create(Node<T, K>* root)
        {
            if (root->left != nil) create(root->left);

            nodes.push(root);

            if (root->right != nil) create(root->right);
        }

        K& operator * () { return nodes[index]->data->key; }

        Iterator& operator ++ () { ++index; return *this; }

        Iterator& operator -- () { --index; return *this; }

        int size() { return nodes.size(); }
    };

    Iterator begin() const
    {
        return Iterator(root, nil, 0);
    }
};

template <typename T, typename K, typename HF = std::hash<K>>
class Map : public RBTree<T, K, HF>
{
private:
    using RBTree<T, K, HF>::nil;
    using RBTree<T, K, HF>::root;
    using RBTree<T, K, HF>::hash;
    using RBTree<T, K, HF>::fixInsert;
    using RBTree<T, K, HF>::transplant;
    using RBTree<T, K, HF>::fixDelete;

public:
    Map() : RBTree<T, K, HF>() { }

    void insert(const T& t, const K& k)
    {
        if (root == nil) { root = new Node<T, K>(t, hash(k), nil, nil, nil, true); return; }

        auto node = root;

        while (node)
        {
            if (hash(k) < hash(node->key))
            {
                if (node->left != nil) node = node->left;
                else { node->left = new Node<T, K>(t, k, nil, nil, node, false); fixInsert(node->left); return; }
            }
            else
            {
                if (node->right != nil) node = node->right;
                else { node->right = new Node<T, K>(t, k, nil, nil, node, false); fixInsert(node->right); return; }
            }
        }
    }

    bool erase(const K& k)
    {
        auto z = nil;
        auto node = root;

        auto x = nil;
        auto y = nil;

        while (node)
        {
            if (hash(k) == hash(node->key) && k == node->key) { z = node; }

            if (hash(k) < node->key) { node = node->left; }
            else { node = node->right; }
        }

        if (z == nil || !z) { return false; }

        y = z;
        auto isBlack = z->black;

        if (z->left == nil)
        {
            x = z->right;

            transplant(z, z->right);
        }
        else if (z->right == nil)
        {
            x = z->left;

            transplant(z, z->left);
        }
        else
        {
            y = y->right;

            while (y->left && y->left != nil) { y = y->left; }

            isBlack = y->black;

            x = y->right;

            if (y->parent == z)
            {
                x->parent = y;
            }
            else
            {
                transplant(y, y->right);

                y->right = z->right;

                y->right->parent = y;
            }

            transplant(z, y);

            y->left = z->left;

            y->left->parent = y;

            y->black = z->black;
        }

        delete z;

        if (isBlack)
        {
            fixDelete(x);
        }

        return true;
    }

    T find(const K& k)
    {
        auto node = root;

        while (node != nil)
        {
            if (hash(node->key) == hash(k) && node->key == k) return node->data;

            if (hash(k) < hash(node->key)) node = node->left;
            else node = node->right;
        }

        return T();
    }
};

template <typename K, typename HF = std::hash<K>>
class Set : public RBTree<char, K, HF>
{
private:
    using RBTree<char, K, HF>::nil;
    using RBTree<char, K, HF>::root;
    using RBTree<char, K, HF>::hash;
    using RBTree<char, K, HF>::fixInsert;
    using RBTree<char, K, HF>::transplant;
    using RBTree<char, K, HF>::fixDelete;

public:
    Set() : RBTree<char, K, HF>() { }

    void getText(Node<char, K>* node, K* arr, int& i)
    {
        if (root == nil) return;
        if (node->left != nil) getText(node->left, arr, i);
        arr[i++] = node->key;
        if (node->right != nil) getText(node->right, arr, i);
    }

    void insert(const K& k)
    {
        if (root == nil) { root = new Node<char, K>(' ', k, nil, nil, nil, true); return; }

        auto node = root;

        while (node)
        {
            if (hash(k) < hash(node->key))
            {
                if (node->left != nil) node = node->left;
                else { node->left = new Node<char, K>(' ', k, nil, nil, node, false); fixInsert(node->left); return; }
            }
            else
            {
                if (node->right != nil) node = node->right;
                else { node->right = new Node<char, K>(' ', k, nil, nil, node, false); fixInsert(node->right); return; }
            }
        }
    }

    bool erase(const K& k)
    {
        auto z = nil;
        auto node = root;

        auto x = nil;
        auto y = nil;

        while (node)
        {
            if (hash(k) == hash(node->key) && k == node->key) { z = node; }

            if (hash(k) < node->key) { node = node->left; }
            else { node = node->right; }
        }

        if (z == nil || !z) { return false; }

        y = z;
        auto isBlack = z->black;

        if (z->left == nil)
        {
            x = z->right;

            transplant(z, z->right);
        }
        else if (z->right == nil)
        {
            x = z->left;

            transplant(z, z->left);
        }
        else
        {
            y = y->right;

            while (y->left && y->left != nil) { y = y->left; }

            isBlack = y->black;

            x = y->right;

            if (y->parent == z)
            {
                x->parent = y;
            }
            else
            {
                transplant(y, y->right);

                y->right = z->right;

                y->right->parent = y;
            }

            transplant(z, y);

            y->left = z->left;

            y->left->parent = y;

            y->black = z->black;
        }

        delete z;

        if (isBlack)
        {
            fixDelete(x);
        }

        return true;
    }

    K find(const K& k)
    {
        auto node = root;

        while (node != nil)
        {
            if (hash(node->key) == hash(k) && node->key == k) return node->key;

            if (hash(k) < hash(node->key)) node = node->left;
            else node = node->right;
        }

        return K();
    }
};

template <typename T>
class MyList
{
private:
    struct Node
    {
        Node* next;
        Node* prev;

        T data;

        Node(const T& t) : next(nullptr), prev(nullptr), data(t) { }
    };

    Node* first;
    Node* last;

    int Size;

public:
    MyList() : first(nullptr), last(nullptr), Size(0) { }

    void push(const T& t)
    {
        auto node = new Node(t);

        if (!Size) { first = last = node; ++Size; return; }

        last->next = node;
        node->prev = last;

        last = node;

        ++Size;
    }

    void erase()
    {
        auto node = last->prev;

        if (first == last) { delete last; first = last = nullptr; --Size; return; }

        node->next = nullptr;
        last->prev = nullptr;

        delete last;

        last = node;

        --Size;
    }

    void clear() { while (first) erase(); Size = 0; }

    bool empty() const { return (first == nullptr); }

    T& operator [] (const int& index)
    {
        auto node = first;

        for (auto i = 0; i < index; ++i) node = node->next;

        return node->data;
    }

    int size() const { return Size; }

};

template <typename T, typename K, typename HF = std::hash<K>>
class Unordered_map
{
private:
    List<std::pair<T, K>> *arr;
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

int main() {
    Unordered_map<int, int> hs;
    hs.insert(6,5);
    std::cout << hs.find(5).first<<" "<< hs.find(5).second;
    return 0;
}