#ifndef SET_H
#define SET_H
#include <iostream>
#include <RBTree.h>
#include <vector>
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

    void getText(Node<char, K>* node, std::vector<K>& arr, int& i) {
            if (root == nil) return;
            if (node->left != nil) getText(node->left, arr, i);
            arr.push_back(node->key);
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
    void toArray(std::vector<K>& arr) {
            int i = 0;
            getText(root, arr, i);
        }

};

#endif // SET_H
