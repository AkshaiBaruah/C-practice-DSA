#include<bits/stdc++.h>
using namespace std;

int memo[1000];

int fib(int n){
    if(memo[n] == -1){
        if(n == 0 || n == 1)
            memo[n] = n;
        else 
            memo[n] = fib(n-1) + fib(n-2);
    }
    return memo[n];
}
int main(){
    memset(memo , -1 , sizeof(memo));
    cout<<fib(10);
    return 0;
}