#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int res =0;
    char curr = s[0];

    for(int i = 1 ; i<n ; i++ ){
        if(s[i] == curr) res ++;
        else curr = s[i];
    }

    cout<<res;
    return 0;
}