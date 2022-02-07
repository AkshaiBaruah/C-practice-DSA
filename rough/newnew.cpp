#include<bits/stdc++.h>
using namespace std;

void maxHeapify(int arr[] , int n ,int i){
    int largest = i;
    while(1){
        int l= 2*i+1; int r = l+1;
        if(l<n && arr[l] > arr[largest])
            largest = l;
        if(r<n && arr[r] > arr[largest])
            largest = r;
        
        if(largest != i){
            swap(arr[i] , arr[largest]);
            i = largest;
        }
        else break;
    }
}
void buildHeap(int arr[] , int n){
    for(int i = (n-2)/2 ; i>=0 ; i--){
        maxHeapify(arr , n , i);
    }
}
int main(){
    return 0;
}