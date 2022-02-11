#include<bits/stdc++.h>
using namespace std;

int largest(int arr[]  ,int n){
    int res = arr[0];
    int curr = 0;
    for(int i = 0 ;i<n; i++){
        curr += arr[i];
        res = max(res , curr);
        curr = max(curr , 0);

    }
    return res;
}

int main(){
    int arr [] = { -5,4,6,-1,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<largest(arr , n);
    
    return 0;
}