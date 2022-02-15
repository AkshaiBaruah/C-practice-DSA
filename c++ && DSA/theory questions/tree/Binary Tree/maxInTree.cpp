#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key; 
    Node * left ;
    Node* right;
    Node(int key){
        this->key = key;
        left = right = nullptr;
    }
};

int max3(int a, int b , int c){
    return max(max(a , b) , c);
}

int getMax(Node* root){
    if(root == nullptr)
        return INT32_MIN;                  
    return max3(getMax(root->left) , getMax(root->right) , root->key);
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(6);
    root->left->right = new Node(9);
    root->right->right = new Node(420);
    cout<<getMax(root);
    return 0;
}