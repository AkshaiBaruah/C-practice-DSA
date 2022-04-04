#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a , b , c , d ,D;
    cin>>a>>b>>c>>d>>D;
    int ans = 0;
    for(int i =1; i<=D; i++){
        if( i%a == 0 || i%b == 0 || i%c == 0 || i%d == 0)
            ans++;
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