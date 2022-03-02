#include<bits/stdc++.h>
using namespace std;
//using tabulation
int sol(int arr[] , int n , int diff){
    int sum = 0;
    for(int i = 0 ; i<n ; i++){
        sum += arr[i];
    }
    int S = (sum + diff)/2;
    if((sum + diff)%2 != 0)
        return 0;
    
    int dp[n+1][S + 1];             //no of subsets with sum S
    for(int i = 0 ; i<=n ; i++){
        dp[i][0] = 1;
    }
    for(int i = 1 ; i<= S ; i ++){
        dp[0][i] = 0;
    }

    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<= S ; j++){
            if(arr[i-1] <= j)
                dp[i][j] = dp[i-1][j] + dp[i-1][j - arr[i-1]];
            else    
                dp[i][j] = dp[i-1][j - arr[i-1]];
        }
    }
    return dp[n][S];
    
}
int main(){
    
    return 0;
}