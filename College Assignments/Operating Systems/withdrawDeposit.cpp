#include<bits/stdc++.h>
using namespace std;
int amount = 100;
bool lock_ = false;

void deposit(int x){
    while(lock_ == true){
        ;
    }
    lock_ = true;
    amount += x;

    //exit section 
    lock_ = false ;
}

void withdraw(int x){
    //entry section
    while(lock_ == true){
        ;
    }
    lock_ = true;
    amount -= x;

    //exit section
    lock_ = false;
}
int main(){
    
    return 0;
}