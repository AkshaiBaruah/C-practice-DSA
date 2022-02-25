#include<bits/stdc++.h>
using namespace std;

//using plain recursion
bool isSubsetSum1(int arr[] , int n , int sum){
    if(sum == 0)
        return true;
    if(n == 0)
        return false;
    
    if(arr[n-1] <= sum)
        return isSubsetSum1(arr , n -1 , sum - arr[n-1]) || isSubsetSum1(arr , n-1 , sum);
    else 
        return isSubsetSum1(arr , n-1 , sum);
}

//using memoization
bool memo[1000][1000];
bool isSubsetSum2(int arr[] , int n , int sum){
    
}

//using tabulation : bottom up
bool isSubsetSum3(int arr[] , int n , int sum){
    bool dp[n+1][sum + 1];                       //dp matrix or the subproblem matrix;

    for(int i = 0  ; i<=n ; i++){                //initialization
        dp[i][0] = true;
    }
    for(int i = 1 ; i<=sum ; i++){
        dp[0][i] = false;
    }

    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=sum ; j++){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i-1][j - arr[i-1]] || dp[i-1][j];
            }
            else   
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}
int main(){
    int arr[]  = {3, 34, 4, 12, 5, 2};
    int n = sizeof(arr)/sizeof(int);
    cout<<boolalpha<<isSubsetSum3(arr , n , 9)<<endl;
    cout<<isSubsetSum1(arr,  n , 9)<<endl;
    cout<<isSubsetSum2(arr , n , 9);
    return 0;
}