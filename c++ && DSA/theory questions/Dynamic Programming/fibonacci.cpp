#include<bits/stdc++.h>
using namespace std;
//memo table
int memo[1000];
//dp table
int dp[1000];
//using memoization : top down
int fib(int n){
    if(memo[n] == -1){
        if(n == 0 || n == 1)
            memo[n] = n;
        else 
            memo[n] = fib(n-1) + fib(n-2);
    }
    return memo[n];
}
//using tabulation : bottom up
int fib2(int n){
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <=n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main(){
    memset(memo , -1 , sizeof(memo));
    cout<<fib(10)<<" "<<fib2(10);
    return 0;
}