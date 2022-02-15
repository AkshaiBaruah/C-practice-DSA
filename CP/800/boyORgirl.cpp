#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    int n = s.length();
    int distinct = 0;
    bool cnt[CHAR_MAX]  {};
    for(int i = 0  ; i<n ; i++){
        char c = s[i];
        if(cnt[c] == 0)
            distinct++;
        cnt[c] = 1;
    }
    if(distinct%2 == 0)
        cout<<"CHAT WITH HER!";
    else 
        cout<<"IGNORE HIM!";
        
    return 0;
}