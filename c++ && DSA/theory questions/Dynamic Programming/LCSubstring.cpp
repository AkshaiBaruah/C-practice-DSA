#include<bits/stdc++.h>
using namespace std;

int LCSubstring(string &s1 , string &s2 , int m , int n){
    int dp[m+1][n+1];

    for(int i = 0 ; i<=m ; i++){
        dp[i][0] = 0;
    }
    for(int i = 0 ; i<=n ; i++){
        dp[0][i] = 0;
    }

    //filling the subproblem matrix
    int max_len = 0;
    for(int i = 1 ; i<=m ; i++){
        for(int j = 1 ; j<=n ; j++){
            if(s1[i-1] == s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = 0;

            max_len = max(max_len , dp[i][j]);
        }
    }

    return max_len;
}
int main(){
    string s1 = "akshai";
    string s2 = "zzaksppp";
    
    int m = s1.length() , n = s2.length();
    cout<<LCSubstring(s1 , s2 , m , n);
    return 0;
}