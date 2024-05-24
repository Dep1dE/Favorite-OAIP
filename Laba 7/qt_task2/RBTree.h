#ifndef RBTREE_H
#define RBTREE_H
#include<iostream>
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
#endif // RBTREE_H
