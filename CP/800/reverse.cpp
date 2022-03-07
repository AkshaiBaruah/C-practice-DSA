#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[] , int l , int r){
    while(l<=r){
        swap(arr[l++] , arr[r--]);
    }
}
void print(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i <n ; i++){
        cin>>arr[i];
    }
    int l  = 0, r = 0;

    for(int i = 0 ; i<n ; i++){
        if(arr[i] != i+1){
            l = i;
            for(int j = i ; j<n ; j++){
                if(arr[j] == l + 1){
                    r = j;
                    break;
                }
            }
            break;
        }
    }
    reverse(arr , l , r);
    print(arr , n);
}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}