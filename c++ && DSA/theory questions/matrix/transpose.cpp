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

vector<vector<int>> transpose(vector<vector<int>> &v){
    int r = v[0].size();
    int c = v.size();
    vector<vector<int>> res(r , vector<int>(c, -1));
    for(int i = 0 ; i <r;  i++){
        for(int j =0 ; j<c;  j++){
            res[i][j] = v[j][i];
        }
    }
    return res;
}

int main(){
    vector<vector<int>> v1 = {{1,2,3} , {1,2,3} , {1,2,3}};
    print_matrix(v1);
    sq_transpose(v1);
    print_matrix(v1);
    vector<vector<int>> v2 = transpose(v1);
    print_matrix(v2);
    vector<vector<int>> v3 = {{1,1} , {2,2} , {3,3} , {4,4} , {5,5}};
    print_matrix(v3);
    vector<vector<int>> v4 = transpose(v3);
    print_matrix(v4);

    return 0;
}