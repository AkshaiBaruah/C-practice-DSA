#include<iostream>
#include<algorithm>
using namespace std;

void moveNegative( int arr[] , int n );

int main(){
    int n{};
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ;i++){
        cin>>arr[i];
    }
    moveNegative(arr, n );
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

void moveNegative( int arr[] , int n){
    int l = -1;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < 0){
            l++;
            swap(arr[i] , arr[l]);
        }
    }
}