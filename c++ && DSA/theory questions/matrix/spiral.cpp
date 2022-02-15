#include<iostream>
#include<vector>
using namespace std;

void sq_spiral(vector<vector<int>> &m){
    int l = 0;
    int r = m.size() -1;
    while(l<=r){
        for(int i = 0 ; i < r-l ; i++)
            cout<<m[l][l+i]<<" ";
        for(int i = 0 ; i <r-l ; i++)
            cout<<m[l+i][r]<<" ";
        for(int i =0 ; i<r-l ; i++)
            cout<<m[r][r-i]<<" ";
        for(int i =0; i<r-l ; i++)
            cout<<m[r-i][l]<<" ";
        l++; r--;
    }
}

void spiral(vector<vector<int>> &m){
    
}
int main(){
    vector<vector<int>> m = {{1,2,3} , {4,5,6} , {7,8,9}};
    sq_spiral(m);
    return 0;
}