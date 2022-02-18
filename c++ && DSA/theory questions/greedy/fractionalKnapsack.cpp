#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int , int> a , pair<int , int> b){
    int r1 = a.second/a.first ;
    int r2 = b.second/b.first;
    return r1 > r2; 
}

double fractionalKnapsack(vector<pair<int , int>> prices, int k){
    int n = prices.size();
    sort(prices.begin() , prices.end() , compare);
    int i = 0;
    double res = 0.0;
    while(i < n && k > 0){
        int curr = min(k , prices[i].first);
        res += (double)(prices[i].second/prices[i].first)*curr;
        k -= curr;
        i++;
    }
    return res;
}

int main(){
    vector<pair<int , int>> input = {{30 ,120} , {20 , 100} , {10 , 60}};
    cout<<fractionalKnapsack(input , 50);
    return 0;
}