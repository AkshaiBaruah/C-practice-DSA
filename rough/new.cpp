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
    // char* str;
    // cout<<"enter the first string :\n";
    // gets(str);
    // int i = 0;
    // while(*(str+i) !='\0' ){
    //     cout<<*(str+i);
    //     i++;
    // }

    int * arr;
    int i =0;
    arr = new int[10];
    return 0;
}