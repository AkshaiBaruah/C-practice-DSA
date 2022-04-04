#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int res = 0;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        if(sum > 1)
            res++;
    }
    cout<<res;
    return 0;
}