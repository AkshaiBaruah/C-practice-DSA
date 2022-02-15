#include<iostream>
using namespace std;

void reverse(int arr[] , int l , int r){
    while(l<=r){
        swap(arr[l++] , arr[r--]);
    }
}
void rotateK(int arr[] , int k , int n){
    reverse(arr , 0 , n-1);
    reverse(arr , 0 , n-1-k);
    reverse(arr , n-k , n-1);
}
int main(){
    int arr[] ={1,2,3,4,5,6,7,8,9};
    rotateK(arr , 3 , sizeof(arr)/4);
    
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}