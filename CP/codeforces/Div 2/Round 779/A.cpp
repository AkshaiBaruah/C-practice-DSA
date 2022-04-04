#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long double
#define ull unsigned long long 
#define pb push_back
#define pf push_front

void solve(){
    int n ;
    cin>>n;
    string s ;
    cin>>s;
    int ans = 0 ;
    int zeroes = 0 ;
    int ones = 0;

    for(int i = 0 ; i<n ; i++){
        if(s[i] =='1' && zeroes>0){
            ones++;
        }
        else if(s[i] == '0'){
            zeroes++;
            if(zeroes == 2){
                if(ones < 2){
                    ans += 2-ones;
                }
                zeroes = 1;
                ones = 0;
            }
        }
    }
    cout<<ans;
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