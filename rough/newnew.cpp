#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[] , int val [] , int n , int w){
    int dp[n+1][w+1];
    for(int i = 0  ; i <=n ; i++){
        dp[i][0] = 0;
    }
    for(int i = 0 ; i<=w ; i++){
        dp[0][i] = 0;
    }

    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=w ; j++){
            if(wt[i-1] <= j)
                dp[i][j] = max(val[i-1] + dp[i-1][w-wt[i-1]] , dp[i-1][w-1]);
            else    
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][w];
}
int main(){
    int wt[]  = {4,5,1};
    int val[] = {1,2,3};
    int n =  sizeof(val)/sizeof(int);
    int w = 4;
    cout<<knapsack(wt, val , n , w);
    return 0;
}