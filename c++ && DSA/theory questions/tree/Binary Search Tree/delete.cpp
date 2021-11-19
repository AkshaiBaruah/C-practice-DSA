#include<iostream>
using namespace std;

struct Node{
    int key;
    Node* left; Node* right;
    Node(int key){
        this->key = key;
        left = right = nullptr;
    }
};
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

Node* Rdelete(Node* root , int key){
    if(root == nullptr)
        return root;
    else if(key < root->key)
        root->left = Rdelete(root->left , key);
    else if(key > root->key)
        root->right = Rdelete(root->right , key);   //above three conditions handle search of key and if key not present then it keeps on calling until null is reached and then it returns the original root;
    else{                                           //this is when we find the key...then we need to replace the key with Inorder successor
        Node* prev = root;                          //we find successor which is leftmost node of right child
        Node* curr = root->right;                   //if right child is null(which is in case of leaf node and node having left child only) then node is deleted and left child is coppied to its parent(null in case of leaf node);
        while(curr!=nullptr){                       //while loop to find successor
            prev =curr;
            curr = curr->left; 
        }                                           //after loop ends prev will be the successor
        if(prev==root){                             //if prev==root it means right child was null and then left is simply copied in place of root and root is deleted;
            Node* temp = root->left;
            delete root;                            //root is deleted
            return temp;                            //root->left takes the place of root;
        }
        else{                                       
            root->key = prev->key;
            root->right = Rdelete(root->right , prev->key);
        }
    }
}

int main(){
    Node* root = nullptr;
    root = Rinsert(root , 50);
    root = Rinsert(root , 30);
    root = Rinsert(root , 70);
    root = Rinsert(root , 55);
    root = Rinsert(root , 60);
    root = Rinsert(root , 80);
    root = Rinsert(root , 30);
    root = Rinsert(root , 10);
    root = Rinsert(root , 40);

}