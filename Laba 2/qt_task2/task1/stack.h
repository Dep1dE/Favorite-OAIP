#ifndef STACK_H
#define STACK_H
#define SIZE 100
#include <cstdlib>
#include <string>
#include <Qstring>
#include <QMessageBox>
#include <QDebug>
#include "oshibka.h"

class stack
{

private:
    QChar* arr;
    int top;
    int capacity;




public:
    stack(int size=SIZE)
        {
            arr = new QChar[size];
            capacity = size;
            top = -1;
        }
        ~stack() {
            delete[] arr;
        }
    QChar peek()
        {
            if (!isEmpty()) {
                return arr[top];
            }
            else {
                exit(EXIT_FAILURE);
            }
        }
    void push(const QChar &x)
        {
            if (isFull())
            {
                exit(EXIT_FAILURE);
            }

            arr[++top] = x;
        }
    QChar pop()
        {
            if (isEmpty())
            {
                exit(EXIT_FAILURE);
            }


            return arr[top--];
        }
    int size() {
            return top + 1;
        }

        bool isEmpty() {
            return top == -1;
        }
        bool isFull() {
            return top == capacity - 1;
        }
        int task(QString str){
            stack pt(100);
            //std::string str=s.toStdString();
                   int lin=1;
                   int simbol=1;

                for (int i = 0; i < str.length(); ++i)
                {
                    ++simbol;
                    if(str[i]=='\n'){
                        lin++;
                        simbol=0;
                    }
                    if (str[i] == '(' || str[i] == '[' || str[i] == '{')
                    {
                        pt.push(str[i]);
                    }
                    if (str[i] == ')' || str[i] == ']' || str[i] == '}')
                    {
                        if(pt.isEmpty()){
                            oshibka* ow = new oshibka;
                            ow->osibka(1, lin, simbol);
                            ow->show();
                             return 0;
                        }
                       if(str[i]==')'&&pt.peek()=='('){
                          pt.pop();
                       }
                       else if(str[i]=='}'&&pt.peek()=='{'){
                           pt.pop();
                       }
                       else if(str[i]==']'&&pt.peek()=='['){
                           pt.pop();
                       }
                       else{
                           oshibka* ow = new oshibka;
                           ow->osibka(2, lin, simbol);
                           ow->show();
                            return 0;
                       }
                    }
                }
                if(pt.isEmpty()){

                }
                else{
                    oshibka* ow = new oshibka;
                    ow->osibka(0, lin, simbol);
                    ow->show();
                     return 0;
                }
                oshibka* ow = new oshibka;
                ow->osibka(3, lin, simbol);
                ow->show();
                return 0;
        }
};

#endif // STACK_H
