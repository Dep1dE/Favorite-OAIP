#ifndef MAP_H
#define MAP_H
#include <iostream>
#include <RBTree.h>
#include <vector>
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
    void toArray(std::vector<std::pair<K, T>>& arr) {
            getText(root, arr);
        }

        void getText(Node<T, K>* node, std::vector<std::pair<K, T>>& arr) {
            if (root == nil) return;
            if (node->left != nil) getText(node->left, arr);
            arr.push_back(std::make_pair(node->key, node->data));
            if (node->right != nil) getText(node->right, arr);
        }
};
#endif // MAP_H
