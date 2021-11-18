#include<iostream>
using namespace std;

struct Node{
    int data; 
    Node* next ;
    Node(int data_val)
        :data{data_val} , next{nullptr}  {}
};

Node* insertEnd(Node* head , int data);
int size(Node* head);

//driver code
int main(){
    Node* head = nullptr;
    head = insertEnd(head  , 10);
    head = insertEnd(head  , 10);
    head = insertEnd(head  , 10);
    head = insertEnd(head  , 10);
    head = insertEnd(head  , 10);
    cout<<size(head);
    return 0;
}

//insertEnd function for creation of linked list;
Node* insertEnd(Node* head , int data){
    Node* newNode = new Node(data);
    if(head == nullptr) 
    return newNode;
    Node* curr = head;
    while(curr->next){
        curr = curr->next ;
    }
    curr->next = newNode;
    return head;
}
//returns the size of the linked list (in case of empty linked list - null head , it returns size as 0);
int size(Node * head) {
    int nodes = 0;
    Node* curr = head;
    while(curr){
        nodes++;
        curr= curr->next;
    }
    return nodes;
}