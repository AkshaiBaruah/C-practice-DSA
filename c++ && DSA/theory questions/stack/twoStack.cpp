#include<iostream>
using namespace std;

struct twoStack{
    int cap;
    int *arr;
    int top1;
    int top2;
    //constructor
    twoStack(int cap){
        this->cap = cap;
        arr = new int[cap];
        top1 = -1;
        top2 = cap;
    }
    void push1(int data){
        if(top1 = top2 -1){
            cout<<"overflow"<<endl;
            return;
        }
        top1++;
        arr[top1] = data;
    }
    void push2(int data){
        if(top2 = top1 + 1){
            cout<<"overflow"<<endl;
            return;
        }
        top2--;
        arr[top2] = data; 
    }
    void pop1(){
        if(top1 == -1){
            cout<<"underflow";
            return;
        }
        top1--;
    }
    void pop2(){
        if(top2 == cap){
            cout<<"underflow"<<endl;
            return;
        }
        top2++;
    }
    int peek1(){
        if(top1 == -1){
            cout<<"underflow"<<endl;
            return INT32_MIN;
        }
        return arr[top1];
    }
    int peek2(){
        if(top2 == cap){
            cout<<"underflow"<<endl;
            return INT32_MIN;
        }
        return arr[top2];
    }
    int size1(){
        return (top1 + 1);
    }
    int size2(){
        return (cap - top2);
    }
};
int main(){

    
    return 0;
}