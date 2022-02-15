#include<iostream>
using namespace std;

int maxSumSubarray(int arr[]  , int n){          // kadane's algorithm
    int result = arr[0];                         //ultimate result;
    int curr_sum = 0;                            //curr_sum is the sum where we store the sum of current subarray in consideration
    for(int i =0 ; i<n ; i++){ 
        curr_sum += arr[i];
        result = max(curr_sum , result);         //if the sum of current subarray in consideration is greater than result of result would be updated;
        curr_sum = max( 0 , curr_sum) ;          //if sum of current subarray becomes negative then there is no point in keeping those elements in the subarray , we should in fact start search of a new subarray by initializing curr_sum as 0;
    }                                            //this is because 
    return result;                               //returns the ultimate result
}

int main(){         
    int arr[4] {-4 , -1, -2 , 0}; 
    cout<<maxSumSubarray(arr , 4)<<" ";
    return 0;
}