#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long double
#define ull unsigned long long 
#define pb push_back
#define pf push_front

void solve(){
    int n;
    cin>>n;
    int rem = n%7;
    int l = n%10;
    if(rem == 0){
        cout<<n<<endl;
        return ;
    }
    else{
        if(l - rem >= 0)
            cout<<n - rem<<endl;
        else    
            cout<<n + 7 - rem<<endl;
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