#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data_val)
        : data{data_val} , next{nullptr} {}
};

struct Mystack{
    Node* head;
    int sz;              //so that we can return the size when asked;
    Mystack()
        : head{nullptr} , sz{0} {}
    
    void push(int data){
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        sz++;
    }

    int pop(){
        if(head == nullptr){
            cout<<"underflow"<<endl;
            return INT32_MIN;
        }
        sz--;
        Node* newHead = head->next;
        int res = head->data;
        delete head;
        head = newHead;
        return res;
    }
    int peek(){
        if(head == nullptr){
            cout<<"underflow"<<endl;
            return INT32_MIN;
        }
        return head->data;
    }
    int size(){
        return sz;
    }
    bool isEmpty(){
        return (head == nullptr);
    }

};

int main(){
    Mystack s;
    s.push(10);
    s.push(20);
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    s.push(100);
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;

    return 0;
}