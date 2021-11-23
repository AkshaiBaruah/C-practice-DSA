#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fib(int n ){                             //excessive recursion; make the recursion tree for clarification;             O(2^n).
    if(n ==1 || n==2)
        return 1;
    return fib(n-1) + fib(n-2);
}

int fib2(int n){                             //this function uses memorization and stores in a hashtable(unordered_map);   O(n).
    static unordered_map<int , int> F;
    if(n==1 || n==2){                        //base case
        F[n] = 1;
        return 1;
    }
    // else if(F[n] != 0){
    //     return F[n];                      this condition is not required because we dont even call if value is already in hashmap
    //}
    else{
        if(F[n-1] == 0){
            F[n-1] = fib2(n-1);
        }
        if(F[n-2] == 0){
            F[n-2] = fib2( n-2 );
        }
        return F[n-1] + F[n-2];
    }
}
int main(){
    cout<<fib(9)<<endl;
    cout<<fib2(9)<<endl;
    return 0;
}