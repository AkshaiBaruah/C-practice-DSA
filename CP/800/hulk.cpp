#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string res="";
    for(int i = 0 ; i<n ; i++){
        if( i == 0)
            res +="I hate ";
        else if(i%2 == 0){
            res +="that I hate ";
        }
        else{
            res +="that I love ";
        }
    }
    res +="it";
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