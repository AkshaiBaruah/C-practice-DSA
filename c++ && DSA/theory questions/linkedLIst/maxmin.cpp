#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next ;
    Node( int data_val)
        :data{data_val} , next{nullptr} {}
};

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
pair<int , int > maxmin(Node* head){
    pair<int , int > result = {INT32_MIN , INT32_MAX};
    if(head == nullptr)
    return result;
    Node* curr = head;
    while(curr){
        if(curr->data > result.first)
        result.first = curr->data;
        if(curr->data < result.second)
        result.second = curr->data;

        curr = curr->next;
    }
    return result;

}

//driver code
int main(){

    Node* head = nullptr;
    // head = insertEnd(head , 1);
    // head = insertEnd(head , 2);
    // head = insertEnd(head , 3);
    // head = insertEnd(head , 4);
    pair<int , int > result = maxmin(head);
    cout<<"max : " <<result.first <<endl<<"min : " << result.second;
    return 0;
}