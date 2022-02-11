#include<bits/stdc++.h>
using namespace std;
//better O(n) time and space;
int isEquilibrium(int arr[] , int n){
    int prefix_sum[n] {};
    prefix_sum[0] = arr[0];
    for(int i = 1 ; i<n ; i++){
        prefix_sum[i] = arr[i] + prefix_sum[i-1];
    }
    for(int i = 0 ; i<n ; i++){
        int s1 = (i == 0) ?  0 : prefix_sum[i-1];
        int s2 = prefix_sum[n-1] - prefix_sum[i];
        if(s1 == s2)
            return i;
    }
    return -1;
}
//optimal O(n) time and O(1) space;
int isEquilibrium2(int arr[] , int n){
    int s1 = 0 , s2 = 0;
    for(int i = 0 ; i<n ;i++){
        s2 += arr[i];
    }
    for(int i = 0 ; i<n ; i++){
        s2 -= arr[i];
        if(s1 == s2)
            return i;
        
        
        s1 += arr[i];
    }
    return (s1 == s2) ? n-1 : -1;
}
int main(){
    int arr[ ] = {4,-2,2 , 1};
    int n = sizeof(arr)/sizeof(int );
    cout<<isEquilibrium(arr , n)<<endl;
    cout<<isEquilibrium2(arr , n);

    return 0;
}