#include <iostream>
#include <bits/stdc++.h>
using namespace std;



class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};


Node* buildTree(Node* root){
    cout<< "Enter the data";
    int data;
    cin>>data;
    root = new Node(data);

    if (data == -1){
        return NULL;
    }

    cout<<"enter data for left";
    root->left = buildTree(root-> left);
    cout<<"enter data for right";
    root->right = buildTree(root-> right);
    return root;
}



int main(){
    Node* root = NULL;
    //cretate tree
    root = buildTree(root);
}