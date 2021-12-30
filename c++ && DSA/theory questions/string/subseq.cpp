#include<iostream>
#include<string>
using namespace std;
//iterative
bool subseq(const string &s1 , const string &s2){
    int i = 0 , j = 0;
    int m = s1.length() , n = s2.length();            //length of both the strings
    while(i<m && j<n){
        if(s2[j] == s1[i])
            j++;
        i++;
    }
    return (j==n);
}
//recursive
bool Rsubseq(const string &s1 , const string &s2 , int m , int n ){
    if(n == 0)
        return true;
    if(m == 0)
        return false;
    if(s1[m-1] == s2[n-1])
        return Rsubseq(s1, s2 , m-1 , n-1);
    else 
        return Rsubseq(s1 , s2 , m-1 , n);
}

int main(){
    string s1 = "abcba";
    string s2 = "aa";
    cout<<boolalpha<<subseq(s1 , s2);
    cout<<endl<<Rsubseq(s1,s2,s1.length() , s2.length());
    return 0;
}