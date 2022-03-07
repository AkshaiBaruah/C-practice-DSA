#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long double
#define ull unsigned long long 

void solve(){
    
    vector<pair<int , int>> vertices(3);
    for(auto &pr : vertices){
        cin>>pr.second>>pr.first;
    }
    sort(vertices.begin() , vertices.end());          //sorted acc to y coordinates
    if(vertices[2].first == vertices[1].first){
        int diff = vertices[2].second - vertices[1].second;
        cout<<abs(diff)<<endl;
    }
    else{
        cout<<0<<endl;
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