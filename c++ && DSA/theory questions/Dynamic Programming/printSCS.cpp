#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];
    
bool notInLCS(char a , char b ,string &lcs , int l){      //if both chars are not in lcs string;
    if(a != lcs[l] && b != lcs[l])
        return true;
    return false;
}
bool bothInLCS(char a , char b , string &lcs , int l){
    if(a == lcs[l] && b == lcs[l])
        return true;
    return false;
}

string LCSstring(const string &s1 ,const string &s2){
    int m = s1.length();
    int n = s2.length();
    //filling LCS matrix
    for(int i = 0 ; i<=m ; i++){
        for(int j = 0 ; j<=n ; j++){
            if(i ==0 || j ==0)
                dp[i][j] = 0;
            else{
                dp[i][j] = ( s1[i-1] == s2[j-1] ) ? dp[i-1][j-1] + 1 : max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }
    //making the LCS string
    string res = "";
    int i = m , j = n;
    while(dp[i][j] != 0){
        if(s1[i-1] == s2[j-1]){
            res.push_back(s1[i-1]);
            i--;
            j--;
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
    
string shortestCommonSupersequence(const string &s1, const string &s2) {
    int m = s1.length();
    int n = s2.length();
    
    string lcs = LCSstring(s1 , s2);
    
    int i = 0 , j = 0 , l = 0;
    string res = "";
    while(i<m && j<n){
        if( notInLCS(s1[i] , s2[j] , lcs , l) ){
            res.push_back(s1[i++]);
            res.push_back(s2[j++]);
        }
        else if( bothInLCS(s1[i] , s2[j] , lcs , l) ){
            
            res.push_back(s1[i]);
            l++;
            i++;
            j++;
        }
        else{                                    //any one in LCS
            if(s1[i] == lcs[l]){
                while(s2[j] != s1[i])
                    res.push_back(s2[j++]);
            }
            else{
                while(s1[i] != s2[j])
                    res.push_back(s1[i++]);
            }
        }
        
    }
    while(i<m){
        res.push_back(s1[i++]);
    }
    while(j<n)
        res.push_back(s2[j++]);
    
    return res;
}


int main(){
    string s1 = "abcdaf";
    string s2 = "acbcf";
    cout<<shortestCommonSupersequence(s1 , s2);
    return 0;
}