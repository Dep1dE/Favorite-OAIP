#ifndef LIST_H
#define LIST_H
#include <QString>
#include <QFile>
#include <fstream>
#include <QTextStream>
#include <QDebug>

class Value
{
public:
    QString getName(){
        return name;
    }
    int getCount(){
        return count;
    }
    int getCost(){
        return cost;
    }
    QString getDate(){
        return date;
    }
    void setName(QString name){
        this->name=name;
    }
    void setCount(int count){
        this->count=count;
    }
    void setCost(int cost){
        this->cost=cost;
    }
    void setDate(QString date){
        this->date=date;
    }

private:
    QString name;
    int count;
    int cost;
    QString date;

};

struct Node
{
    Value value;
    Node() {};
    Node(Value _v) {value = _v;};
};

class list
{
private:
    int capacity;
    int size;

public:
    Node* arr;
    list(){

        capacity=0;
        size=10;
        arr=new Node[10]();
    }
    ~list(){
        delete[] arr;
    }

    bool isEmpty(){
        return capacity == 0;
    }
    void pushback(Value _val){
        Node* p=new Node(_val);
        p->value=_val;
        if(capacity>=size){
            Node* newarr= new Node[2*capacity]();
            for(int i=0;i<capacity;++i){
                newarr[i]=arr[i];
            }
            newarr[capacity]=*p;
            delete[] arr;
            size=capacity*2;
            capacity++;
            arr=newarr;
        }
        else{
            arr[capacity]=*p;
            capacity++;
        }
    }
    void print(){
        if (isEmpty()) return;
        for(int i=0; i<capacity; i++){
            qDebug()<< arr[i].value.getName() <<'\n'<< arr[i].value.getCount()<< '\n' << arr[i].value.getCost() << '\n' << arr[i].value.getDate() << '\n';
        }
       qDebug()<< '\n';
    }
    int getCapacity(){
        return capacity;
    }
    void remove(const int &index){
        for (int i = index; i < capacity - 1; ++i) {
            std::swap(arr[i], arr[i + 1]);
        }

        --capacity;
    }

    void changeElement(int nt, Value v){
        arr[nt].value=v;
    }

    void mergeCost(Node *array, const int &left, const int &mid, const int &right)
    {
        long long subArrayOne = mid - left + 1;
        long long subArrayTwo = right - mid;

        Node* leftArray = new Node[subArrayOne];
        Node* rightArray = new Node[subArrayTwo];

        for (long long i = 0; i < subArrayOne; i++)
            leftArray[i] = array[left + i];
        for (long long j = 0; j < subArrayTwo; j++)
            rightArray[j] = array[mid + 1 + j];

        long long indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
        long long indexOfMergedArray = left;

        while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo)
        {
            if (leftArray[indexOfSubArrayOne].value.getCost() <= rightArray[indexOfSubArrayTwo].value.getCost())
            {
                array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
                indexOfSubArrayOne++;
            }
            else
            {
                array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
                indexOfSubArrayTwo++;
            }
            indexOfMergedArray++;
        }

        while (indexOfSubArrayOne < subArrayOne)
           {
               array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
               indexOfSubArrayOne++;
               indexOfMergedArray++;
           }

           while (indexOfSubArrayTwo < subArrayTwo)
           {
               array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
               indexOfSubArrayTwo++;
               indexOfMergedArray++;
           }
           delete[] leftArray;
           delete[] rightArray;
    }

    void mergeSortCost(const int &begin, const int &end)
    {
        if (begin >= end)
                return;

            long long mid = begin + (end - begin) / 2;
            mergeSortCost(begin, mid);
            mergeSortCost(mid + 1, end);
            mergeCost(this->arr, begin, mid, end);
    }


};

#endif // LIST_H
