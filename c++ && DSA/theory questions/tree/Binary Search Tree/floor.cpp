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

Node* floor(Node * root , int key){
    
    Node* floor = nullptr;
    Node* curr = root;
    while(curr!= nullptr){
        if(curr->key == key)
            return curr;
        else if( key < curr->key){
            curr = curr->left;
        }
        else{
            floor == curr;              //we are not checking with prev value of floor bcz we are sure that once a floor is assigned we immediately go to curr->right in search of a better floor so if any floor found after that it is guaranteed to be better than the prev floor as we moved right
            curr = curr->right;         //moving right in search of a better floor...and any floor found front here on would be better than a prev floor;
        }
    }
    return floor;
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