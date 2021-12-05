#include<iostream>
using namespace std;

void lomuto_partition(int arr [] , int n ){
    int l = 0;
    int p = arr[n-1];
    for(int i =0 ; i<n-1 ; i++){
        if(arr[i] < p){
            swap(arr[l] , arr[i]);
            l++;
        }
    }
    swap(arr[l] , arr[n-1]);
}
int main(){
    int arr[] = {3,8,6,12,10,8};
    lomuto_partition(arr , 6);
    for(int i =0 ; i<6 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}