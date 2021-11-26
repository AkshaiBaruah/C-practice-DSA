#include<iostream>
using namespace std;

void moveZeroes(int arr[] , int n){
    int non_zero = -1;
    for(int i =0 ; i<n ; i++){
        if(arr[i] != 0){
            non_zero++;
            swap(arr[i] , arr[non_zero]);
        }
    }
}

int main(){

    int arr[] = {0,0,10,0,0,0};
    moveZeroes(arr , 6);
    for(int i =0 ; i<6 ; i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}