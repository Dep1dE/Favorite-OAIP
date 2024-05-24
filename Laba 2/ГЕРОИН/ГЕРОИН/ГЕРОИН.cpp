
#include <iostream>

struct Node {
	int value;
	Node* next;
	Node* prev;
	Node(int _val) { value = _val, next = nullptr, prev = nullptr; }
};

class List {
public:
	Node* begin;
	Node* end;
	int size = 0;
public:
	bool isEmpty() {
		return begin == nullptr;
	}
	void pushBack(const int &k) {
		Node* p = new Node(k);
		if (isEmpty()) {
			begin = p;
			end = p;
			size++;
			return;
		}
		end->next = p;
		p->prev = end;
		end = p;
		size++;
		return;
	}

	Node* getElement(const int& index) {
		Node* p = begin;
		if (index > size) {
			return nullptr;
		}
		
		else {
			for (int i = 0; i < index; ++i) {
				p=p->next;
			}
			return p;
		}
	}

	void insert(const int& index, const int& k) {
		Node* p = getElement(index);
		Node* h = new Node(k);
		h->next = p->next;
		p->next->prev = h;
		h->prev = p;
		p->next = h;
		size++;
	}
	void remove(const int& index) {
		Node* p = getElement(index);
		p->next->prev = p->prev;
		p->prev->next = p->next;
		delete p;
		size--;
	}
};

int main()
{
	List l;

	for (int i = 1; i < 13; ++i) l.pushBack(i);
	
	l.insert(3, 12345);
	l.insert(6, 777);

	l.remove(5);
	l.remove(7);

	Node* n = l.begin;

	while (n)
	{
		std::cout << n->value << ' ';
		n = n->next;
	} 
}
