#include<bits/stdc++.h>
using namespace std;

//better : two traversals
int LNRC1(const string &s){
    int cnt[CHAR_MAX] = {0};                 //char cnt of s
    for(auto c : s){
        cnt[c]++;
    }
    for(int i =0 ; i<s.length() ; i++){
        if(cnt[s[i]] == 1)
            return i;
    }
    return -1;
}
//optimal : one traversal
int LNRC2(const string &s){
    int FI[CHAR_MAX];                         //first index of every character in string : can also use hashmap -1:not visited -2:repeating
    fill(FI , FI + CHAR_MAX , -1);
    for(int i = 0 ; i<s.length() ; i ++){
        if(FI[s[i]] == -1)
            FI[s[i]] = i;
        else FI[s[i]] = -2;
    }
    int res = INT32_MAX;
    for(auto x : FI){
        if(x >=0)
        res = min(res , x);
    }
    return res;
}
int main(){
    string s = "geeksforgeeks";
    cout<<LNRC1(s)<<endl<<LNRC2(s);
}