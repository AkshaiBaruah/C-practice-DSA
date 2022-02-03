#include<iostream>
using namespace std;

void reverse(int arr[] , int n){                      //two pointer
    int l =0;
    int r = n-1;
    while(l<=r){
        swap(arr[l++] , arr[r--]);
    }
}
int main(){
    int arr[] = {1};
    reverse(arr , 1);
    for(int i =0 ; i<1 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}