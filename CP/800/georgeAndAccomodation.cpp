#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int res = 0;
    for(int i = 0 ;i<n; i++){
        int p , q;
        cin>>p>>q;
        if(q-p >1)
            res++;
    }
    cout<<res;
}

int main(){
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}