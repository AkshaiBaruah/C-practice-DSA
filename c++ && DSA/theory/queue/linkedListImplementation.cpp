#include<iostream>
#include<list>
using namespace std;

struct Node{
    int data;
    Node * next;
    Node(int data){
        this->data = data;
        next = nullptr;
    }
};

struct Queue{
    Node * front;
    Node * rear;
    int size;
    Queue(){
        front = nullptr;
        rear = nullptr;
        size = 0;
    }

    void enque(int data){
        
        Node* newNode = new Node(data);
        if(rear ==nullptr){
            size++;
            rear = newNode;
            front = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
        size++;
    }
    void enqueArr(int arr[] , int n){
        for(int i =0 ; i < n ; i++){
            enque(arr[i]);
        }
    }
    void deque(){
        if(front == nullptr){
            return ;
        }
        if(front ==rear){
            delete front;
            delete rear;
            front =rear = nullptr;
            return;
        }
        Node * newFront = front->next;
        delete front;
        front = newFront;
        
    }
    int getFront(){
        if(front!= nullptr)
        return front->data;
        return INT32_MIN;
    }
    int getRear(){
        if(rear!= nullptr)
        return rear->data;
        return INT32_MIN;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return ( front==nullptr);
    }
};

void printQ(Queue &q){
    Node* curr = q.front;
    while(curr!=nullptr){
        cout<<curr->data<<" ";
        curr= curr->next;
    }
    cout<<"\n=============================\n";
}

void rev(Queue &q){
    Node * curr = q.front;
    if(curr == nullptr)
    return;
    Node* prev = nullptr;
    while(curr!= nullptr){
        Node* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;  
    }
    swap(q.front , q.rear);
}

//driver code
int main(){
    Queue q;
    int arr[] = {10,20,30,40,50};
    q.enqueArr(arr , 5);
    printQ(q);
    rev(q);
    printQ(q);
    cout<<q.getFront()<<" "<<q.getSize()<<" "<<q.getRear()<<endl;
    q.deque();
    cout<<q.getFront()<<endl;
    q.deque();
    cout<<q.getFront()<<endl;
    q.deque();
    cout<<q.getFront()<<endl;
    q.deque();
    cout<<q.getFront()<<endl;
    q.deque();
    cout<<q.getFront()<<endl;
    q.deque();
    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;
    printQ(q);
}