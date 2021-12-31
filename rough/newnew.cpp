#include<bits/stdc++.h>
using namespace std;

struct MyQueue{
    int cap;
    int* arr;
    int size;
    int rear;
    MyQueue(int cap){
        this->cap = cap;
        arr = new int[cap];
        size = 0;
        rear = -1;
    }
    void enque(int data){
        if(isFull())
            return;
        size++;
        rear = (rear + 1)%cap;
        arr[rear] = data;
    }
    void deque(){
        if(isEmpty())
            return ;
        size--;
    }
    int getFront(){
        if(size!= 0){
            return arr[(rear - size + 1 + cap)%cap];
        }
        return INT32_MIN;
    }
    int getRear(){
        if(size!= 0){
            return arr[rear];
        }
        return INT32_MIN;
    }
    int getSize(){
        return size;
    }
    bool isFull(){
        return (size == cap);
    }
    bool isEmpty(){
        return (size == 0);
    }
};
int main(){
    
    MyQueue q(6);
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.enque(50);
    q.enque(60);
    cout<<q.getFront()<<" "<<q.getRear()<<" "<<q.getSize()<<endl;
    q.deque();
    cout<<q.getFront()<<" "<<q.getRear()<<" "<<q.getSize()<<endl;
    q.enque(70);
    cout<<q.getFront()<<" "<<q.getRear()<<" "<<q.getSize()<<endl;
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    cout<<q.getFront()<<" "<<q.getRear()<<" "<<q.getSize()<<endl;

    return 0;
}