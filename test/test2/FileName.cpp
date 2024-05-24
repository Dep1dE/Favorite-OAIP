#include <iostream>

class Tree {
private:
	struct Node {
		int data;
		Node* left;
		Node* right;
		Node(int _data): data(_data),left(nullptr), right(nullptr){}
	};

public:
	Node* root;
	Tree() : root(nullptr) {}
	Node* insert(Node* _root, int _data) {
		if (!_root) {
			return new Node(_data);
		}
		else if (_root->data > _data) {
			_root->left = insert(_root->left, _data);
		}
		else {
			_root->right = insert(_root->right, _data);
		}
		return _root;
	}

	Node* erase(Node* _root, int _data) {
		if (!_root) {
			return nullptr;
		}
		else if (_root->data > _data) {
			_root->left = erase(_root->left, _data);
		}
		else if (_root->data < _data) {
			_root->right = erase(_root->right, _data);
		}
		if (_root->data == _data) {
			if (_root->left == nullptr) {
				Node* n = _root->right;
				delete[] _root;
				return n;
			}
			else if (_root->right == nullptr) {
				Node* n = _root->left;
				delete[] _root;
				return n;
			}
			else {
				Node* n = _root->left;
				while (!n->right)
				{
					n = n->right;
				}
				_root->data = n->data;
				_root->left = erase(_root->left, _root->data);
			}
		}
		return _root;
	}

	void printTree(Node* _root) {
		if (!_root) {return;}
		printTree(_root->left);
		std::cout << _root->data << " ";
		printTree(_root->right);
	}
};

int main() {

	Tree tr;
	for (int i = 0; i < 20; ++i) {
		tr.root= tr.insert(tr.root, i);
	}
	tr.printTree(tr.root);
	return 0;
}