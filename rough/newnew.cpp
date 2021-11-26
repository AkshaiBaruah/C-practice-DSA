#include<iostream>
using namespace std;

int ankur(int x , int y ){
    
    return x+y;
}

int sayHello(){
    cout<<"hello";
    return 0;
}

int main(){
    int  arr[] = {};
    int a = 10;
    int *p = &a;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&a<<endl;
      
}