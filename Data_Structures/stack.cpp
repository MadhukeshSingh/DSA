#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

class Stack{
    //prop
    public:
    int *arr;
    int top;
    int size;
    
    //behaviour
    //constructor

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1)//to check for space in stack
        {
            top++;
            arr[top] = element;
        }
        else {
        cout<<"stack overflow";
        }
    }

    void pop(){
        if (top>=0)
        {
            top--;
        }

        else
        {
            cout<<"stack underflow";
        }

    }

    int peek()
    {
        if (top>=0 && top <size)
        {
            return arr[top];
            return -1;
        }
        else
        {
            cout<<"stack is empty"<<endl;
        }
    }

    bool isEmpty()
    {
        if (top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
}