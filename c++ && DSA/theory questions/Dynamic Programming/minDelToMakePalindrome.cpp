#include<bits/stdc++.h>
using namespace std;
//O(len^2) : needed to fill up the subproblem matrix
int longestPalindromicSubsequence(string &s1){             //returns the lenght of longest palidromic substring
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    int n = s1.length();

    int dp[n+1][n+1];
    for(int i = 0 ; i<=n ; i++){
        for(int j = 0 ; j<=n ; j++){
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else{
                if(s1[i-1] == s2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max( dp[i-1][j] , dp[i][j-1]);
            }
        }
    }
    return dp[n][n];
}
int minDeletion(string &s){
    
    int n = s.length();
    int lps = longestPalindromicSubsequence(s);                 //we will get the longest palindromic subsequence : we need to preserve this : which means reduce our original string to this palindromic subsequence

    return n - lps;
}
int main(){
    string s = "abazzz";
    cout<<minDeletion(s);
    return 0;
}