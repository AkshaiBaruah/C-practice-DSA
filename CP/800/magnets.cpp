#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin>>n;
    int groups = 0;
    int prev = 0;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        if(x != prev){
            groups++;
            prev = x;
        }
    }
    cout<<groups;

}

int main(){
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}