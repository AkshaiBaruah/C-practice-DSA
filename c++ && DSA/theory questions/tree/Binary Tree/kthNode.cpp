#include<iostream>
using namespace std;

struct Node{
    int key;
    Node * left;
    Node * right;
    Node(int key){
        this->key = key;
        left= right = nullptr;
    }
};

void printKth(Node* root , int k){

    if(root == nullptr)
        return;

    if(k==0){
        cout<<root->key<<" ";
        return;
    }
    else{
        printKth(root->left , k-1);
        printKth(root->right , k-1);
    }
}

int main(){

}