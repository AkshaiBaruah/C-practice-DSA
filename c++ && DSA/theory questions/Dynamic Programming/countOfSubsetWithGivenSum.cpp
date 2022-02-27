#include<bits/stdc++.h>
using namespace std;
//plain recursion
int sol1(int arr[] , int n , int sum){
    //base case
    if(sum == 0)
        return 1;
    if(n == 0)
        return 0;

    //this is choice diagram : or what I think as complex subproblem breakdown
    if(arr[n-1]<= sum)
        return sol1(arr , n-1 , sum) + sol1(arr , n-1 , sum - arr[n-1]);
    else 
        return sol1(arr , n -1 , sum);

}
//using dp
int sol2(int arr[] , int n , int sum){
    int dp[n+1][sum+1];
    for(int i = 0 ; i<=n ; i++){            //initialization
        dp[i][0] = 1;
    }
    for(int i = 1 ; i<= sum ; i++){
        dp[0][i] = 0;
    }

    for(int i = 1; i<=n ; i++){
        for(int j = 1; j<= sum ; j++){
            if(arr[i-1] <= j)
                dp[i][j] = dp[i-1][j] + dp[i-1][j - arr[i-1]];
            else        
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}
int main(){
    int arr[] = {2, 3, 5, 6, 8, 10};
    int n = sizeof(arr)/sizeof(int);
    int sum = 10;
    cout<<sol1(arr,  n , sum)<<endl<<sol2(arr , n  ,sum);
    return 0;
}