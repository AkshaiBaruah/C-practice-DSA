#include<bits/stdc++.h>
using namespace std;
//plain recursion
int knapsack(int wt[] , int val [] , int n , int w){                 //return the max profit
    if(w == 0 || n == 0)
        return 0;
    if(wt[n-1] <= w)
        return max( val[n-1] + knapsack(wt , val , n , w - wt[n-1]) , knapsack(wt , val , n-1 , w) );
    else    
        return knapsack(wt , val , n-1 , w);  
}
//using dp
int knapsack2(int wt[] , int val[] , int n , int w){
    int dp[n+1][w+1];                 //the subproblem matrix;

    for(int i = 0 ; i<=n ; i++){
        dp[i][0] = 0;
    }
    for(int i = 0 ; i<=w ; i++){
        dp[0][i] = 0;
    }
    
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=w ; j++){
            if(wt[i-1] <= j)
                dp[i][j] = max(val[i-1] + dp[i][j - wt[i-1]] , dp[i-1][j]);
            else    
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][w];
}
int main(){
    int wt[] = {1, 3, 4, 5};
    int val[] = {1, 4, 5, 7};
    int n = sizeof(val)/sizeof(int);
    int w = 8;
    cout<<knapsack(wt, val , n , w)<<endl<<knapsack2(wt , val , n , w);
    return 0;
}