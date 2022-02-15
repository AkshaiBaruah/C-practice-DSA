#include<bits/stdc++.h>
using namespace std;


int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int cost = w*(w+1)/2*k;                //cost of w bananas using sum of natural numbers
    int required = cost - n;   

    if (required>0)
        cout<<required;
    else 
        cout<<0;
        
    return 0;
}