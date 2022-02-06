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
void inorder(Node* root){
    if(root == nullptr)
        return ;
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}

Node* Rdelete(Node* root , int key){
    if(root == nullptr)
        return root;
    else if(key < root->key)
        root->left = Rdelete(root->left , key);
    else if(key > root->key)
        root->right = Rdelete(root->right , key);   //above three conditions handle search of key and if key not present then it keeps on calling until null is reached and then it returns the original root;
    else{                                           //this is when we find the key...then we need to replace the key with Inorder successor

        if(root->left == nullptr){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if(root->right == nullptr){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //above two handles leaf node and single child

        //both child non empty
        Node* prev = root;                          //we find successor which is leftmost node of right subtree
        Node* curr = root->right;                   //if right child is null(which is in case of leaf node and node having left child only) then node is deleted and left child is coppied to its parent(null in case of leaf node);
        while(curr!=nullptr){                       //while loop to find successor
            prev =curr;
            curr = curr->left; 
        }                                           //after loop ends prev will hold the successor
                                                              
        root->key = prev->key;
        root->right = Rdelete(root->right , prev->key);   //now just need to delete a leaf node 
        
    }
    return root;
    
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
    inorder(root);
    cout<<endl;
    root =Rdelete(root,  30);
    inorder(root);

}