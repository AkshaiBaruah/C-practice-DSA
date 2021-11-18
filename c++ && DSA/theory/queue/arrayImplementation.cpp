#include<iostream>
using namespace std;

struct Queue{
    int cap , size;                          //cap is the max size of the array to be implemented in heap;
    int front;                               //index of front;;index of rear will always be front + size -1
    int *arr;
    Queue(int c){
        cap = c;
        arr = new int[cap];
        size = 0;
        front = 0;
        arr[0] = INT32_MIN;
    }

    void enqueue(int data){
       if(isFull()){
           cout<<"queue is full"<<endl;
           return;
       }
        size ++;
        int rear = (front + size - 1)%cap;
        arr[rear] = data;
        
        
    }
    int dequeuq(){
        if(isEmpty()){
            cout<<"queue is empty";
            return INT32_MIN;
        }
       front = (front + 1)%cap;
       size--;
    }
    int getFront(){
       return arr[front];
    }
    int getRear(){
        return arr[(front + size -1)%cap];
    }
    bool isFull(){
        return size==cap;
    }
    bool isEmpty(){
        return size == 0;
    }
    int getSize(){
        return size;
    }
    
};

int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<q.getFront()<<" "<<q.getSize()<<" "<<q.getRear();
    return 0;
}