#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(11);
    cout<<"front is :"<<q.front()<<endl;
    q.push(15);
    cout<<"front is :"<<q.front()<<endl;
    q.push(13);
    cout<<"front is :"<<q.front()<<endl;
    cout<<"size "<<q.size()<<endl;
    q.pop();
    cout<<"size "<<q.size()<<endl;
    if (q.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }
    return 0;
}
