#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int , int > a , pair<int , int> b){
    if(a.second == b.second){
        return a.first>b.first;
    }
    return a.second < b.second;
}

vector<int> frequencySort(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> map;
    for(auto x : nums){
        map[x]++;
    }
    vector<pair<int , int>> freq;
    for(auto pr : map){
        freq.push_back(pr);
    }
    sort(freq.begin() , freq.end() , compare);
    vector<int> ans;
    for(auto pr : freq){
        int i = pr.second;
        while(i--){
            ans.push_back(pr.first);
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {-1,1,-6,4,5,-6,1,4,1};
    vector<int> ans = frequencySort(arr);
    for(auto x : ans){
        cout<<x<<endl;
    }
    return 0;
}