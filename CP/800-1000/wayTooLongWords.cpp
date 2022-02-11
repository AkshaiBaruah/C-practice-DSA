#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    if(n<10)
        cout<<s<<endl;
    else{
        string s1 = to_string(s[0]);
        string s2 = to_string(n-2);
        string  s3 = to_string(s[n-1]);
        cout<<s1+s2+s3<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}