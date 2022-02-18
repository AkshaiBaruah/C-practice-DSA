#include<bits/stdc++.h>
using namespace std;
bool compare( pair<int , int> a, pair<int , int> b){
    return (a.second < b.second);
}
int activitySelection(vector<pair<int , int>> act){
    int n = act.size();
    sort(act.begin() , act.end() , compare);
    int res = 0;
    int prev_end = INT_MIN;
    for(auto pr : act){
        int curr_start = pr.first;
        if(curr_start >= prev_end){
            res++;
            prev_end = pr.second;
        }
    }
    return res;
}
int main(){
    vector<pair<int , int>> input = {{3,8}, {2,4},{1,3},{10,11}};
    cout<<activitySelection(input);
    return 0;
}