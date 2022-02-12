#include<bits/stdc++.h>
using namespace std;


int main(){
    long long int n;
    cin>>n;
    long long int count =0;

    while(n){
        int last = n%10;
        if(last == 4 || last == 7)
            count++;
        n/=10;
    }   

    if(count == 4 || count == 7)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}