#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long double
#define ull unsigned long long 

void solve(){
    string s;
    cin>>s;
    int c0 = 0 , c1 = 0;
    for(auto x : s){
        if(x == '0')
            c0++;
        else
            c1++;
    }
    int n = s.length();
    // if(n == 0 || n == 1 || n == 2){
    //     cout<<0<<endl;
    //     return;
    // }
    if(c0 != c1){
        cout<<min(c0 , c1)<<endl;
        return ;
    }
    else{
        cout<<c1-1<<endl;
    }
    
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