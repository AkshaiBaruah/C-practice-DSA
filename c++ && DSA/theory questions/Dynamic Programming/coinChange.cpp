#include<bits/stdc++.h>
using namespace std;

int coinChange(int arr[] , int n , int sum){
    static int res = 0;
    if(sum == 0){
        res++;
        return 1;
    }
        
    if(sum <0)
        return -1;
    for(int i = 0 ; i<n ; i++){
        coinChange(arr , n , sum - arr[i]);
    }
    return res;

    
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(int);
    int sum = 4;
    cout<<coinChange(arr , n , sum);
    
    return 0;
}