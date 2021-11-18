#include<iostream>
#include<list>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key; 
    Node * left ; 
    Node* right;
    Node(int key){
        this->key = key;
        left = right = nullptr;
    }
};

int max3( int a , int b , int c){
    return max(max(a,b) , c);
}

int main(){
    cout<<max3(69,420,504);
    
    
    return 0;
}