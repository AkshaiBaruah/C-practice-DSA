#include<iostream>
#include<string>
using namespace std;

bool isPalin(string &str , int l  , int r ){             //two pointer approach
    if(l<r){
        if(str[l] != str[r])
            return false;
        else return (str , l+1 , r-1);
    }
    return true;
}

int main(){
    string s = "abcba";
    cout<<boolalpha<<isPalin(s , 0 , s.length() -1);
}