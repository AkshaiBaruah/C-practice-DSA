#include<bits/stdc++.h>
using namespace std;
//naive 
void naivePattern(string &text , string &pat){
    int m = pat.length();
    int n  = text.length();
    for(int i =0 ; i<=n-m ; i++){                       //i -> start of possible pattern in text; if pat found print this i;
        int j;
        for(j = 0 ; j<m ; j++){                     //j is for traversing pattern
            if(pat[j] != text[i+j])
                break;
        }
        if(j==m)
            cout<<i<<" ";
    }
}
//naive pattern search for distinct char pattern
void naivePatternDistinct(string &text , string &pat){
    int m = pat.length();
    int n = text.length();
    int i =0;
    while(i<=n-m){
        int j;
        for(j =0 ; j<m ; j++){
            if(pat[j] != text[i+j])
                break;
        }
        if(j == m)
            cout<<i<<" ";
        if(j == 0)
            i++;
        else i = i + j;
    }
}
int main(){
    string text = "abbaabbab";
    string pat = "ab";
    naivePattern(text , pat);
    cout<<endl;
    naivePatternDistinct(text , pat);
    return 0;
}