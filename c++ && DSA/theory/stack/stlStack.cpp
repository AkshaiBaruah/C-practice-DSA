#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.push(100);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    
}