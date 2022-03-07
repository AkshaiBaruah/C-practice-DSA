#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long double
#define ull unsigned long long 

void solve(){
    int n;
    cin>>n;
    unordered_set<int> set;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        set.insert(x);
    }
    int count = set.size();
    for(int i = 0 ; i<n ; i++){
        cout<<max(i+1 , count)<<" ";
    }
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