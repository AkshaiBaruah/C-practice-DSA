#include<iostream>
using namespace std;

void moveZeroes(int arr[] , int n){
    int partn = 0;                 //size of non zero elemnts; hence inilialized to zero; this also acts as the partition between non zero and zeroes
    for(int i =0 ; i<n ; i++){
        if(arr[i] != 0)
            swap(arr[i] , arr[partn++]);
    }
}
//driver code
int main(){

    int arr[] = {0,0,10,0,0,0};
    int n = sizeof(arr)/sizeof(int);
    moveZeroes(arr , n);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}