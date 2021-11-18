                        //if a string is palindrome using recursion
#include<iostream>
#include<string>
using namespace std;
bool isPalin(string*  , int , int );
int main(){
    string s="racecar";
    bool result = isPalin(&s , 0 , s.length() -1);
    cout<<boolalpha<<result;
    return 0;

}

bool isPalin( string* s , int l , int r){
    if(l>=r)
    return true;
    if((*s)[l]!=(*s)[r])
    return false;
    else 
    return isPalin(s , l+1 , r-1);
}