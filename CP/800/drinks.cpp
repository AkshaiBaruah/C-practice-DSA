#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    double num = 0;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        num += (double)x/100;
    }
    cout<<num/n*100;
}

int main(){
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}