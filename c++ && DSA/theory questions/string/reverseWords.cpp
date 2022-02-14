#include<bits/stdc++.h>
using namespace std;

void reverse (string &s , int l , int r){
    while(l<=r){
        swap(s[l++] , s[r--]);
    }
}

void reverseWords(string &s){
    reverse(s , 0 , s.length() - 1);              //reverse the whole string
    int l =0 ;
    int r =0;
    while(1){
        if(r ==s.length())
        {
            reverse(s , l , r-1);
            return;
        }
        else if(s[r] == ' '){
            reverse(s , l , r-1);
            l = ++r;
        }
        else r++;

    }
}
int main(){
    string s = "Akshai Baruah ";
    reverseWords(s);
    cout<<s;
    return 0;
}