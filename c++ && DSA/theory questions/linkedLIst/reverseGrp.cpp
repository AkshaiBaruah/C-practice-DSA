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
void printList(Node* head){
    Node* curr = head;
    while(curr!= nullptr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<"\n===========================\n";
}
Node* insertEnd(Node* head , int data){
    Node* newNode = new Node(data);
    if(head == nullptr)                   //edge case as we need to change head;
        return newNode;
    Node* curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
    }
    curr->next = newNode;
    return head;
}

pair<Node* , Node*> reverse(Node* head , int k){
    vector<pair<Node* ,Node*>> headTail = {{nullptr , nullptr}};
    if(head == nullptr || head->next == nullptr)
    {
        return {head , head};
    }

    Node* prev = nullptr;
    Node* curr = head;
    for(int i =0 ;  i<k && curr!=nullptr ; i++){
        Node* to_be_nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = to_be_nxt;
    }
    return {prev , head};
}

Node* reverseGrp(Node* head , int k ){
    if(head == nullptr || head->next == nullptr)
        return head;
    vector<pair<Node* ,Node*>> ends;
    Node* curr = head;
    while(curr!=nullptr){
        Node* reverseHead = curr;
        for(int i = 0 ; i<k ; i++){
            if(curr == nullptr)
                break;
            curr = curr->next;
        }
        pair<Node* , Node* > p = reverse(reverseHead , k);
        ends.push_back(p);
    }
    for(int i =0 ; i<ends.size()-1 ; i++){
        ends[i].second->next = ends[i + 1].first;   
    }
    return ends[0].first;
}

Node* reverseGrpRecursive(Node* head , int k){
    if(head == nullptr || head->next == nullptr)
        return head;
    Node* prev = nullptr;
    Node* curr = head;
    int cnt = 0;
    while(curr!= nullptr && cnt <k){
        Node* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
        cnt++;
    }
    Node* restHead = reverseGrpRecursive(curr , k);
    head->next = restHead;
    return prev;
}


int main(){
    Node* head = insertEnd(nullptr , 10);
    head = insertEnd(head , 20);
    head = insertEnd(head , 30);
    head = insertEnd(head , 40);
    head = insertEnd(head , 50);
    head = insertEnd(head , 60);
    head = insertEnd(head , 70);
    printList(head);
    head = reverseGrpRecursive(head , 1);
    printList(head);
    return 0;
}