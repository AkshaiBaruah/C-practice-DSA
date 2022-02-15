#include<iostream>
using namespace std;

struct Mystack{

    int cap;                        //size of the array used
    int *arr;                       //pointer to point to heap memory where array[cap] will be declared
    int top;                        //index of the topmost element which is also the current element in stack

    //constructor
    Mystack(int cap_val)
        :cap{cap_val} , top {-1} {
            arr = new int[cap];     //giving arr the address of int array of cap in heap
        }

    void push(int data){
        if(top == cap - 1){         //top - index of top elem ; cap - 1 = index of the last place in array; if equal means array is filled
            cout<<"stack overflow";
            return;
        }
        top++;
        arr[top] = data;
    }
    int pop(){                         //removes the top element and also returns it;
        if(top == -1){
            cout<<"underflow"<<endl;
            return INT32_MIN;
        }
        int res = arr[top];            //storing the top element for return
        top--;                         //decreasing the size by 1
        return res;                    //returning the previously stored top element;
    }
    int peek(){                        //returns the top element              
        if(top ==-1){                  //top == -1 means stack is empty so we return invalid number like inf
            cout<<"underflow"<<endl;
            return INT32_MIN;
        }
        return arr[top];               //since top is the index of topmost element so arr[top] is the top element
    }
    int size(){
        return (top + 1);              //since top is the topmost "index" so size will be top + 1;
    }
    bool isEmpty(){
        return (top == -1);
    }
};

int main (){

    Mystack s(10);
    s.push(1);
    s.push(2);
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    s.push(100);
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    return 0;
}