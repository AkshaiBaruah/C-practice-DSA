#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = nullptr;
    }
    Node(){
        this->data = 0;
        next = nullptr;
    }
};
Node* insertEnd(Node* head , int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        return newNode;
    }
    Node* curr = head;
    while(curr->next!= nullptr){
        curr = curr->next;
    }
    curr->next = newNode;
    return head;
}
void printList(Node* head){

    Node* curr = head;
    while(curr!= nullptr){
        cout<<curr->data;
        curr = curr->next;
    }
    cout<<"\n=======================\n";
}

Node* evenOdd(Node* head){
    if(head == nullptr || head->next == nullptr)
        return head;
    Node* oStart = nullptr,* oEnd= nullptr ,* eStart = nullptr , *eEnd = nullptr;
    Node* curr = head;
    while(curr != nullptr){
        int elem = curr->data;
        if(elem %2 ==0){                    //if current data is even
            if(eStart == nullptr){          
                eStart = eEnd = curr;
            }
            else{
                eEnd->next = curr;
                eEnd = curr;
            }
        }
        else{                               //if current data is odd
            if(oStart == nullptr){
                oStart = oEnd = curr;
            }
            else{
                oEnd->next = curr;
                oEnd = curr;
            }
        }
        curr = curr->next;
    }
    if(eStart != nullptr){
        head = eStart;
        eEnd->next = oStart;
        if(oEnd!= nullptr){
            oEnd->next = nullptr;
        }
    }
    else{
        head = oStart;
    }
    return head;
}

int main(){
    Node* head = nullptr;
    head = insertEnd(head,10);
    head = insertEnd(head,21);
    head = insertEnd(head,30);
    head = insertEnd(head,40);
    printList(head);
    head = evenOdd(head);
    printList(head);
    return 0;
}
