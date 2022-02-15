#include<iostream>
using namespace std;

struct Node{
    int data; 
    Node* next ;
    Node(int data_val)
        :data{data_val} , next{nullptr}  {}
};

Node* insertEnd(Node* head , int data);
int sumOfNodes(Node* head);

//driver code
int main(){
    Node* head = nullptr;
    head = insertEnd(head , 1);
    head = insertEnd(head , 2);
    head = insertEnd(head , 3);
    head = insertEnd(head , 4);
    cout<<sumOfNodes(head);
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
//function which returns the sum of nodes of a linked list (in case of null LL then sum returned is 0);
int sumOfNodes(Node * head) {
    int sum = 0;
    Node* curr = head;
    while(curr){
        sum+=curr->data;
        curr= curr->next;
    }
    return sum;
}