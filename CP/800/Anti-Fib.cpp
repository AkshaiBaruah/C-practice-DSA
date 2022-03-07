#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long double
#define ull unsigned long long 
void print(vector<int> &arr){
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
}
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i<n ; i++){
        arr[i] = n-i;
    }
    int one = n-1;
    for(int i = 0 ; i<n ; i++){
        print(arr);
        if(one>0){
            swap(arr[one] , arr[one - 1]);
            one--;
        }       
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