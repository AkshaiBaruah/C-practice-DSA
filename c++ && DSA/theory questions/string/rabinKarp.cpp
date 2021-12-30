#include<bits/stdc++.h>
using namespace std;

void rabinKarp(string &text , string &pat){
    int n = text.length();
    int m = pat.length();
    int h = 1 , d=26 , q = 100000007;
    for(int i =0 ; i < m -1 ; i++){
        h = (h*d)%q;                     //this is d^m
    }
    int p =0 , t =0;
    for(int i =0 ; i<m; i++){
        p =(p*d + pat[i])%q;        //hash of the pattern
        t= (t*d + text[i])%q;       //hash of the text of pattern size
    }
    for(int i =0 ; i<=n -m; i++){
        int j;
        if(p==t){
            for(j =0 ; j<m ; j++){
                if(pat[j]!=text[i+j])
                    break;
            }
            if(j==m)
                cout<<i<<" ";
        }
        if(i<n-m){
            t = ((t - text[i]*h)*d + text[i+m])%q;            //rolling the text hash
            if(t<0) t = t+q;
        }
        
    }

}
int main(){
    string text = "abbaabba";
    string pat = "abba";
    rabinKarp(text ,pat);
    return 0;
}