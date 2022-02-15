#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int remDup(int arr[]  , int n){
    if(n==0)
        return 0;
    int size = 1;                         //because at least 1 element will be unique obv
    for(int i = 1; i <n ; i++){
        if(arr[i] != arr[size-1]){
            arr[size] = arr[i];
            size++;
        }
    }
    return size; 
}

int main(){
    int arr[] = {1,1,1,2,3,4,4};
    int n = remDup(arr , 7);
    cout<<"[ ";
    for(int i  = 0 ; i<n  ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    return 0;
}