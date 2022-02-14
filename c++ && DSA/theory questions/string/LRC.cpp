#include<bits/stdc++.h>
using namespace std;
//better : two traversals
int LRC(const string &s){
    int cnt[CHAR_MAX] = {0};                //char cnt of s
    for(char c : s){
        cnt[c] ++;
    }
    for(int i = 0 ; i < s.length() ; i++){
        if(cnt[s[i]] > 1)
            return i;
    }
    return -1;
}
//optimized : one traversal
int LRC2(const string &s){
    int res = -1;
    bool char_prsnt[CHAR_MAX] = {};                 //0 : not encountered, 1 : encountered
    //fill(char_prsnt , char_prsnt + CHAR_MAX , false);
    for(int i = s.length() -1 ; i>=0 ; i--){        //traverse from back
        if (char_prsnt[s[i]])                      
            res = i;
        char_prsnt[s[i]] = true;
    }
    return res;
}
int main(){
    string s = "abcbd";
    cout<<LRC(s)<<endl;
    cout<<LRC2(s);
    return 0;
}