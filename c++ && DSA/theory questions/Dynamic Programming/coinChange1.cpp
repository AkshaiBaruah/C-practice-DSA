#include<bits/stdc++.h>                  //give the minimum number or coins
using namespace std;

int coinChange(int coins[] , int n , int sum){                //give min coins to make up sum
    int dp[sum + 1];
    dp[0] = 0;
    for(int i = 1 ; i<=sum ; i++){
        dp[i] = -1;
    }
    for(int i = 1 ; i<= sum ; i++){                            //subproblem for an amount i
        for(int j = 0 ; j<n ; j++ ){                           //considering jth coin
            if(coins[j] <= i){                                 //if considering jth coin is feasible
                int subproblem = dp[i - coins[j]];             //if jth coin is considered, i - coins[j] amount will be remaining to be made, so we will need the value of dp[i - coins[j]]
                if(subproblem == -1)                           //if subproblem -1, it means remaining amt can't be made so don't touch dp[i]
                    continue;                              
                else{
                    if(dp[i] == -1)                            //if prev no combi was found to make up i, initialize it
                        dp[i] = 1 + dp[i - coins[j]];
                    else                                       //if a new combo found, assign the min value
                        dp[i] = min(dp[i] , 1 + dp[i - coins[j]]);
                }
            }
        }
    }

    return dp[sum];
}
int main(){
    int arr[] = {2,5};
    int n = sizeof(arr)/sizeof(int);
    int sum = 11;
    cout<<coinChange(arr , n , sum);
    
    return 0;
}