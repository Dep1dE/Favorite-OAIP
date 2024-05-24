#include <iostream>

enum Color
{
	Red,
	Black
};

template <typename T, typename K>
class Node
{
	Node* left;
	Node* right;
	Node* parent;

	T data;
	K key;

	Color color;

	Node() : left(nullptr), right(nullptr), parent(nullptr), data(), key(), color(Red) { }
	Node(const T& t, const K& k, Node* p, const Color& c) : left(nullptr), right(nullptr), parent(p), data(t), key(k), color(c) { }
};

template <typename T, typename Key, typename HashFunction = std::hash<Key>>
class RBTree
{
private:
	Node<T, Key> root;

	HashFunction hf;
public:
	RBTree() : root() { }
};

template <typename T>
struct HashFunction
{
	int operator () (const T& t) { 
		return t;
	}
};

int main()
{
	RBTree<int, char, HashFunction<char>> tree;

	return 0;
}