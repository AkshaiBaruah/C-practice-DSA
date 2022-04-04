#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int n ;
    cin>>n;
    long long ans = 0;
    if(n %2 == 0){
        ans = n/2;
    }
    else{
        ans = (n-1)/2 - n;
    }

    cout<<ans;
}

int main(){
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}