#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<vector<int>> v = {{1,1,1,1,1}, {1,1,1,1,1}};
    cout<<v.size()<<" "<<v[0].size();
    return 0;
}