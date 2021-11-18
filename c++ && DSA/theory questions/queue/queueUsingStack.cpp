#include<iostream>
#include<stack>
using namespace std;

struct Queue{
    stack<int> s1 ,s2;


    void enque(int data){
        s1.push(data);
    }
    int deque(){
        if(s1.empty() && s2.empty()){
            return INT32_MIN;
        }
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int result = s2.top();
        s2.top();
        while(!s2.empty()){
            int data = s2.top();
            s2.pop();
            s1.push(data);
        }
        return result;
    }
};

int main(){

}