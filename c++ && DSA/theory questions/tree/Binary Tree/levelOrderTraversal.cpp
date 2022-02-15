#include<iostream>
#include<queue>
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

void levelOrderTraversal(Node* root){
    if(root == nullptr)                         //explicit case when null root is passed
    return;
    queue<Node*> q ;                            //this queue has a level left to right;
    q.push(root);                               
    while(!q.empty()){
        Node* curr = q.front();                 //this is the statement where curr changes to the first of the queue.
        q.pop();
        cout<<curr->key<<" ";
        if(curr->left != nullptr)
            q.push(curr->left);
        if(curr->right != nullptr)
            q.push(curr->right);
    }
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(6);
    root->left->right = new Node(9);
    root->right->right = new Node(420);
    levelOrderTraversal(root);
    
}