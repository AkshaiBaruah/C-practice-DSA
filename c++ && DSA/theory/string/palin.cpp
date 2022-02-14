#include<bits/stdc++.h>
using namespace std;

bool palindrome(string &s){
    int l = 0;
    int r = s.length() -1;
    while(l<r){
        if(s[l] != s[r])
            return false;
        l++; r--;
    }
    return true;
}
bool Rpalindrome(string &s , int l , int r){
    if(l>=r)
        return true;
    if(s[l] != s[r])
        return false;
    else return Rpalindrome(s , l+1 , r-1);
    
}
int main(){
    string s = "abba";
    cout<<boolalpha<<palindrome(s)<<" "<<Rpalindrome(s , 0 ,s.length() -1);
    return 0;
}