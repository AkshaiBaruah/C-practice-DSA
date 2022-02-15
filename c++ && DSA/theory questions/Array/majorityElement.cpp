#include<bits/stdc++.h>
using namespace std;

bool isMaj(int arr[], int n , int elem){
    int cnt = 0;
    for(int i = 0 ; i<n ; i++){
        if(arr[i] == elem)
            cnt++;
    }
    return (cnt>n/2);
}
int maj(int arr[] , int n){
    int cnt = 0;
    int elem;
    for(int i = 0 ; i<n ; i++){
        if(cnt == 0){
            elem = arr[i];
            cnt++;
        }
        else
            (arr[i] != arr[i-1]) ? cnt-- : cnt++;
        
    }

    bool ans = isMaj(arr , n , elem);             //checking if elem is truely maj by counting it's frequency;
    if(ans)
        return elem;
    else 
        return INT32_MIN;
}
int main(){
    int arr[] = {1,1,0,2,3};
    int n = sizeof(arr)/sizeof(int);
    cout<<maj(arr , n);
    
    return 0;
}