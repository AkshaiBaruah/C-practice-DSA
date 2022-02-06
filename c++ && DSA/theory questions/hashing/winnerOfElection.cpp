#include<bits/stdc++.h>
using namespace std;

pair<string , int> winner(vector<string> &v){
    unordered_map<string  ,int > m;
    for(string &s : v){
        m[s]++;
    }
    pair<string , int> res = {"" , 0 };                           //first : string , second : freq;
    for(auto pr : m){
        if(pr.second > res.second){
            res = {pr.first , pr.second};
        }
        else if(pr.second == res.second){
            res.first = min(res.first  ,pr.first);                 //lexicographically smaller get assigned into result;
        }
    }
    return res;

}
int main(){
    vector<string> v = {"blake" , "clark" , "andy"};
    pair<string , int> ans = winner(v);
    cout<<ans.first<<" "<<ans.second;
    return 0;
}