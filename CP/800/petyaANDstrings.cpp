#include<bits/stdc++.h>
using namespace std;

void solve(){
    
}
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;

    int n  = s1.length();
    for(int i = 0 ; i <n ; i++){
        if(s1[i] < 97){                        //convert char to lowercase for comparison
            s1[i] = s1[i] + 32;
        }

        if(s2[i] < 97){                        //do the same with second string
            s2[i] = s2[i] + 32;
        }

        if(s1[i]<s2[i]){
            cout<<-1;
            exit(0);
        }
        else if(s1[i] > s2[i]){
            cout<<1;
            exit(0);
        }
    }
    cout<<0;
    
    return 0;
}