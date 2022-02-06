#include<bits/stdc++.h>
using namespace std;

int largest (int arr[] , int n){
    int res = arr[0];
    for(int i =0 ; i<n ; i++){
        res =max(res , arr[i]);
    }
    return res;
}
int main(){
    return 0;
}