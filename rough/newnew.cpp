#include<bits/stdc++.h>
using namespace std;

//naive
void pattern(string &t , string &p){
    int n = t.length();
    int m = p.length();
    for(int i = 0 ; i <= n-m ; i++){
        int j= 0;
        while(i < n && j<m){
            if(t[i+j] != p[j])
                break;
            j++;
        }
        if(j == m)
            cout<<i<<" ";

    }
}
int main(){
    return 0;
}