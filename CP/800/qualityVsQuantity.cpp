#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int &x : arr){
        cin>>x;
    }
    sort(arr.begin() , arr.end());
    int l = 0 , r = n;              //l = index till which blue sum , r = index till which red sum
    long long s1 = arr[l] , s2 =0;
    while(l<r){
        if(s2 > s1){
            cout<<"YES"<<endl;
            return;
        }
        s2+=arr[--r];             //include one more in red so that sum may be more    
        s1+=arr[++l];             //now have to include in blue also because have to keep count greater
        
    }
    cout<<"NO"<<endl;
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