#include<iostream>
using namespace std;
//Binary Search Tree
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int key){
        this->key = key;
        left = right = nullptr;

    }
};
//iterative insert
Node * Iinsert(Node * root , int key){                     //returns the root of the BST
    Node* prev = nullptr;
    Node* curr = root;
    while(curr!= nullptr){
        if(curr->key ==key)
            return root;
        else if(key < curr->key)
            curr=curr->left;
        else
            curr=curr->right;
    }
    if(prev == nullptr)
        return new Node(key);
    else if(key < prev->key){
        prev->left = new Node(key);
        return root;
    }
    else{
        prev->right = new Node(key);
        return root;
    }
}
//recursive insert
Node * Rinsert(Node* root , int key){
    if(root == nullptr)
        return new Node(key);
    if(root->key == key)
        return root;
    else if(key < root->key)
        root->left = Rinsert(root->left , key);
    else    
        root->right = Rinsert(root->right , key);
    
    return root;
}

int main(){
    
    return 0;
}