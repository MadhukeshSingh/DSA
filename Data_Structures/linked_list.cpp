#include<iostream>
#include <bits\stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node (int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertatHead(Node* &head, int d){
    //New Node Create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertatTail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}


void InsertatPosition(Node* &tail, Node* &head, int Position, int d){

    if (Position == 0){
        InsertatHead(head, d);
        return ;
    }

    Node* temp = head;
    int count = 1;

    while(count <= Position -1){
        temp = temp -> next;
        count++;
    }
    if(temp == NULL){
        InsertatTail(tail, d);
        return;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;

}

void Print(Node* &head){

    Node* temp = head;
    
    while (temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout <<endl;

}

void DeleteNode(Node* &head, int Position){


}
int main(){

    //created New Node
    Node* node1 = new Node(10);
    // cout << node1 -> data <<endl;
    // cout << node1 -> next <<endl;

    //Head pointed to Node1
    Node* head = node1;
    Node* tail = node1;

    InsertatHead(head, 12);
    Print(head);

    InsertatTail(tail, 15);
    Print(head);

    InsertatPosition(tail,head, 2, 22);
    Print(head);

    return 0;
}