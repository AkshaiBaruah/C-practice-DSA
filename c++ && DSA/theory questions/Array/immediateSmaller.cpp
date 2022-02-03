#include<iostream>
using namespace std;

int immediateSmaller(int arr[] , int x, int n){
    int res = INT32_MIN;
    for(int i =0 ; i<n ; i++){
        if(arr[i] < x && arr[i] > res)
            res = arr[i];
    }
    return res;
}

int main(){
    int arr[] = {4,67,13,12,15};
    cout<<immediateSmaller(arr , 16 , sizeof(arr)/4);
    return 0;
}