#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = nullptr;
    }
};
Node* insertEnd(Node* head , int data){
    Node* newNode = new Node(data);
    if(head== nullptr)
        return newNode;
    Node* curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
    }
    curr->next = newNode;
    return head;
}

bool isLooped(Node* head){
    unordered_set<Node* > s;
    Node* curr = head;
    while(curr!= nullptr){
        if(s.find(curr) != s.end())
            return true;
        s.insert(curr);
        curr = curr->next;
    }
    return false;
}
int main(){
    Node* head = nullptr;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    head = insertEnd(head,40);
    head->next->next->next->next = head->next;
    cout<<boolalpha<<isLooped(head);
    return 0;
}