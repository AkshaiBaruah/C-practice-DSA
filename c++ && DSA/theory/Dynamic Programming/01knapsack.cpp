#include<bits/stdc++.h>
using namespace std;
//knapsack using plain recursion : we have choice to include an item or not
int knapsack1(int wt[] , int val[] , int n , int W){
    //base case
    if(n == 0 || W == 0)
        return 0;

    int p1 = 0 , p2 = 0;
    if(wt[n-1] <= W)
        p1 = val[n-1] + knapsack1(wt , val , n-1 , W - wt[n-1]);
    
    p2 = knapsack1(wt , val , n-1 , W);

    return max(p1 , p2);

}

//knapsack using memoization top down
int memo[1000][1000];
int knapsack2(int wt[] , int val[] , int n , int W){
    if(memo[n][W] == -1){
        if(n == 0 || W == 0)
            memo[n][W] = 0;
        else{
            int p1 = 0 , p2 = 0;
            if(wt[n-1] <= W)
                p1 = val[n-1] + knapsack2(wt , val , n-1 , W - wt[n-1]);
            p2 = knapsack2(wt , val , n-1 , W);
            memo[n][W] = max(p1 , p2);
        }
        
    }
    return memo[n][W];
}
//knapsack using tabulation bottom up
int dp[1001][1001];
int knapsack3(int wt[] , int val [] , int n , int W){
    for(int i = 0 ; i<=n ; i++){            //these two loops are similar to the base case of a recursive function
        dp[i][0] = 0;
    }
    for(int i = 0 ; i<=W ; i++){
        dp[0][i] = 0;
    }

    for(int i = 1 ; i<=n ; i++){           //this is a loop to fill the subproblem matrix from bottom so we can use prev subproblem values to solve the current problem(which is the current iteration);
        for(int j = 1 ; j<=W ; j++){
            int p1 =0 , p2 = 0;
            if(wt[i-1] <= j)
                p1 = val[i-1] + dp[i-1][j-wt[i-1]];        //we include the value and use subproblem value when item arr was smaller. This subproblem value in this step gives the max profit of the respective;

            p2 = dp[i-1][W];

            dp[i][j] = max(p1 , p2);                       //and the curr value is the max of both the cases;
        }
    }
    return dp[n][W];                     //we fill all the matrix(subproblem matrix) at the time of returning the sol for n , W we have all the subproblem info and can return directly

}
int main(){
    memset(memo ,-1 ,  sizeof(memo));
    memset(dp ,-1 , sizeof(dp));

    return 0;
}