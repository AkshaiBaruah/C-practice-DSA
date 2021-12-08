#include<iostream>
using namespace std;

int partition(int arr[] , int n){
    int pivot = arr[n-1];
    int i = 0;
    int j =0 ;
    while(j<n-1){
        if(arr[j] < pivot){
            swap(arr[i] , arr[j]);
            i++;
        }
        j++;
    }
    swap(arr[i] , arr[n-1]);
    return i;
}
void quick_sort(int arr[] , int l , int r){
    if(l<r){
        int p = partition(arr, r+1);
        quick_sort(arr , l, p-1);
        quick_sort(arr, p+1 ,r);
    }
}
int main(){
    int arr[] = {5,4,3,2,1};
    quick_sort(arr,0 , 4);
    for(int i=0 ; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}