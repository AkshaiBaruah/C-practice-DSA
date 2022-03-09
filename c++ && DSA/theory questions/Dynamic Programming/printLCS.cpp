#include<bits/stdc++.h>
using namespace std;
void fillLCS(vector<vector<int>> &dp , string &s1 , string &s2 , int m , int n){

    for(int i = 1 ; i<=m ; i++){
        for(int j = 1 ; j<=n ; j++){
            if(s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
        }
    }
}

string printLCS(string &s1 , string &s2 , int m , int n){
    vector<vector<int>> dp(m+1 , vector<int> (n + 1 , 0));
    fillLCS(dp , s1 , s2 , m , n);            //length of longest common subsequence

    string res = "";
    int i = m , j = n;
    while(dp[i][j] != 0){
        
        if(s1[i-1] == s2[j-1]){
            res.push_back(s1[i-1]);
            i--; j--;
        }
        else{
            if(dp[i][j] == dp[i-1][j])
                i--;
            else
                j--;
        } 
    }
    reverse(res.begin() , res.end());
    return res;
}
int main(){
    string s1 = "bbbaaaba";
    string s2 = "bbababbb";
    int m = s1.length();
    int n = s2.length();
    cout<<printLCS(s1 , s2 , m , n);
    
    return 0;
}