#include<bits/stdc++.h>
using namespace std;

int minDiff(int arr[] , int n){
    int sum = 0;
    for(int i = 0 ; i<n ; i++){
        sum += arr[i];
    }
    bool dp[n+1][sum+1];
    for(int i = 0 ; i<=n ; i++){
        dp[i][0] = true;
    }

    for(int i = 1; i<=sum/2 ; i++){
        dp[0][i] = false;
    }
    for(int i = 1; i<=n ; i++){
        for(int j =1 ; i<= sum/2 ; j++){
            if(arr[i-1 <= j])
                dp[i][j] = dp[i-1][j] || dp[i-1][j - arr[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    int res = INT_MAX;

    for(int i = 0 ; i<= sum/2 ; i++){
        if(dp[n][i]){
            int s1 = i;
            int s2 = sum - i;
            int diff  = s2 - s1;
            res = min (res , diff);
        }
    }
    return res;
}
int main(){
    
    
    return 0;
}