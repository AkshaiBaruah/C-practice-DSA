#include<iostream>
using namespace std;

int peakElement(int arr[] , int n){
    if(n==1)
        return arr[0];
    if(arr[0]>=arr[1])
        return arr[0];
    if(arr[n-1]>=arr[n-2])
        return arr[n-1];
    int l =1;
    int r = n-2;
    while(l<=r){
        int mid = (l+r)/2;
        if( (arr[mid] >= arr[mid-1]) && (arr[mid] >= arr[mid+1]) )
            return arr[mid];
        else if(arr[mid+1] > arr[mid]) 
            l = mid+1;
        else
            r= mid-1;
    }
    return INT32_MIN;
}

int main(){
    int arr[] = {10,20,30,40,50};
    cout<<peakElement(arr, 5);
    return 0;
}