#include<bits/stdc++.h>
using namespace std;

int largestsumsubarray(int arr[],  int n){
    if(n ==0){
        return INT32_MIN;
    }
    int res = arr[0];
    int curr_sum = arr[0];
    for(int i = 1; i <n ; i++){
        curr_sum += arr[i];
        res = max(res , curr_sum);
        curr_sum = max(0  ,curr_sum);
    }
    return res;
}

int main(){
    int arr[] = {};
    int n = sizeof(arr)/sizeof(int);
    cout<<largestsumsubarray(arr , n);
    return 0;
}