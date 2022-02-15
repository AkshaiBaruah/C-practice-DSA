#include<bits/stdc++.h>
using namespace std;


int main(){
    int x;
    cin>>x;
    int res = 0;
    for(int i = 5 ; i>0 && x > 0; i--){
        res += x/i;
        x = x%i;
    }

    cout<<res;
    return 0;
}