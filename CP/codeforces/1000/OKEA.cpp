#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long double
#define ull unsigned long long 

void solve(){
    int n , k;
    cin>>n>>k;
    int cnt = n*k;                  //total number of elements in the matrix
    if(cnt %2 != 0 && k!= 1){       //k = 1 can manage anything 
        cout<<"NO\n";
        return ;
    }
    else if(cnt%2 == 0 && n&2 != 0){
        cout<<"NO\n";
        return ;
    }
    cout<<"YES\n";
    vector<vector<int>> arr(n  , vector<int>(k));
    
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<k ; j++){
            if(i%2 == 0){            //rows to keep odds
                cout<<2*(i/2*k + j) + 1<<" ";
            }
            else{
                cout<<((i-1)/2*k + j + 1)* 2<<" ";
            }
        }
        cout<<endl;
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