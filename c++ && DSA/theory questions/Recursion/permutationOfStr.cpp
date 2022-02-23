#include<bits/stdc++.h>
using namespace std;

void permute(string &s , int l = 0){
    if( l == s.length() - 1)                               //when all positions are fixed
        cout<<s<<"  ";
    else{
        for(int i = l ; i< s.length() ; i++){
            swap(s[l] , s[i]);
            permute(s , l+1);
            swap(s[l] , s[i]);                 //this is where we correct the string(backtrack)
        }
    }
}
//print permutations which doesn't contain "AB" as a substring

bool isSafe(string &s , int l , int i){
    if(l != 0 && s[l-1] == 'a' && s[i] == 'b')
        return false;
    if(i-l == 1 && s[l] == 'b' && s[i] == 'a')
        return false;
    
    return true;
}
void permute2(string &s , int l = 0){
    if(l == s.length())
        cout<<s<<"  ";
    else{

        for(int i = l ; i< s.length(); i++){
            if(isSafe(s , l , i)){
                swap(s[l] , s[i]);
                permute2(s , l + 1);
                swap(s[l] , s[i]);
            }   

        }
    }
}
int main(){
    string s = "abc";
    permute(s );            //print all permutations;
    cout<<endl;
    permute2(s);

    return 0;
}