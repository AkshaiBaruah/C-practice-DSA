#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long double
#define ull unsigned long long 
#define pb push_back
#define pf push_front

void solve(){
    int a , b;
    cin>>a>>b;
    if(a != 0){
        cout<<2*b + a + 1;
    }
    else{
        cout<<1;
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