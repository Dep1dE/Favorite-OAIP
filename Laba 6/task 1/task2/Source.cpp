#include <iostream>
template <typename T>
class hashTable {
	std::pair<std::pair<T, int>, bool> *arr;
	int size;
	int capacity;
	int universalHash(int key) {
		int hashValue = key;
		hashValue = ((hashValue >> 16) ^ hashValue) * 0x45d9f3b;
		hashValue = ((hashValue >> 16) ^ hashValue) * 0x45d9f3b;
		hashValue = (hashValue >> 16) ^ hashValue;
		hashValue %= capacity;
		for (int i = 0; i < capacity;++i ) {
			if(arr[hashValue].second==false) return hashValue;
			hashValue++;
			hashValue %= capacity;
		}
		return 0;
	}

public:
	hashTable(int _size) {
		arr = new std::pair<std::pair<T, int>, bool>[_size];
		size = 0;
		capacity = _size;
	}

	void insert(T data, int key) {
		arr[universalHash(key)] = std::make_pair(std::make_pair(data, key), true);
	}

	bool find(int key) {
		int hashValue = key;
		hashValue = ((hashValue >> 16) ^ hashValue) * 0x45d9f3b;
		hashValue = ((hashValue >> 16) ^ hashValue) * 0x45d9f3b;
		hashValue = (hashValue >> 16) ^ hashValue;
		hashValue %= capacity;
		for (int i = 0; i < capacity; ++i) {
			if (arr[hashValue].second == true && arr[hashValue].first.second==key) return true;
			hashValue++;
			hashValue %= capacity;
		}
		return false;
	}
};

