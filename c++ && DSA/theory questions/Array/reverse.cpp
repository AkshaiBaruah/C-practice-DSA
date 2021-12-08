#include<iostream>
using namespace std;

void reverse(int arr[] , int n){                      //two pointer
    int l =0;
    int r = n-1;
    while(l++<=r--){
        swap(arr[l-1] , arr[r+1]);
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    reverse(arr , 5);
    for(int i =0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}