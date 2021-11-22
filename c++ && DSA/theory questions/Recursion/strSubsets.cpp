#include<iostream>
#include<string>
using namespace std;

void prSubsets( string &str , string curr = "" , int index = 0){
    if(index == str.length()){
        cout<<curr<<" ";
        return;
    }
    prSubsets(str , curr , index + 1);
    prSubsets(str , curr + str[index] , index + 1);
    
}
int main(){
    string s = "ABC";
    prSubsets(s );
}