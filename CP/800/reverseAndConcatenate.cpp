#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long double
#define ull unsigned long long 

bool isPalindrome(string &s){
    int l = 0 , r = s.length() -1;
    while(l<r){
        if(s[l++]!=s[r--])
            return false;
    }
    return true;
}


void solve(){
    int n , k;
    cin>>n>>k;
    string s;
    cin>>s;

    if(k == 0){
        cout<<1<<endl;
        return;
    }
    if(isPalindrome(s))
        cout<<1<<endl;
    else
        cout<<2<<endl;
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