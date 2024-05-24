#ifndef TREE_H
#define TREE_H
template <typename T>
struct Node {
    T data;
    int key;
    Node* left;
    Node* right;

    Node() {
        data();
        key = 0;
        left = nullptr;
        right = nullptr;
    }

    Node(T data, int key) {
        this->data = data;
        this->key = key;
        left = nullptr;
        right = nullptr;
    }
};

template <typename T>
class Tree {
public:
    Tree() {
        root = nullptr;
    }
    void Insert(T _data, int key) {
        root = recursive(root, _data, key);
    }
    void print() {
        if (root == nullptr) {
            //std::cout << "Дерево пустое";
        }
        else {
            recursivePrintSymmetric(root);
        }
    }

    bool find(int key) {
        return Find(root, key);
    }

    void Delete(int key) {
        root = Erase(root, key);
    }
private:
    Node<T>* root;
    Node<T>* recursive(Node<T>* root,T _data, int key) {
        if (root == nullptr) {
            return new Node<T>(_data, key);
        }
        if (root->key > key) {
            root->left = recursive(root->left, _data, key);
        }
        else {
            root->right = recursive(root->right, _data, key);
        }
        return balance(root);
}
    void recursivePrintSymmetric(Node<T>* root) {
        if (root->left != nullptr) {
            recursivePrintSymmetric(root->left);
        }
        //std::cout << root->data << " ";
        if (root->right != nullptr) {
            recursivePrintSymmetric(root->right);
        }
    }

    void recursivePrintDirect(Node<T>* root) {
        //std::cout << root->data << " ";
        if (root->left != nullptr) {
            recursivePrintDirect(root->left);
        }
        if (root->right != nullptr) {
            recursivePrintDirect(root->right);
        }
    }

    void recursivePrintReverse(Node<T>* root) {
        if (root->left != nullptr) {
            recursivePrintReverse(root->left);
        }

        if (root->right != nullptr) {
            recursivePrintReverse(root->right);
        }
        //std::cout << root->data << " ";
    }

    Node<T>* rotateLeft(Node<T>* root) {
        Node<T>* temp = root->right;
        root->right = temp->left;
        temp->left = root;
        return temp;
    }

    Node<T>* rotateRight(Node<T>* root) {
        Node<T>* temp = root->left;
        root->left = temp->right;
        temp->right = root;
        return temp;
    }

    int Height(Node<T>* root) {
        if (root == nullptr) return -1;
        int L = Height(root->left);
        int R = Height(root->right);
        return 1+ L > R ? L : R;
    }

    Node<T>* balance(Node<T>* root) {
        if ((Height(root->left) - Height(root->right)) > 1) {
            if (Height(root->left->left) < Height(root->left->right)) {
                root->left=rotateLeft(root->left);
            }
            return rotateRight(root);
        }
        else if ((Height(root->left) - Height(root->right)) < -1) {
            if (Height(root->right->right) < Height(root->right->left)) {
                root->right = rotateRight(root->right);
            }
            return rotateLeft(root);
        }
        else {
            return root;
        }
    }

    bool Find(Node<T>* root, int key) {
        if (root == nullptr) return false;
        if (root->key == key) return true;
        if (root->key > key) {
            return Find(root->left, key);
        }
        return Find(root->right, key);
    }

    Node<T>* Erase(Node<T>* root, int key) {
        if (root == nullptr) return nullptr;
        if (root->key > key) {
            root->left=Erase(root->left, key);
        }
        else if (root->key < key) {
            root->right = Erase(root->right, key);
        }
        else {
            if (root->left == nullptr && root->right == nullptr) {
                delete root;
                return nullptr;
            }
            if (root->right == nullptr) {
                Node<T>* newRoot = root->left;
                delete root;
                return newRoot;
            }
            if (root->left == nullptr) {
                Node<T>* newRoot = root->right;
                delete root;
                return newRoot;
            }
            Node<T>* newRoot = (root->right);
            while (newRoot->left != nullptr) {
                newRoot = newRoot->left;
            }
            root->data = newRoot->data;
            root->right = Erase(root->right, newRoot->key);
        }
        return balance(root);
    }
};
#endif // TREE_H
