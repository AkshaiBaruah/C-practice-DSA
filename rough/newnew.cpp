#include<iostream>
using namespace std;

void reverse(int arr[] , int n){
    int l = 0; int r= n-1;
    while(l<=r){
        swap(arr[l++] , arr[r--]);
    }
}
int main(){
    int arr[] = {1,2,3,4,65,5,0,63,3};
    
    
    return 0;
}