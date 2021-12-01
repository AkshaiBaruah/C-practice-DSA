#include<iostream>
using namespace std;

int maxCircularSumSubarray(int arr[] , int n){
    int res = arr[0];
    int curr_sum = arr[0];
    int l =1;
    int r = 1;
    while(l<=r){
        curr_sum+=arr[r];
        res = max(res  , curr_sum);
        if(curr_sum <=0){
            l = r;
        }
    }


   
    return res;
}
int main(){
    int arr[] = {5,-2,3,4};
    cout<<maxCircularSumSubarray(arr , 4);
    return 0;
}