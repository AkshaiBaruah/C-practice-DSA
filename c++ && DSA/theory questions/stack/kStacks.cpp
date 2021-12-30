#include<bits/stdc++.h>
using namespace std;

struct kStacks{
    int cap;                             //capacity of the array to be used
    int k;                               //number of stacks
    int *arr;                            //array
    int *top;                            //top index of each stack and index of top array denotes the stack number
    int *next_prev;                      //array which stores next free slot index if empty and prev index of that index if filled
    int free;                            //stores the current free slot
    //constructor
    kStacks(int cap , int k){
        this->cap = cap;
        this->k =k;
        arr = new int[cap];
        top = new int[k];
        next_prev = new int[cap];
        free = 0;
        fill(top , top + k , -1);
        for(int i =0 ; i<cap -1 ; i++){
            next_prev[i] = i+1;
        }
        next_prev[cap-1] = -1;
    }

    void push(int data , int sn){
        if(free == -1){
            cout<<"overflow"<<endl;
            return;
        }
        int i = free;                       
        free = next_prev[free];                  //so that we keep track of the next free slot;
        next_prev[i] = top[sn];                  //to store the prev elem of current stack
        arr[i] = data;
        top[sn] = i;
    }
    int pop(int sn){
        if(top[sn] == -1){
            cout<<"underflow for stack no."<<sn<<endl;
            return INT32_MIN;
        }
        int i = top[sn];                         //we have to pop the index i;
        top[sn] = next_prev[i];                  //now the top of stack sn will become the prev index of i which is stored in next_prev
        next_prev[i] = free;
        free = i; 
        return arr[i];
    }       
    int peek(int sn){
        if(top[sn] == -1){
            cout<<"underflow for stack no. "<<sn<<endl;
            return INT32_MIN;
        }
        return arr[top[sn]];
    }
};
int main(){
    return 0;
}