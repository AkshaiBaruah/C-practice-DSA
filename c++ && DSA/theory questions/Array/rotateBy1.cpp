#include<bits/stdc++.h>
using namespace std;

void rotateBy1(int arr[] , int n){
    int first = arr[0];
    for(int i =0 ; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = first;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    rotateBy1(arr , n);
    for(int x  : arr){
        cout<<x<<" ";
    }
    return 0;
}