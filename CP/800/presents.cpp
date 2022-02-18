#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i<n ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[arr[i]-1]<<" ";
    }
}

int main(){
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}