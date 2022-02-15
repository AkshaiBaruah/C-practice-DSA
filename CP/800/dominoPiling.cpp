#include<bits/stdc++.h>
using namespace std;


int main(){
    int m , n;
    cin>>m>>n;

    if( m%2 ==0 ){
        cout<<m/2*n;
    }
    else{
        cout<<(m/2*n) + n/2;
    }
    return 0;
}