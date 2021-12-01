#include<iostream>
#include<bits/stdc++.h>
using namespace std;

pair<int , int> twoSum(int arr[] , int n , int target){
    pair<int , int > pr = {-1,-1};
    unordered_map<int , int> m;
    for(int i =0 ; i<n ; i++){
        if(m.find(target - arr[i]) != m.end())
            return {m[target - arr[i]] , i};
        m[arr[i]] = i;
    }
}
int main(){
    int arr[] = {3,2,4};
    pair<int ,int> ans = twoSum(arr , 3 ,6);
    cout<<ans.first<<" "<<ans.second;
    return 0;
}