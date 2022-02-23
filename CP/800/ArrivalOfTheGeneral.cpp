#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int max = INT_MIN , min = INT_MAX;
    int p , q;             //index of max and min;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        if(x>max){
            p = i;
            max = x;
        }
        if(x<=min){
            q = i;
            min = x;
        }
    }
    if(p<q){
        int ans = p + n-1 - q;
        cout<<ans;
    }
    else{
        int ans = p + n -1 -q -1;
        cout<<ans;
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