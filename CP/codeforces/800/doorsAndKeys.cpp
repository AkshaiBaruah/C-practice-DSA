#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long double
#define ull unsigned long long 

bool isKey(char c){
    return (c == 'r' || c == 'g' || c == 'b');
}
void solve(){
    string s;
    cin>>s;
    unordered_set<char> set;
    for(int i = 0 ; i<5 ; i++){
        if(isKey(s[i]))
            set.insert(s[i]);
        else{
            if(set.find(s[i] + 32) == set.end()){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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