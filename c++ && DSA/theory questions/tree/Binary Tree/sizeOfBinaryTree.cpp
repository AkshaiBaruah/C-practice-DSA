#include<iostream>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node * right;
    Node(int key){
        this->key = key;
        left = right = nullptr;
    }
};

int size(Node * root){
    if(root == nullptr)
        return 0;
    return size(root->left) + size(root->right) + 1;
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(6);
    root->left->right = new Node(9);
    root->right->right = new Node(420);
    cout<<size(root);

    return 0;
}