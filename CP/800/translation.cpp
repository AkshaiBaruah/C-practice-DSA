#include<bits/stdc++.h>
using namespace std;


int main(){
    string s , t;
    cin>>s>>t;
    
    int n1 = s.length();
    int n2 = t.length();

    if(n1 != n2){                //if length not equal then simply return
        cout<<"NO";
        exit(0);
    }

    int i = 0 , j = n1-1;
    while(n1--){                //two pointer check
        if(s[i] != t[j]){
            cout<<"NO";
            exit(0);
        }
        i++ , j--;
    }
    cout<<"YES";

    return 0;
}