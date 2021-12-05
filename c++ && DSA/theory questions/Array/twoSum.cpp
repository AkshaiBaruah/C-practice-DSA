#include<iostream>
#include<bits/stdc++.h>
using namespace std;

pair<int , int> twoSum(int arr[] , int n , int target){
    unordered_map<int , int> m;
    for(int i =0 ; i<n ; i++){
        int required = target - arr[i];
        if(m.find(required) != m.end())
            return {m[required] , i};
        m[arr[i]] = i;
    }
    return {-1 , -1};
}
int main(){
    int arr[] = {1,1,1};
    pair<int ,int> ans = twoSum(arr , 3 ,2);
    cout<<ans.first<<" "<<ans.second;
    return 0;
}