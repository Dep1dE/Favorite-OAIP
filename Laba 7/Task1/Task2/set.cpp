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

int main() {
    return 0;
}