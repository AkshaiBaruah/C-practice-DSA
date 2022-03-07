#include<bits/stdc++.h>               //give the max number of ways
using namespace std;

int coinChange2(int coins[] , int n , int amount){
    int dp[amount + 1];
    memset(dp , 0 , sizeof(dp));
    dp[0] = 1;

    for(int i = 1 ; i<=amount ; i++){               //subproblem for amount i
        for(int j = 0 ; j<n ; j++){                 //consider jth coin        
            if(coins[j] <= i){                       //if considering jth coin is feasible
                int subproblem = dp[i - coins[j]];    //if jth is considered then i - coins[j] will be remaining amount so we need to check if that amt can be made
                if(subproblem != 0)
                    dp[i]+= subproblem;
            }
        }
    }
    return dp[amount];
}
int main(){
    int arr[] ={1,2,5};
    int n = sizeof(arr)/sizeof(int);
    int amount = 5;
    cout<<coinChange2(arr , n , amount);

    return 0;
}