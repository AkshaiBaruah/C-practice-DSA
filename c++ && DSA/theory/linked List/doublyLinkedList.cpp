#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;

    Node(int data_val)
        : data{data_val} , prev{nullptr} , next{nullptr} {}
};

//functions
void printList(Node * head);
Node* insertBegin(Node* head , int data);
Node* insertEnd(Node* head , int data);
Node* reverse(Node * head);
Node* deleteHead( Node* head);
Node* deleteTail(Node* head);

//driver code
int main(){
    //manual creation;
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;
    printList(head);

    head = insertBegin(head , 0);
    head = insertEnd(head , 40);
    printList(head);
    //reverse trial
    head = reverse(head);
    printList(head);
    //deleteHead trial;
    head = deleteHead(head);
    printList(head);
    //deleteTail trial
    head = deleteTail(head);
    printList(head);
    head = deleteTail(head);
    printList(head);
    head = deleteTail(head);
    printList(head);
    head = deleteTail(head);
    printList(head);
    head = deleteTail(head);
    printList(head);
    return 0;
}
//prints all node data(in case of null head it simply returns);
void printList(Node* head){
    // if(head == nullptr)
    // return; 
    Node* curr = head;
    while(curr!= nullptr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<"\n======================\n";
}
//inserts at the beginning and returns the new Node inserted as head;
Node* insertBegin(Node * head , int data){
    Node* newNode = new Node(data);
    if(head == nullptr)
    return newNode;
    newNode->next = head;
    head->prev = newNode;
    return newNode;

}
//inserts at the end and returns head(in case of null it returns new Node as head);
Node* insertEnd(Node * head , int data){
    Node* newNode = new Node(data);
    if(head == nullptr)
    return newNode;
    Node* curr = head;
    while(curr->next != nullptr)
    curr = curr->next;
    curr->next = newNode;
    newNode->prev = curr;
    return head;
}
//reverses the LL and returns the new head(in case null head passes it returns null);
Node* reverse(Node* head){
    if(head == nullptr)
    return head;
    Node* curr = head;
    while(curr->next != nullptr){
        swap(curr->prev , curr->next);
        curr = curr->prev;
    }
    swap(curr->prev , curr->next);
    return curr;
}
//deletes the head and returns a new head(in case of null head or a single elem it returns null);
Node* deleteHead(Node* head){
    if(head == nullptr || head->next == nullptr){
        delete head;
        return nullptr;
    }
    Node* newHead = head->next;
    delete head;
    newHead->prev = nullptr;
    return newHead;
}
//deletes the tail and returns head(in case of null head or single elem it returns nullptr);
Node* deleteTail(Node* head){
    if(head  == nullptr || head->next == nullptr){
        delete head;
        return nullptr;
    }
    Node* curr = head;
    while(curr->next!= nullptr){
        curr = curr->next;
    }
    curr->prev->next = nullptr;
    delete curr;
    return head;
}