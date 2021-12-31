#include<iostream>
using namespace std;
//Implementation 1 
struct Queue1{
    int cap , size;                          //cap is the max size of the array to be implemented in heap;
    int front;                               //index of front;;index of rear will always be front + size -1
    int *arr;
    Queue1(int c){
        cap = c;
        arr = new int[cap];
        size = 0;
        front = 0;
        arr[0] = INT32_MIN;
    }

    void enque(int data){
       if(isFull()){
           cout<<"queue is full"<<endl;
           return;
       }
        size ++;
        int rear = (front + size - 1)%cap;
        arr[rear] = data;
        
        
    }
    int deque(){
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

//implementation 2 : My implementation
struct Queue2{
    int cap;                                //capacity of the array used;
    int* arr;                               //the array;
    int size;                               //current size of elements : initialized to 0;
    int rear;                               //index of rear element : where we enque : initialized to -1;
    Queue2(int cap){
        this->cap = cap;
        arr = new int[cap];
        size = 0;
        rear = -1;
    }
    void enque(int data){
        if(isFull())
            return;
        size++;                             //sized in increased when we add one element;
        rear = (rear + 1)%cap;              //index of rear if shifted to next of it in circular fashion(learn more);
        arr[rear] = data;                   //and data is stored at rear;
    }
    void deque(){
        if(isEmpty())
            return ;
        size--;                             //size is decreased when we remove one element;
    }
    int getRear(){
        if(size!= 0){
            return arr[rear];               //rear index is stored so we directly return arr[rear];
        }
        return INT32_MIN;
    }
    int getFront(){
        if(size!= 0){
            return arr[(rear - size + 1 + cap)%cap];         //index of rear is always (rear - size + 1) but we add cap and modulo cap in order to maintain circular fasion;
        }
        return INT32_MIN;
    }
    int getSize(){
        return size;                        //size is stored so return it;
    }
    bool isFull(){
        return (size == cap);              //self explanatory;
    }
    bool isEmpty(){
        return (size == 0);                //self explanatory; 
    }
};

int main(){
    Queue1 q1(6);
    q1.enque(10);
    q1.enque(20);
    q1.enque(30);
    q1.enque(40);
    q1.enque(50);
    q1.enque(60);
    cout<<q1.getFront()<<" "<<q1.getRear()<<" "<<q1.getSize()<<endl;
    q1.deque();
    cout<<q1.getFront()<<" "<<q1.getRear()<<" "<<q1.getSize()<<endl;
    q1.enque(70);
    cout<<q1.getFront()<<" "<<q1.getRear()<<" "<<q1.getSize()<<endl;
    q1.deque();
    q1.deque();
    q1.deque();
    q1.deque();
    q1.deque();
    cout<<q1.getFront()<<" "<<q1.getRear()<<" "<<q1.getSize()<<endl;

    Queue2 q2(6);
    q2.enque(10);
    q2.enque(20);
    q2.enque(30);
    q2.enque(40);
    q2.enque(50);
    q2.enque(60);
    cout<<q2.getFront()<<" "<<q2.getRear()<<" "<<q2.getSize()<<endl;
    q2.deque();
    cout<<q2.getFront()<<" "<<q2.getRear()<<" "<<q2.getSize()<<endl;
    q2.enque(70);
    cout<<q2.getFront()<<" "<<q2.getRear()<<" "<<q2.getSize()<<endl;
    q2.deque();
    q2.deque();
    q2.deque();
    q2.deque();
    q2.deque();
    cout<<q2.getFront()<<" "<<q2.getRear()<<" "<<q2.getSize()<<endl;
    return 0;
}