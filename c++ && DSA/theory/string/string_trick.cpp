#include<iostream>
#include<string>
using namespace std;

void print_cnt(string &s){
    int alpha[26] = {0};
    for(int i =0 ; i<s.length() ; i++){
        alpha[s[i] - 97]++;
    } 
    for(int i = 0 ; i<26 ; i++){
        if(alpha[i] >0){
            cout<<(char)(i + 97)<<" "<<alpha[i]<<endl;
        }
    }
}
int main(){
    string s1 = "geeksforgeeks";
    print_cnt(s1);
    
    return 0;
}