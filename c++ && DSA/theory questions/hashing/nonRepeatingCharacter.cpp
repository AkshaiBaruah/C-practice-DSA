#include<bits/stdc++.h>               //find the leftmost non repeating character in a string
using namespace std;

char nonRepeatingCharacter(string &s){
    int n = s.length();
    int cnt[CHAR_MAX] = {0};
    for(const char c : s){
        cnt[c]++;
    }
    for(const char c : s){
        if(cnt[c] == 1)
            return c;
    }
    return '\0';
}
int main(){
    string s = "zxvczbtxyzvy";
    cout<<nonRepeatingCharacter(s);
    return 0;
}