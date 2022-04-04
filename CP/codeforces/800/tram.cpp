#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int cap = 0;
    int curr= 0;
    while(n--){
        int a , b;
        cin>>a>>b;
        curr += b-a;
        cap = max(cap , curr);
    }

    cout<<cap;
    return 0;
}