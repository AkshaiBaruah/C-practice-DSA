#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long double

void solve(){
    ll n;
    cin>>n;
    long long s;
    cin>>s;
    long long ans = floor(s/(n*n));
    cout<<ans<<endl;
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