#include<iostream>
using namespace std;

int getMax(int arr[] , int n ){
    int maxm = INT32_MIN;
    for(int i =0 ; i<n ; i++){
        maxm = max(arr[i] , maxm);
    }
    return maxm;
}
int main(){
    int arr[] = {1,2,3,4,65,5,0,63,3};
    cout<<getMax(arr , sizeof(arr)/sizeof(int));
    return 0;
}