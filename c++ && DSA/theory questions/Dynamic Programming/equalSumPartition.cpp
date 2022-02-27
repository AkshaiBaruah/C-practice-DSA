#include<bits/stdc++.h>
using namespace std;

bool equalSumPartition(int arr[] , int n){
    int sum = 0;
    for(int i = 0 ; i<n ; i++){
        sum+=arr[i];
    }
    if(sum %2 != 0)
        return false;
    
    bool dp[n][sum/2 + 1];

    for(int i = 0 ; i<=n ;i ++){
        dp[i][0] = true;
    }
    for(int i = 1 ; i<=sum/2 ; i++){
        dp[0][i] = false;
    }

    for(int i = 1; i <=n ; i++){
        for(int j = 1; j<=sum/2; j++){
            if(arr[i-1] <= j)
                dp[i][j] = dp[i-1][j] || dp[i-1][j - arr[i-1]];
            else    
                dp[i-1][j];
        }
    }
    return dp[n][sum/2];
}
int main(){
    int arr[] = {1, 5, 11, 5};
    int n = sizeof(arr)/sizeof(int);
    cout<<boolalpha<<equalSumPartition(arr,  n);
    return 0;
}