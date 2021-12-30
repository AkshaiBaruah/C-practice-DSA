#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[10];
    int i = 1;
    fill(arr , arr + 10 , i++ );
    for(int i =0 ; i<10 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}