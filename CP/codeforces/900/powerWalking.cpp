#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long double
#define ull unsigned long long 

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    sort(arr , arr+ n);
    int cnt = 1;
    for(int i = 1 ; i<n ; i++){
        if(arr[i] != arr[i-1])
            cnt++;
    }
    for(int i = 0 ; i<n ; i++){
        cout<<max(i+1 , cnt)<<" ";
    }
    cout<<endl;
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