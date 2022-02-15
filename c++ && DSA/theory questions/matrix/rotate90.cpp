#include<iostream>
#include<vector>
using namespace std;

void print_matrix(const vector<vector<int>> &v){
    int r = v.size() , c =v[0].size();
    for(int i = 0 ;  i<r;  i++){
        for(int j =0  ; j<c; j ++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"============================\n";
}

void sq_transpose(vector<vector<int>> &v){
    int n = v.size();
    for(int i = 0 ; i<n; i++){
        for(int j =i+1; j<n ; j++){
            swap(v[i][j] , v[j][i]);
        }
    }
}

void Rreverse(vector<vector<int>> &v){
    int n = v.size();
    for(int i = 0 ; i <n ; i++){
        int l = 0 , r = n-1;
        while(l<=r){
            swap(v[i] , v[r]);
            l++; r--;
        }
    }
}

void rotate(vector<vector<int>> &v){
    sq_transpose(v);
    Rreverse(v);
}
int main(){
    vector<vector<int>> v1 = {{1,2,3} , {4,5,6} , {7,8,9}};
    rotate(v1);
    print_matrix(v1);
}