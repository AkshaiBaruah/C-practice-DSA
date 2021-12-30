#include<bits/stdc++.h>
using namespace std;

bool anagram(const string &s1 , const string &s2){
    if(s1.length() != s2.length())
        return false;

    vector<int> v1(26 , 0);             //char cnt signature of s1
    vector<int> v2(26 , 0);             //char cnt signature of s2
    
    for(int i =0 ; i < s1.length() ; i++){
        v1[s1[i] - 97]++;
        v2[s2[i] - 97]++;
    }
    return (v1==v2);
}
int main(){
    string s1 = "listen";
    string s2 = "silent";
    cout<<boolalpha<<anagram(s1, s2);
    return 0;
}