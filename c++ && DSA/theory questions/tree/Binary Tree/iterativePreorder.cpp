#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int key){
        this->key  = key;
        left = right = nullptr;

    }
};

//what I thought
void iterativePreorder(Node* root){
    if(root == nullptr)
    return;
    stack<Node*> s;
    Node* curr = root;
    while(curr!= nullptr || !s.empty() ){
        while(curr!= nullptr){
            s.push(curr);
            cout<<curr->key<<" ";
            curr = curr->left;
        }
        curr = s.top();
        curr= curr->right;
        s.pop();
    }
}
//gfg solution
void iterativePreorder2(Node* root){
    if(root == nullptr)
    return;
    stack<Node*> s;
    s.push(root);
    while(!s.empty() ){
        Node * curr = s.top();
        cout<<curr->key<<" ";
        s.pop();
        if(curr->right != nullptr)
        s.push(curr->right);
        if(curr->left != nullptr)
        s.push(curr->left);
    }
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    root->right->left = new Node(40);
    root->right->right = new Node(50);
    iterativePreorder(root);
    cout<<endl;
    iterativePreorder2(root);
    return 0;
}