#include<iostream>
#include<vector>
using namespace std;

struct Mystack{
    vector<int> v;
     
    void push(int data){
        v.push_back(data);
    }

    int pop(){
        int res = v.back();
        v.pop_back();
        return res;
    }

    int peek(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool isEmpty(){
        return v.empty();
    }
};

int main(){
    Mystack s;
    // s.push(1);
    // s.push(2);
    // cout<<s.size()<<endl;
    // cout<<s.peek()<<endl;
    // s.push(100);
    // cout<<s.peek()<<endl;
    // cout<<s.size()<<endl;
    
    return 0;
}