#include<bits/stdc++.h>
using namespace std;

void rabinKarp(string &text , string &pat){
    int n = text.length();
    int m = pat.length();
    int h = 1 , d=26 , q = (int)1e9 + 7;
    for(int i =0 ; i < m -1 ; i++){
        h = (h*d)%q;                     //this is d^m-1
    }
    int p =0 , t =0;
    for(int i =0 ; i<m; i++){
        p =(p*d + pat[i])%q;        //hash of the pattern
        t= (t*d + text[i])%q;       //initial hash of the text of pattern size
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
        if(i<n-m){                                            //calculating the hash of coming window so when we are at last window no next window is there so we have this condition
            t = ((t - text[i]*h)*d + text[i+m])%q;            //rolling the text hash
            if(t<0) t = t+q;
        }
        
    }

}
//wrote for practice
void fun(string &txt , string &pat){
    int n  =txt.length() , m = pat.length();
    int d = 34;
    int h = 1;             //this is to calculate d^m-1 in order to perform the rolling hash
    int mod = (int)1e9 + 7;
    int p = 0;
    int t = 0;
    for(int i = 0 ; i<m ; i++){
        if(i!= m-1)
            h*=d;           //this will give d^m-1;
        p = (p*d + pat[i])%mod;
        t = (t*d + txt[i])%mod;
    }

    for(int i = 0 ; i<=n-m ; i++){
        if(t == p){
            int j = 0 ;
            while(j<m){
                if(txt[i+j] != pat[j])
                    break;
                j++;
            }
            if(j == m)
                cout<<i<<" ";
        }
        if(i<n-m){              //rolling the hash for next window except the last window because next of last would be out of bounds
            t = (((t - txt[i]*h)*d) + txt[i+m])%mod;
        }
    }
}
int main(){
    string text = "abbaabba";
    string pat = "abba";
    rabinKarp(text ,pat);
    cout<<endl;
    fun(text , pat);
    return 0;
}