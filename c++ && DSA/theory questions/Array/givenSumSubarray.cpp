#include<iostream>                //given unsorted array find subarray with given sum
using namespace std;

bool givenSumSubarray(int arr[] , int n ,int sum){
    int curr_sum = 0;
    int len = 0;
    int i =0;
    while(i<n){
        if(curr_sum == sum)
            return true;
        else if(curr_sum > sum){

        }
        curr_sum+=arr[i];
    }
}
int main(){

    return 0;
}