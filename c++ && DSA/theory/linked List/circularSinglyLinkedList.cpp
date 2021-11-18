#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * next;
    Node(int data_val)
        :data{data_val} , next{nullptr}  {}
};

void printList(Node * next);
Node* insertBegin( Node * head , int data );
Node* insertEnd( Node * head , int data);
Node* deleteHead(Node * head);
Node* deleteKth(Node* head , int k);

int main(){
    //insertBegin trial;
    Node* head = nullptr;
    head = insertBegin(head , 40);
    head = insertBegin(head , 30);
    head = insertBegin(head , 20);
    head = insertBegin(head , 10);
    printList(head);
    //insertEnd trial;
    Node* head2 = nullptr;
    head2 = insertEnd(head2 , 10);
    head2 = insertEnd(head2 , 20);
    head2 = insertEnd(head2 , 30);
    printList(head2);
    head2 = insertBegin(head2 , 0);
    printList(head2);
    //deleteHead trial
    head2 = deleteHead(head2);
    printList(head2);
    //deleteKth trial
    head2=deleteKth(head2 , 4);
    printList(head2);
    return 0;
}
//prints a circular singly linked list (this function assumes that the head passes is circularly linked);
void printList(Node * head){
    if(head == nullptr){
        cout<<"\n======================\n";
        return;
    }
    Node* curr = head;
    do{
        cout<<curr->data<<" ";
        curr = curr-> next;
    }while(curr!= head);
    cout<<"\n======================\n";
}
//inserts at the beginning hence returning the new head(if original head passes is null then returns a brand new head);
Node* insertBegin(Node* head , int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        newNode->next = newNode;
        return newNode;
    }
    newNode->next = head->next;
    head->next = newNode;
    swap(head->data , newNode->data);
    return head;
}
//inserts at end and returns the head(in case of null head passes it returns the newNode as head);
Node* insertEnd(Node * head , int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        newNode->next = newNode;
        return newNode;
    }
    newNode->next = head->next;
    head->next = newNode;
    swap(head->data , newNode->data);
    return newNode;

}
//deletes the head of a circular singly linked list;
Node* deleteHead(Node* head){
    if(head == nullptr || head->next ==head){
        delete head;
        return nullptr;
    }
    head->data = head->next->data;
    Node* headNxt = head->next->next;
    delete head->next;
    head->next = headNxt;
    return head;

}
//deletes the kth node(if k>size then it does nothing)
Node* deleteKth(Node * head , int k){
    if(head == nullptr)
    return head;
    if(k == 1)
    return deleteHead(head);
    Node* curr = head;
    for(int i =0 ; i<k-2 ; i++){
        if(curr->next->next ==head)
        return head;
        curr = curr->next;
    }
    Node* currNxt = curr->next->next;
    delete curr->next;
    curr->next = currNxt;
    return head;
}