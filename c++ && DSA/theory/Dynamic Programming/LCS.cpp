#include<bits/stdc++.h>
using namespace std;
//plain recursion
int LCS1(string &s1 , string &s2 , int m , int n){
    //base case
    if(m == 0 || n == 0)
        return 0;
    //choice diagram
    if(s1[m-1] == s2[n-1])
        return 1+ LCS1(s1 , s2 , m -1 , n - 1);
    
    return max(LCS1(s1 , s2 , m -1 , n) , LCS1(s1 , s2 , m , n-1));
}

//using dp
int LCS2(string &s1 , string &s2 , int m , int n){
    int dp[m+1][n+1];
    
    for(int i = 0 ; i<=m ; i++)
        dp[i][0] = 0;
    for(int i = 0 ; i<=n ; i++)
        dp[0][i] = 0;

    for(int i = 1 ; i<=m ; i++){                    //s1 of length i
        for(int j = 1 ; j<=n ; j++){                //s2 of length j
            if(s1[i-1] == s2[j-1])                  //if last char of given length srings match then the value of current subproblem is 1 more than the previous 
                dp[i][j] = dp[i-1][j-1] + 1;
            else                                    //if doesn't match then its max of the two logical choices available
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
        }
    }
    return dp[m][n];
}
int main(){
    string s1 = "akshai";
    string s2 = "aksiooo";
    int m = s1.length() , n = s2.length();
    cout<<LCS1(s1 , s2 , m , n)<<endl<<LCS2(s1 , s2 , m , n);
    return 0;
}