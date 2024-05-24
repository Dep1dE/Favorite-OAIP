#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


#define SIZE 100


class Stack
{
private:
    char* arr;
    int top;
    int capacity;

public:
    Stack(int size=SIZE)
    {
        arr = new char[size];
        capacity = size;
        top = -1;
    }     
    ~Stack() {
        delete[] arr;
    }      
    
    char peek()
    {
        if (!isEmpty()) {
            return arr[top];
        }
        else {
            exit(EXIT_FAILURE);
        }
    }

    void push(const char &x)
    {
        if (isFull())
        {
            cout << "Overflow\nProgram Terminated\n";
            exit(EXIT_FAILURE);
        }

        cout << "Inserting " << x << endl;
        arr[++top] = x;
    }
    char pop()
    {
        if (isEmpty())
        {
            cout << "Underflow\nProgram Terminated\n";
            exit(EXIT_FAILURE);
        }

        cout << "Removing " << peek() << endl;

        return arr[top--];
    }
    int size() {
        return top + 1;
    }

    bool isEmpty() {
        return top == -1;               // или return size() == 0;
    }
    bool isFull() {
        return top == capacity - 1;     // или return size() == capacity;
    }
};


int main()
{
    Stack pt(100);
    string str;
    for (int i = 0; i < 1; ++i) {
        string s;
        cin >> s;
        str += s;
    }
    cout << str;

    for (int i = str.size() - 1; i >= 0; --i) {
        
        if (str[i] == ')' || str[i] == ']' || str[i] == '}') {
            pt.push(str[i]);
        }
        else if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            if (pt.isEmpty()) {
                cout << "Error";
                return 0;
            }
            char u = pt.peek();

            if (u == ')') {
                u = '(';
            }
            else if (u == '}') {
                u = '{';
            }
            else if (u == ']') {
                u = '[';
            }
            if (u == str[i]) {
                pt.pop();
            }
            else {
                cout << "Error";
                return 0;
            }
        }
    }
    if(pt.isEmpty()){
    }
    else {
        cout << "Error";
        return 0;
    }
    cout << "Success";
    return 0;
}