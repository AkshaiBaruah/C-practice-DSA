#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , h;
    cin>>n>>h;
    int res = 0;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        if(x>h)
            res +=2;
        else res +=1;
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