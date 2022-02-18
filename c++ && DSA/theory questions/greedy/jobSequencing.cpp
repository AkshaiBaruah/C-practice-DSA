#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int , int > a , pair<int , int > b){
    if(a.first = b.first)
        return a.second > b.second;
    return a.first < b.first;
}
int jobSeqProfit(vector<pair<int , int>> jobs  ){
    sort( jobs.begin() , jobs.end() , compare);
    int curr_start = 0;
    int profit = 0;
    for(auto pr : jobs){
        if(pr.first > curr_start){
            profit += pr.second;
            curr_start++;
        }
        else if(pr.first < curr_start)
            break;
    }
    return profit;
}
int main(){
    vector<pair < int , int > > input ={ {2, 50} ,  {2 , 60} , {3 , 20} , {3 , 30} };
    cout<<jobSeqProfit(input);
    return 0;
}