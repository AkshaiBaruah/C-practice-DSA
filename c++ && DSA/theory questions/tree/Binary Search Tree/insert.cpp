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

    if (root == nullptr)                                   //explicit case of null root passed
        return new Node(key);

    Node* prev = nullptr;
    Node* curr = root;
    while(curr!= nullptr){
        prev = curr;

        if(curr->key ==key)
            return root;
        else if(key < curr->key)
            curr=curr->left;
        else
            curr=curr->right;
    }                                                      
    //prev can't be nullptr because root was not initially null so prev will change from initialized null to something else
    //this prev now will be the prev of curr that means we need to insert after prev depending on lesser or greater
    if(key < prev->key){
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