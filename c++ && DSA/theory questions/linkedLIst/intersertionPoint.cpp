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
    if(head == nullptr)
        return newNode;
    Node* curr = head;
    while(curr->next!= nullptr){
        curr = curr->next;
    }
    curr->next = newNode;
    return head;

}
//first solution : uses hashset O(m+n) time and O(m+n) space;
int intersectionPoint(Node* h1 , Node* h2){
    if(h1 == nullptr || h2 == nullptr)
        return INT32_MIN;
    unordered_set<Node*> s1;                  //set which has the presence of list1;
    Node* curr = h1;
    while(curr != nullptr){             //finds the last node of list1;
        s1.insert(curr);
        curr= curr->next;
    } 
    curr =h2;
    while(curr!= nullptr){
        if(s1.find(curr) != s1.end()){
            return curr->data;
        }
        curr = curr->next;
    }
    return INT32_MIN;
}

//second solution : make a cycle(by me) linear time and constant space ;
int intersectionPoint2(Node* h1 , Node* h2){
    if(h1 == nullptr || h2 == nullptr)
        return INT32_MIN;
    Node* curr =h1;
    while(curr->next!= nullptr){
        curr = curr->next;
    }
    Node* tail = curr;
    curr->next = h2;
    Node* slow = h1;
    Node* fast = h1;
    while(1){ 
        slow= slow->next;
        fast = fast->next->next;
        if(slow==fast)  
            break;
    }
    slow = h1;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    tail->next = nullptr;
    return slow->data;

}
int main(){
    Node* head = nullptr;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    head = insertEnd(head,40);
    head = insertEnd(head,50);
    head = insertEnd(head,60);
    Node* head2 = nullptr;
    head2 = insertEnd(head2,5);
    head2 = insertEnd(head2,15);
    head2 = insertEnd(head2,25);
    head2->next->next->next = head->next->next;
    cout<<intersectionPoint2(head , head2);
    cout<<intersectionPoint(head, head2);
    return 0;
}