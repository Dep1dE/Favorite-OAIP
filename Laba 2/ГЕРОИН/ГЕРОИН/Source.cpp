#include <iostream>


struct Node {
	int data;
	std::shared_ptr<Node> next;
	std::shared_ptr<Node> prev;
	Node(int _data) { data = _data, next = nullptr, prev = nullptr; }
};

class Queue {
public:
	std::shared_ptr<Node>  begin;
	std::shared_ptr<Node>  end;
	int size;
public:

	bool isEmpty() {
		return begin == nullptr;
	}

	void pushBack(const int& k) {
		auto p = std::make_shared<Node>(new Node(k));
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
	void pushFront(const int& k) {
		auto p = std::make_shared<Node>(new Node(k));
		if (isEmpty()) {
			begin = p;
			end = p;
			size++;
			return;
		}

		begin->prev = p;
		p = begin;
		begin->prev = nullptr;
		size++;
		return;
	}
	

};

int main()
{
	Queue l;

	for (int i = 1; i < 13; ++i) l.pushFront(i);


	auto n = std::make_shared<Node>(l.begin);


	while (n)
	{

		std::cout << n->data << ' ';
		n = n->next;
	}
}