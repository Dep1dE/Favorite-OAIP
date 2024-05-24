#include <iostream>
struct Node {
	int data;
	Node* next;
	Node* prev;
	Node() { next = nullptr, prev = nullptr; }
	Node(int _data) { data = _data, next = nullptr, prev = nullptr; }
};

	class List {
	public:
		Node* begin;
		Node* end;
		int size;
	public:
		List() : begin(nullptr), end(nullptr), size(0) { }

		bool isEmpty() {
			if (begin == nullptr) {
				return true;
			}
			return false;
		}

		void pushback(int _data) {
			Node* newnode = new Node(_data);
			if (isEmpty()){
				begin = newnode;
				end = newnode;
				size++;
				return;
			}
			else {
				end->next=newnode;
				newnode->prev = end;
				end = newnode;
				size++;
				return;
			}
		}
		int operator [](const int &i) {
			auto p = begin;
			for (int j = 0; j < i; ++j) {
				p = p->next;
			}
			return p->data;
		}

	};
int main() {
	List l;
	for (int i = 0; i < 10; ++i) {
		l.pushback(i);
	}
	std::cout << l[5];

}