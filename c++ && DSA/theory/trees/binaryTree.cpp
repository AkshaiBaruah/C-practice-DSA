#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node * left;
    Node* right;
    Node(int key){
        this->key = key;
        left = right = nullptr;
    }
};

void inorder(Node* root){
    if (root == nullptr)
    return;
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}
void preorder(Node * root){
    if(root == nullptr)
    return;
    cout<<root->key<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node * root){
    if(root == nullptr)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->key<<" ";
}
int height(Node * root){
    if(root == nullptr)
    return 0;
    return max(height(root->left) , height(root->right)) + 1;
}

int main (){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    root->right->left = new Node(40);
    root->right->right = new Node(50);
    inorder(root);cout<<endl;
    preorder(root);cout<<endl;
    postorder(root);cout<<endl;

    Node* root2 = new Node(10);
    root2->right = new Node(10);
    root2->right->right = new Node(10);
    cout<<height(root2);

    return 0;

}