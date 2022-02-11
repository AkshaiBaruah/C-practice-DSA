#include<iostream>
using namespace std;

// int maxCircularSumSubarray(int arr[] , int n){
//     int res = arr[0];
//     int curr_sum = arr[0];
//     int l =1;
//     int r = 1;
//     while(l<=r){
//         curr_sum+=arr[r];
//         res = max(res  , curr_sum);
//         if(curr_sum <=0){
//             l = r;
//         }
//         r++;
//     }
 
//     return res;
// }
int maxCircularSumSubarray(int arr[] , int n){
    int res;
    int curr_sum = 0;
    int i;
    for(i = n-1; i>=0 ; i--){
        if(arr[i] < 0)
            break;
        curr_sum +=arr[i];
    }
    res = curr_sum;
    for(int j = 0 ; j<=i ; j++){
        curr_sum += arr[j];
        res = max(res , curr_sum);
        curr_sum = max(curr_sum , 0);
    }
    return res;
}
int main(){
    int arr[] = {-8,7,6};
    int n = sizeof(arr)/sizeof(int);
    cout<<maxCircularSumSubarray(arr , n);
    return 0;
}