#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    
    int u =0, l=0;
    for(char c : s){
        if (c > 96)
            l++;
        else u++;
    }

    if(l>=u)
        for(char &c : s)
            c = tolower(c);
    
    else
        for(char &c : s)
            c = toupper(c);
    
    cout<<s;
    return 0;
}