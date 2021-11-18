#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int key;
    Node* left ;
    Node * right;
    Node(int key){
        this->key = key;
        left = right = nullptr;
    }
};

void iterativeInorder(Node* root){
    if(root == nullptr)
    return;
    stack<Node*> s ;                     //to mimic the function call stack;
    Node * curr = root;
    while(curr!= nullptr || !s.empty()){ //this whole loop(including everything inside is like the function call for a node;
        while(curr!= nullptr){           //this loop is like  the first statement of the parent function :: pushes the left treee until null;
            s.push(curr);                //all left nodes are pushed first because we need to process the left first then node then right(inorder)
            curr = curr->left;
        }
        curr = s.top();                  //this is to return curr back to the last left node;
        cout<<curr->key<<" ";            //print of the leftmost node :: this is like the mid statement(cout) of a function call;
        curr = curr->right;              //this is like the recursive call for right;
        s.pop();
        
    }
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    root->right->left = new Node(40);
    root->right->right = new Node(50);
    iterativeInorder(root);

    return 0;
}