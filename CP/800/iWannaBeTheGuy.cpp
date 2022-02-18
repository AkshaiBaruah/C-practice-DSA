#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    unordered_set<int> s;
    int p;
    cin>>p;
    for(int i  = 0 ; i <p ; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    int q;
    cin>>q;
    for(int i = 0 ; i<q ; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    if(s.size() == n)
        cout<<"I become the guy.";
    else 
        cout<<"Oh, my keyboard!";
}

int main(){
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}