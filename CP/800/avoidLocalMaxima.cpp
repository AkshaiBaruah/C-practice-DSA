#include<bits/stdc++.h>
using namespace std;

bool isMaxima(int arr[] , int i){
    if(arr[i] > arr[i-1] && arr[i] < arr[i+1])
        return true;
    return false;
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
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int cnt = 0;
    for(int i = 1 ; i<n-1 ; i++){
        if( isMaxima(arr,i) ){
            cnt++;
            arr[i+1] = max(arr[i] , arr[i+1]);
        } 
    }
    cout<<cnt<<endl;
    print(arr , n);
}

int main(){
    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}