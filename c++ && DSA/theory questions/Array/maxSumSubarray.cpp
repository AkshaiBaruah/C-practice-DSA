#include<iostream>
using namespace std;

int maxSumSubarray(int arr[] , int n){       
    int res = arr[0];                            //result
    int curr_sum = arr[0];                       //current sum of the subarray which is being considered
    for(int i =1 ; i<n ;i++){
        curr_sum += arr[i];
        res = max(res , curr_sum);          //if curr sum of the considered subarray in more than prev result then we update result
        curr_sum = max(curr_sum , 0);       //if curr subarray sum becomes negative that means that this subarray is useless so we reset the curr sum starting a new subarray
    }
    return res;
}

int maxSumSubarray2(int arr[] , int n){
    int res = arr[0];
    int curr_sum = 0;
    for(int i =0 ; i <n ; i++){
        curr_sum = max(arr[i] , arr[i] + curr_sum);              //this sees if we should add curr_sum which was the sum before arr[i] or not...because if arr[i] itself is greater than without taking curr_sum(which means curr_sum was -ve) its better to not include curr_sum in our ans subarray and begin a new subarray from arr[i]
        res = max(res , curr_sum);
    }
    return res;
}


int main(){
    int arr[] = {-5,-4,-3,-2,-8};
    int n = sizeof(arr)/sizeof(int);
    cout<<maxSumSubarray(arr , n)<<endl;
    cout<<maxSumSubarray2(arr , n);                 //i like the first version
    return 0;
}