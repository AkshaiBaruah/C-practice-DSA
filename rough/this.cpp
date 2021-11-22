#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4,3,4,7,3,6,35,76,83,567,5};
    int n =11;
    sort(arr , arr + n);
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}