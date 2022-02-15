#include<bits/stdc++.h>
using namespace std;

int LPS(string &s , int n){                           //fun that returns LPS of a string of length n
    for(int i = n -1 ; i>0 ; i--){
        int j;
        for(j = 0 ; j<i ; j++){
            if(s[j] != s[n - i + j])
                break;
        }
        if (j==i)
        return i;
    }
    return 0;
}
vector<int> naiveLPSArray(string &s){                  //O(n^3) time complexity
    int n = s.length();
    vector<int> LPSArray(n,0);
    for(int i =0 ; i<n; i++){
        LPSArray[i] = LPS(s,i+1);
    }
    return LPSArray;
}
int main(){
    string s ="abacabad";
    vector<int> LPSArray = naiveLPSArray(s); 
    for(auto x : LPSArray){
        cout<<x<<" ";
    }
    return 0;
}
