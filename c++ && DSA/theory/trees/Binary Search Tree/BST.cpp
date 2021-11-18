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

bool Isearch(Node* root , int key){                    //this function assumes that all nodes have distinct keys

    Node* curr = root;
    while(curr!=nullptr){
        if(key == curr->key)
            return true;
        else if(key < curr->key)
            curr=curr->left;
        else
            curr=curr->right;
    }
    return false;
}
bool Rsearch(Node* root , int key){                    //this function assumes that all nodes have distinct keys 
    if(root == nullptr)
    return false;

    else if(key == root->key)
        return true;
    else if(key < root->key)
        return Rsearch(root->left , key);
    else
        return Rsearch(root->right , key);
}

int main(){
    
    Node* root = new Node(15);
    root->left = new Node(12);
    root->right = new Node(30);
    root->left->left = new Node(8);
    root->left->right = new Node(14);
    root->right->right = new Node(420);
    cout<<boolalpha<<Rsearch(root , 14);
    cout<<Isearch(root , 14);

    return 0;
}