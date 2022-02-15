#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    int n = s.length();
    int arr[3] {};                        //making an array for count of 1,2,3
    for(int i = 0  ; i<n ; i+=2){
        arr[s[i] - '0' -1]++;
    }
    string res = "";
    while(arr[0]--)
        res.append("1+");
    
    while(arr[1]--)
        res.append("2+");
    
    while(arr[2]--)
        res.append("3+");
    
    if(res.back() == '+')
        res.pop_back();

    cout<<res;
    return 0;
}