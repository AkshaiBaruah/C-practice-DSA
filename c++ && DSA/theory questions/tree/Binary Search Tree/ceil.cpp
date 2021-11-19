#include<iostream>
using namespace std;

struct Node{
    int key;
    Node* left; 
    Node* right;
    Node(int key){
        this->key = key;
        left = right = nullptr;
    }
};

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

Node* ceil(Node * root , int key){
    
    Node* ceil = nullptr;
    Node* curr = root;
    while(curr!= nullptr){
        if(curr->key == key)
            return curr;
        else if( key > curr->key){
            curr = curr->right;
        }
        else{
            ceil == curr;               
            curr = curr->left;         //traversing in left in search of a better ceiling(kyuki ceil(just bada) to mil gaya ab better ceil(prev ceil se chota matlab key ke closest) chahiye)        
        }
    }
    return ceil;
}
int main(){
    Node* root = nullptr;
    root = Iinsert(root , 50);
    root = Iinsert(root , 30);
    root = Iinsert(root , 70);
    root = Iinsert(root , 55);
    root = Iinsert(root , 60);
    root = Iinsert(root , 80);
    root = Iinsert(root , 30);
    root = Iinsert(root , 10);
    root = Iinsert(root , 40);

    return 0;
}