#include<bits/stdc++.h>
using namespace std;
//memotable
int memo[1000][1000];           //we need to store values of all combinations of m and n so we need [m+1][n+1] size at least 
int dp[1000][1000];

int LCS(string &s1 , string &s2, int m , int n){
    if(m == 0 || n == 0)
        return 0; 
    if(s1[m-1] == s2[n-1])
        return 1 + LCS(s1 , s2 , m-1  , n-1);
    else 
        return max(LCS(s1 , s2 , m , n-1) , LCS(s1 , s2 , m-1 , n));
}
//using memoization
int LCS2(string &s1 , string &s2 , int m , int n){
    if(memo[m][n]==-1){
        if(m == 0 || n == 0)
            memo[m][n] = 0;
        else if(s1[m-1] == s2[n-1])             //at first i didn't write else if but only if which resulted in out of bounds access
            memo[m][n] = 1 + LCS2(s1 , s2 , m-1 , n-1);
        else
            memo[m][n] = max(LCS2(s1 , s2 , m , n-1) , LCS2(s1 , s2 , m-1 , n));
    }

    return memo[m][n];
}
//using tabulation
int LCS3(string &s1 , string &s2 , int m , int n){                 //remember one thing : no. of rows = length of column and vice versa;
    for(int i = 0 ; i<=m ; i++)
        dp[i][0] = 0;
    
    for(int i = 0 ; i<=n ; i++)
        dp[0][i] = 0;

    for(int i = 1; i<=m ; i++){
        for(int j = 1 ; j<=n ; j++){
            if(s1[i-1] == s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else    
                dp[i][j] = max(dp[i][j-1] , dp[i-1][j]);
        }
    }
    return dp[m][n];
}
int main(){
    
    memset(memo , -1 , sizeof(memo));
    string s = "akshai";
    string s2 = "erenakshai";
    int m = s.length();
    int n = s2.length();
    cout<<LCS(s , s2 , m , n)<<" "<<LCS2(s , s2 , m , n)<<" "<<LCS3(s , s2 , m , n);
    return 0;
}