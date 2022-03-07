#include<bits/stdc++.h>
using namespace std;

int rodCutting(int price[] , int n){
    int dp[n+1];
    memset(dp , 0 , sizeof(dp));

    for(int i = 1 ; i<=n ; i++){             //subproblem for rod of length i
        for(int j = 0 ; j<i ; j++){           //we can cut till i length (1 to i length);
            dp[i] = max(price[j] + dp[i - j - 1] , dp[i]);
        }
    }
    return dp[n];
}
int main(){
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(price)/sizeof(price[0]);
    cout<<rodCutting(price , n);
    return 0;
}